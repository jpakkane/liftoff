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

// This one is a fully header only library.

#pragma once

#if defined _WIN32 || defined __CYGWIN__
  #define LIFTOFF_ADDER_PUBLIC __declspec(dllexport)
#else
  #if defined __GNUC__
    #define LIFTOFF_ADDER_PUBLIC __attribute__ ((visibility("default")))
  #else
    #pragma message ("Compiler does not support symbol visibility.")
    #define LIFTOFF_ADDER_PUBLIC
  #endif
#endif

namespace liftoff {

class LIFTOFF_ADDER_PUBLIC Adder {
public:

    constexpr int add_numbers(int num1, int num2) const { return num1 + num2; };
};

}
