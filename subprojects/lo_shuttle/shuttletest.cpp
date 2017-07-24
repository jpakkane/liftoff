/*
 * Copyright 2017 Jussi Pakkanen
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 *    http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include<liftoff/liftoff_shuttle.hpp>
#include<liftoff/liftoff_test.hpp>

int main(int, char**) {
    liftoff::ShuttleLauncher l;
    std::string s1("T-2");
    std::string s2("T-1");
    std::string s3("Shuttle has been launched");

    auto reply1 = l.countdown();
    liftoff::assert_true(reply1 == s1);
    auto reply2 = l.countdown();
    liftoff::assert_true(reply2 == s2);
    auto reply3 = l.countdown();
    liftoff::assert_true(reply3 == s3);
    return 0;
}
