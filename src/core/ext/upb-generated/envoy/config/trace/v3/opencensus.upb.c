/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/opencensus.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/trace/v3/opencensus.upb.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "opencensus/proto/trace/v1/trace_config.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_trace_v3_OpenCensusConfig_submsgs[3] = {
  {.submsg = &opencensus_proto_trace_v1_TraceConfig_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_msginit},
};

static const upb_MiniTable_Field envoy_config_trace_v3_OpenCensusConfig__fields[13] = {
  {1, UPB_SIZE(8, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1, 1), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(2, 2, 2), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 16, 32), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(3, 3, 3), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(20, 32, 64), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(28, 48, 96), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Array | kUpb_LabelFlags_IsPacked | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(32, 56, 112), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Array | kUpb_LabelFlags_IsPacked | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(36, 64, 128), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {11, UPB_SIZE(4, 4, 4), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {12, UPB_SIZE(44, 80, 160), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {13, UPB_SIZE(52, 96, 192), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {14, UPB_SIZE(56, 104, 208), UPB_SIZE(3, 3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_trace_v3_OpenCensusConfig_msginit = {
  &envoy_config_trace_v3_OpenCensusConfig_submsgs[0],
  &envoy_config_trace_v3_OpenCensusConfig__fields[0],
  UPB_SIZE(64, 112, 224), 13, kUpb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_config_trace_v3_OpenCensusConfig_msginit,
};

const upb_MiniTable_File envoy_config_trace_v3_opencensus_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

