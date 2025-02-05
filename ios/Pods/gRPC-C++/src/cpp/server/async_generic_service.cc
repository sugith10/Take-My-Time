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

#include <grpcpp/completion_queue.h>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/server.h>

namespace grpc {

void AsyncGenericService::RequestCall(
    GenericServerContext* ctx, GenericServerAsyncReaderWriter* reader_writer,
    grpc::CompletionQueue* call_cq,
    grpc::ServerCompletionQueue* notification_cq, void* tag) {
  server_->RequestAsyncGenericCall(ctx, reader_writer, call_cq, notification_cq,
                                   tag);
}

}  // namespace grpc
