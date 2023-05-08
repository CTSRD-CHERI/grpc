/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/grpc_method_list.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/grpc_method_list.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcMethodList_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_GrpcMethodList_Service_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcMethodList__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcMethodList_msginit = {
  &envoy_config_core_v3_GrpcMethodList_submsgs[0],
  &envoy_config_core_v3_GrpcMethodList__fields[0],
  UPB_SIZE(4, 8, 16), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcMethodList_Service__fields[2] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcMethodList_Service_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcMethodList_Service__fields[0],
  UPB_SIZE(12, 24, 48), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_config_core_v3_GrpcMethodList_msginit,
  &envoy_config_core_v3_GrpcMethodList_Service_msginit,
};

const upb_MiniTable_File envoy_config_core_v3_grpc_method_list_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

