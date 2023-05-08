/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/endpoint/v3/endpoint.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/endpoint/v3/endpoint.upb.h"
#include "envoy/config/endpoint/v3/endpoint_components.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_endpoint_v3_ClusterLoadAssignment_submsgs[3] = {
  {.submsg = &envoy_config_endpoint_v3_LocalityLbEndpoints_msginit},
  {.submsg = &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_msginit},
  {.submsg = &envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry_msginit},
};

static const upb_MiniTable_Field envoy_config_endpoint_v3_ClusterLoadAssignment__fields[4] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24, 48), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32, 64), UPB_SIZE(1, 1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40, 80), UPB_SIZE(0, 0, 0), 2, 11, kUpb_FieldMode_Map | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_endpoint_v3_ClusterLoadAssignment_msginit = {
  &envoy_config_endpoint_v3_ClusterLoadAssignment_submsgs[0],
  &envoy_config_endpoint_v3_ClusterLoadAssignment__fields[0],
  UPB_SIZE(24, 56, 96), 4, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_submsgs[3] = {
  {.submsg = &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_config_endpoint_v3_ClusterLoadAssignment_Policy__fields[3] = {
  {2, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 16, 32), UPB_SIZE(1, 1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 24, 48), UPB_SIZE(2, 2, 2), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_msginit = {
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_submsgs[0],
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy__fields[0],
  UPB_SIZE(16, 40, 64), 3, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload_submsgs[1] = {
  {.submsg = &envoy_type_v3_FractionalPercent_msginit},
};

static const upb_MiniTable_Field envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload__fields[2] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24, 48), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload_msginit = {
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload_submsgs[0],
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload__fields[0],
  UPB_SIZE(16, 40, 64), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry_submsgs[1] = {
  {.submsg = &envoy_config_endpoint_v3_Endpoint_msginit},
};

static const upb_MiniTable_Field envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry_msginit = {
  &envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry_submsgs[0],
  &envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry__fields[0],
  UPB_SIZE(16, 32, 64), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[4] = {
  &envoy_config_endpoint_v3_ClusterLoadAssignment_msginit,
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_msginit,
  &envoy_config_endpoint_v3_ClusterLoadAssignment_Policy_DropOverload_msginit,
  &envoy_config_endpoint_v3_ClusterLoadAssignment_NamedEndpointsEntry_msginit,
};

const upb_MiniTable_File envoy_config_endpoint_v3_endpoint_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  4,
  0,
  0,
};

#include "upb/port_undef.inc"

