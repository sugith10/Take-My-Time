/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/core/v3/proxy_protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/config/core/v3/proxy_protocol.upbdefs.h"
#include "envoy/config/core/v3/proxy_protocol.upb_minitable.h"

extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[717] = {'\n', ')', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'p', 'r', 
'o', 'x', 'y', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', 
'.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 
'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 
'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\340', '\001', '\n', 
'\034', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'P', 'a', 's', 's', 'T', 'h', 'r', 'o', 'u', 'g', 'h', 
'T', 'L', 'V', 's', '\022', 'c', '\n', '\n', 'm', 'a', 't', 'c', 'h', '_', 't', 'y', 'p', 'e', '\030', '\001', ' ', '\001', '(', '\016', '2', 
'D', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'P', 'r', 
'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'P', 'a', 's', 's', 'T', 'h', 'r', 'o', 'u', 'g', 'h', 'T', 'L', 'V', 
's', '.', 'P', 'a', 's', 's', 'T', 'L', 'V', 's', 'M', 'a', 't', 'c', 'h', 'T', 'y', 'p', 'e', 'R', '\t', 'm', 'a', 't', 'c', 
'h', 'T', 'y', 'p', 'e', '\022', '(', '\n', '\010', 't', 'l', 'v', '_', 't', 'y', 'p', 'e', '\030', '\002', ' ', '\003', '(', '\r', 'B', '\r', 
'\372', 'B', '\n', '\222', '\001', '\007', '\"', '\005', '*', '\003', '\020', '\200', '\002', 'R', '\007', 't', 'l', 'v', 'T', 'y', 'p', 'e', '\"', '1', '\n', 
'\021', 'P', 'a', 's', 's', 'T', 'L', 'V', 's', 'M', 'a', 't', 'c', 'h', 'T', 'y', 'p', 'e', '\022', '\017', '\n', '\013', 'I', 'N', 'C', 
'L', 'U', 'D', 'E', '_', 'A', 'L', 'L', '\020', '\000', '\022', '\013', '\n', '\007', 'I', 'N', 'C', 'L', 'U', 'D', 'E', '\020', '\001', '\"', '\335', 
'\001', '\n', '\023', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'K', '\n', 
'\007', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', '\001', ' ', '\001', '(', '\016', '2', '1', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 
'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 
'l', 'C', 'o', 'n', 'f', 'i', 'g', '.', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'R', '\007', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\022', 
'^', '\n', '\021', 'p', 'a', 's', 's', '_', 't', 'h', 'r', 'o', 'u', 'g', 'h', '_', 't', 'l', 'v', 's', '\030', '\002', ' ', '\001', '(', 
'\013', '2', '2', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 
'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'P', 'a', 's', 's', 'T', 'h', 'r', 'o', 'u', 'g', 'h', 'T', 
'L', 'V', 's', 'R', '\017', 'p', 'a', 's', 's', 'T', 'h', 'r', 'o', 'u', 'g', 'h', 'T', 'l', 'v', 's', '\"', '\031', '\n', '\007', 'V', 
'e', 'r', 's', 'i', 'o', 'n', '\022', '\006', '\n', '\002', 'V', '1', '\020', '\000', '\022', '\006', '\n', '\002', 'V', '2', '\020', '\001', 'B', '\206', '\001', 
'\n', '\"', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', 'B', '\022', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 
'l', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'B', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 
'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 
'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', ';', 'c', 'o', 'r', 'e', 'v', 
'3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[3] = {
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_core_v3_proxy_protocol_proto_upbdefinit = {
  deps,
  &envoy_config_core_v3_proxy_protocol_proto_upb_file_layout,
  "envoy/config/core/v3/proxy_protocol.proto",
  UPB_STRINGVIEW_INIT(descriptor, 717)
};
