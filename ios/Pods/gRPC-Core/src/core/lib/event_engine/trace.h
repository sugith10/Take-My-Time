// Copyright 2022 The gRPC Authors
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
#ifndef GRPC_SRC_CORE_LIB_EVENT_ENGINE_TRACE_H
#define GRPC_SRC_CORE_LIB_EVENT_ENGINE_TRACE_H

#include <grpc/support/port_platform.h>

#include <grpc/support/log.h>

#include "src/core/lib/debug/trace.h"

extern grpc_core::TraceFlag grpc_event_engine_trace;
extern grpc_core::TraceFlag grpc_event_engine_dns_trace;
extern grpc_core::TraceFlag grpc_event_engine_endpoint_data_trace;
extern grpc_core::TraceFlag grpc_event_engine_poller_trace;
extern grpc_core::TraceFlag grpc_event_engine_endpoint_trace;

#define GRPC_EVENT_ENGINE_TRACE(format, ...)                   \
  if (GRPC_TRACE_FLAG_ENABLED(grpc_event_engine_trace)) {      \
    gpr_log(GPR_DEBUG, "(event_engine) " format, __VA_ARGS__); \
  }

#define GRPC_EVENT_ENGINE_ENDPOINT_TRACE(format, ...)                   \
  if (GRPC_TRACE_FLAG_ENABLED(grpc_event_engine_endpoint_trace)) {      \
    gpr_log(GPR_DEBUG, "(event_engine endpoint) " format, __VA_ARGS__); \
  }

#define GRPC_EVENT_ENGINE_POLLER_TRACE(format, ...)                   \
  if (GRPC_TRACE_FLAG_ENABLED(grpc_event_engine_poller_trace)) {      \
    gpr_log(GPR_DEBUG, "(event_engine poller) " format, __VA_ARGS__); \
  }

#define GRPC_EVENT_ENGINE_DNS_TRACE(format, ...)                   \
  if (GRPC_TRACE_FLAG_ENABLED(grpc_event_engine_dns_trace)) {      \
    gpr_log(GPR_DEBUG, "(event_engine dns) " format, __VA_ARGS__); \
  }

#endif  // GRPC_SRC_CORE_LIB_EVENT_ENGINE_TRACE_H
