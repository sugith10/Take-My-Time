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

#ifndef GRPC_SRC_CPP_SERVER_SECURE_SERVER_CREDENTIALS_H
#define GRPC_SRC_CPP_SERVER_SECURE_SERVER_CREDENTIALS_H

#include <stddef.h>

#include <memory>
#include <string>

#include <grpc/grpc.h>
#include <grpc/grpc_security.h>
#include <grpcpp/security/auth_metadata_processor.h>
#include <grpcpp/security/server_credentials.h>

#include "src/cpp/server/thread_pool_interface.h"

namespace grpc {

class SecureServerCredentials;

class AuthMetadataProcessorAsyncWrapper final {
 public:
  static void Destroy(void* wrapper);

  static void Process(void* wrapper, grpc_auth_context* context,
                      const grpc_metadata* md, size_t num_md,
                      grpc_process_auth_metadata_done_cb cb, void* user_data);

  explicit AuthMetadataProcessorAsyncWrapper(
      const std::shared_ptr<AuthMetadataProcessor>& processor)
      : processor_(processor) {
    if (processor && processor->IsBlocking()) {
      thread_pool_.reset(CreateDefaultThreadPool());
    }
  }

 private:
  void InvokeProcessor(grpc_auth_context* context, const grpc_metadata* md,
                       size_t num_md, grpc_process_auth_metadata_done_cb cb,
                       void* user_data);
  std::unique_ptr<ThreadPoolInterface> thread_pool_;
  std::shared_ptr<AuthMetadataProcessor> processor_;
};

class SecureServerCredentials final : public ServerCredentials {
 public:
  explicit SecureServerCredentials(grpc_server_credentials* creds)
      : creds_(creds) {}
  ~SecureServerCredentials() override {
    grpc_server_credentials_release(creds_);
  }

  int AddPortToServer(const std::string& addr, grpc_server* server) override;

  void SetAuthMetadataProcessor(
      const std::shared_ptr<grpc::AuthMetadataProcessor>& processor) override;

  grpc_server_credentials* c_creds() { return creds_; }

 private:
  SecureServerCredentials* AsSecureServerCredentials() override { return this; }

  grpc_server_credentials* creds_;
  std::unique_ptr<grpc::AuthMetadataProcessorAsyncWrapper> processor_;
};

}  // namespace grpc

#endif  // GRPC_SRC_CPP_SERVER_SECURE_SERVER_CREDENTIALS_H
