/* Copyright 2016 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef GOOGLE_SERVICE_CONTROL_CLIENT_UTILS_GOOGLE_MACROS_H_
#define GOOGLE_SERVICE_CONTROL_CLIENT_UTILS_GOOGLE_MACROS_H_

#undef GOOGLE_DISALLOW_EVIL_CONSTRUCTORS
#define GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(TypeName) \
      TypeName(const TypeName&);                        \
      void operator=(const TypeName&)

#endif  // GOOGLE_SERVICE_CONTROL_CLIENT_UTILS_GOOGLE_MACROS_H_
