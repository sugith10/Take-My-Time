/* This file was generated by upb_generator from the input file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/extensions/transport_sockets/tls/v3/secret.upb_minitable.h"
#include "envoy/config/core/v3/base.upb_minitable.h"
#include "envoy/config/core/v3/config_source.upb_minitable.h"
#include "envoy/extensions/transport_sockets/tls/v3/common.upb_minitable.h"
#include "udpa/annotations/sensitive.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "udpa/annotations/versioning.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_extensions_transport_sockets_tls_v3_GenericSecret_submsgs[1] = {
  {.submsg = &envoy__config__core__v3__DataSource_msg_init},
};

static const upb_MiniTableField envoy_extensions_transport_sockets_tls_v3_GenericSecret__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__transport_0sockets__tls__v3__GenericSecret_msg_init = {
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_submsgs[1] = {
  {.submsg = &envoy__config__core__v3__ConfigSource_msg_init},
};

static const upb_MiniTableField envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__transport_0sockets__tls__v3__SdsSecretConfig_msg_init = {
  &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000001000012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_extensions_transport_sockets_tls_v3_Secret_submsgs[4] = {
  {.submsg = &envoy__extensions__transport_0sockets__tls__v3__TlsCertificate_msg_init},
  {.submsg = &envoy__extensions__transport_0sockets__tls__v3__TlsSessionTicketKeys_msg_init},
  {.submsg = &envoy__extensions__transport_0sockets__tls__v3__CertificateValidationContext_msg_init},
  {.submsg = &envoy__extensions__transport_0sockets__tls__v3__GenericSecret_msg_init},
};

static const upb_MiniTableField envoy_extensions_transport_sockets_tls_v3_Secret__fields[5] = {
  {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 24), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 24), -1, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 24), -1, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__transport_0sockets__tls__v3__Secret_msg_init = {
  &envoy_extensions_transport_sockets_tls_v3_Secret_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_Secret__fields[0],
  UPB_SIZE(16, 32), 5, kUpb_ExtMode_NonExtendable, 5, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000002000012, &upb_pom_1bt_maxmaxb},
    {0x001800000301001a, &upb_pom_1bt_maxmaxb},
    {0x0018000004020022, &upb_pom_1bt_maxmaxb},
    {0x001800000503002a, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[3] = {
  &envoy__extensions__transport_0sockets__tls__v3__GenericSecret_msg_init,
  &envoy__extensions__transport_0sockets__tls__v3__SdsSecretConfig_msg_init,
  &envoy__extensions__transport_0sockets__tls__v3__Secret_msg_init,
};

const upb_MiniTableFile envoy_extensions_transport_sockets_tls_v3_secret_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  3,
  0,
  0,
};

#include "upb/port/undef.inc"

