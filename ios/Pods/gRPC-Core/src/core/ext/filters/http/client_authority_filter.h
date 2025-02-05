//
//
// Copyright 2018 gRPC authors.
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

#ifndef GRPC_SRC_CORE_EXT_FILTERS_HTTP_CLIENT_AUTHORITY_FILTER_H
#define GRPC_SRC_CORE_EXT_FILTERS_HTTP_CLIENT_AUTHORITY_FILTER_H

#include <grpc/support/port_platform.h>

#include <utility>

#include "absl/status/statusor.h"

#include "src/core/lib/channel/channel_args.h"
#include "src/core/lib/channel/channel_fwd.h"
#include "src/core/lib/channel/promise_based_filter.h"
#include "src/core/lib/promise/arena_promise.h"
#include "src/core/lib/slice/slice.h"
#include "src/core/lib/transport/transport.h"

namespace grpc_core {

class ClientAuthorityFilter final
    : public ImplementChannelFilter<ClientAuthorityFilter> {
 public:
  static const grpc_channel_filter kFilter;

  static absl::StatusOr<ClientAuthorityFilter> Create(const ChannelArgs& args,
                                                      ChannelFilter::Args);

  class Call {
   public:
    void OnClientInitialMetadata(ClientMetadata& md,
                                 ClientAuthorityFilter* filter);
    static const NoInterceptor OnServerInitialMetadata;
    static const NoInterceptor OnServerTrailingMetadata;
    static const NoInterceptor OnClientToServerMessage;
    static const NoInterceptor OnServerToClientMessage;
    static const NoInterceptor OnFinalize;
  };

 private:
  explicit ClientAuthorityFilter(Slice default_authority)
      : default_authority_(std::move(default_authority)) {}
  Slice default_authority_;
};

}  // namespace grpc_core

#endif  // GRPC_SRC_CORE_EXT_FILTERS_HTTP_CLIENT_AUTHORITY_FILTER_H
