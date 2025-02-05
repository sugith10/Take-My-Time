//
//
// Copyright 2017 gRPC authors.
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

#include <memory>
#include <string>
#include <vector>

#include <grpcpp/impl/channel_argument_option.h>
#include <grpcpp/impl/server_builder_option.h>
#include <grpcpp/impl/server_builder_plugin.h>
#include <grpcpp/support/channel_arguments.h>

namespace grpc {

std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const std::string& name, const std::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const std::string& name, const std::string& value)
        : name_(name), value_(value) {}

    void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* /*plugins*/)
        override {}

   private:
    const std::string name_;
    const std::string value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new StringOption(name, value));
}

std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const std::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const std::string& name, int value)
        : name_(name), value_(value) {}

    void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* /*plugins*/)
        override {}

   private:
    const std::string name_;
    const int value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new IntOption(name, value));
}

std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const std::string& name, void* value) {
  class PointerOption final : public ServerBuilderOption {
   public:
    PointerOption(const std::string& name, void* value)
        : name_(name), value_(value) {}

    void UpdateArguments(ChannelArguments* args) override {
      args->SetPointer(name_, value_);
    }
    void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* /*plugins*/)
        override {}

   private:
    const std::string name_;
    void* value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new PointerOption(name, value));
}

}  // namespace grpc
