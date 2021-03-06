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

// This one does not use the Liftoff test framework
// but instead rolls its own.

#include<liftoff/liftoff_strings.hpp>

int main(int, char **) {
    std::string s1("abc");
    std::string s2("def");
    std::string correct("abcdef");

    std::string answer = liftoff::join_strings(s1, s2);
    if(answer != correct) {
        return 1;
    }
    return 0;
}
