//
//
// Copyright 2016 gRPC authors.
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

#include <grpc/grpc.h>
#include <grpc/grpc_posix.h>
#include <grpc/grpc_security.h>
#include <grpcpp/server.h>
#include <grpcpp/server_posix.h>

namespace grpc {

#ifdef GPR_SUPPORT_CHANNELS_FROM_FD

void AddInsecureChannelFromFd(grpc::Server* server, int fd) {
  grpc_server_credentials* creds = grpc_insecure_server_credentials_create();
  grpc_server_add_channel_from_fd(server->c_server(), fd, creds);
  grpc_server_credentials_release(creds);
}

#endif  // GPR_SUPPORT_CHANNELS_FROM_FD

}  // namespace grpc
