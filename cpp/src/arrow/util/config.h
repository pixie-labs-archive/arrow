// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define ARROW_VERSION_MAJOR 4
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 0
#define ARROW_VERSION ((ARROW_VERSION_MAJOR * 1000) + ARROW_VERSION_MINOR) * 1000 + ARROW_VERSION_PATCH

#define ARROW_VERSION_STRING "4.0.0-SNAPSHOT"

#define ARROW_SO_VERSION "400"
#define ARROW_FULL_SO_VERSION "400.0.0"

#define ARROW_CXX_COMPILER_ID "AppleClang"
#define ARROW_CXX_COMPILER_VERSION "12.0.0.12000032"
#define ARROW_CXX_COMPILER_FLAGS " -Qunused-arguments -fcolor-diagnostics -O3 -DNDEBUG"

#define ARROW_GIT_ID "9b016422e60cdb9e42fdda3315cbf548e91f3382"
#define ARROW_GIT_DESCRIPTION "apache-arrow-3.0.0-714-g9b016422e"

#define ARROW_PACKAGE_KIND ""

/* #undef ARROW_COMPUTE */
/* #undef ARROW_CSV */
/* #undef ARROW_DATASET */
/* #undef ARROW_FILESYSTEM */
/* #undef ARROW_FLIGHT */
#define ARROW_IPC
/* #undef ARROW_JSON */

/* #undef ARROW_S3 */
#define ARROW_USE_NATIVE_INT128

/* #undef GRPCPP_PP_INCLUDE */
