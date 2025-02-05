//
//
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//

#include <grpc/support/port_platform.h>

#include "src/core/lib/security/transport/tsi_error.h"

#include "src/core/lib/gprpp/status_helper.h"

grpc_error_handle grpc_set_tsi_error_result(grpc_error_handle error,
                                            tsi_result result) {
  return grpc_error_set_int(
      grpc_error_set_str(error, grpc_core::StatusStrProperty::kTsiError,
                         tsi_result_to_string(result)),
      grpc_core::StatusIntProperty::kTsiCode, result);
}
