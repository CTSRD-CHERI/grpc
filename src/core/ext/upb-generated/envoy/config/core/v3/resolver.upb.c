/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/resolver.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/resolver.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field envoy_config_core_v3_DnsResolverOptions__fields[2] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1, 1), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_DnsResolverOptions_msginit = {
  NULL,
  &envoy_config_core_v3_DnsResolverOptions__fields[0],
  UPB_SIZE(2, 8, 2), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_DnsResolutionConfig_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_DnsResolverOptions_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_DnsResolutionConfig__fields[2] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(1, 1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_DnsResolutionConfig_msginit = {
  &envoy_config_core_v3_DnsResolutionConfig_submsgs[0],
  &envoy_config_core_v3_DnsResolutionConfig__fields[0],
  UPB_SIZE(12, 24, 48), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_config_core_v3_DnsResolverOptions_msginit,
  &envoy_config_core_v3_DnsResolutionConfig_msginit,
};

const upb_MiniTable_File envoy_config_core_v3_resolver_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

