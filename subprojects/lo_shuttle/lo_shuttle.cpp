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
#include<liftoff/liftoff_strings.hpp>
#include<liftoff/liftoff_adder.hpp>

namespace liftoff {

std::string ShuttleLauncher::countdown() {
    Adder a;
    count = a.add_numbers(count, -1);
    if(count != 0) {
        return join_strings("T-", std::to_string(count));
    } else {
        return "Shuttle has been launched";
    }
}

}
