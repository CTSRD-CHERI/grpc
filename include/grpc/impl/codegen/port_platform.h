/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRPC_IMPL_CODEGEN_PORT_PLATFORM_H
#define GRPC_IMPL_CODEGEN_PORT_PLATFORM_H

// IWYU pragma: private

/// TODO(chengyuc): Remove this file after solving compatibility.
#include <grpc/support/port_platform.h>

#if __has_builtin(__builtin_align_up)
#define gpr_round_up(x, size) __builtin_align_up(x, size)
#else
#define gpr_round_up(x, size) (((x) + ((size) - 1)) & (~((size) - 1)))
#endif

#endif /* GRPC_IMPL_CODEGEN_PORT_PLATFORM_H */
