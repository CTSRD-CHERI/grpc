/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/tls.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/transport_sockets/tls/v3/tls.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/extensions/transport_sockets/tls/v3/common.upb.h"
#include "envoy/extensions/transport_sockets/tls/v3/secret.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext_submsgs[2] = {
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext__fields[4] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1, 1), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32, 64), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext__fields[0],
  UPB_SIZE(20, 40, 80), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext_submsgs[6] = {
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext__fields[8] = {
  {1, UPB_SIZE(12, 16, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24, 32), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 32, 48), UPB_SIZE(3, 3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(28, 48, 80), UPB_SIZE(-5, -5, -5), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(28, 48, 80), UPB_SIZE(-5, -5, -5), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 40, 64), UPB_SIZE(4, 4, 4), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(28, 48, 80), UPB_SIZE(-5, -5, -5), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(8, 8, 8), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext__fields[0],
  UPB_SIZE(32, 56, 96), 8, kUpb_ExtMode_NonExtendable, 8, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_TlsKeyLog_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_CidrRange_msginit},
  {.submsg = &envoy_config_core_v3_CidrRange_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_TlsKeyLog__fields[3] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24, 48), UPB_SIZE(0, 0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_TlsKeyLog_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_TlsKeyLog_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_TlsKeyLog__fields[0],
  UPB_SIZE(16, 40, 64), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_submsgs[13] = {
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_TlsKeyLog_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CommonTlsContext__fields[14] = {
  {1, UPB_SIZE(8, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16, 32), UPB_SIZE(0, 0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(44, 80, 160), UPB_SIZE(-5, -5, -5), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 24, 48), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(20, 32, 64), UPB_SIZE(0, 0, 0), 3, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(44, 80, 160), UPB_SIZE(-5, -5, -5), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(44, 80, 160), UPB_SIZE(-5, -5, -5), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(24, 40, 80), UPB_SIZE(2, 2, 2), 6, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(44, 80, 160), UPB_SIZE(-5, -5, -5), 7, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {11, UPB_SIZE(28, 48, 96), UPB_SIZE(3, 3, 3), 8, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {12, UPB_SIZE(44, 80, 160), UPB_SIZE(-5, -5, -5), 9, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {13, UPB_SIZE(32, 56, 112), UPB_SIZE(4, 4, 4), 10, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {14, UPB_SIZE(36, 64, 128), UPB_SIZE(5, 5, 5), 11, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(40, 72, 144), UPB_SIZE(6, 6, 6), 12, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext__fields[0],
  UPB_SIZE(48, 88, 176), 14, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider__fields[2] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24, 48), UPB_SIZE(-1, -1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider__fields[0],
  UPB_SIZE(16, 40, 64), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance__fields[2] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance_msginit = {
  NULL,
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance__fields[0],
  UPB_SIZE(16, 40, 64), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext_submsgs[4] = {
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext__fields[4] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24, 48), UPB_SIZE(3, 3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32, 64), UPB_SIZE(4, 4, 4), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext__fields[0],
  UPB_SIZE(20, 40, 80), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable *messages_layout[7] = {
  &envoy_extensions_transport_sockets_tls_v3_UpstreamTlsContext_msginit,
  &envoy_extensions_transport_sockets_tls_v3_DownstreamTlsContext_msginit,
  &envoy_extensions_transport_sockets_tls_v3_TlsKeyLog_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProvider_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CertificateProviderInstance_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CommonTlsContext_CombinedCertificateValidationContext_msginit,
};

const upb_MiniTable_File envoy_extensions_transport_sockets_tls_v3_tls_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  7,
  0,
  0,
};

#include "upb/port_undef.inc"

