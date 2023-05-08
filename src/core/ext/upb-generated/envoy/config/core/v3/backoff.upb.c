/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/backoff.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/backoff.upb.h"
#include "google/protobuf/duration.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_core_v3_BackoffStrategy_submsgs[2] = {
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_BackoffStrategy__fields[2] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_BackoffStrategy_msginit = {
  &envoy_config_core_v3_BackoffStrategy_submsgs[0],
  &envoy_config_core_v3_BackoffStrategy__fields[0],
  UPB_SIZE(12, 24, 48), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_config_core_v3_BackoffStrategy_msginit,
};

const upb_MiniTable_File envoy_config_core_v3_backoff_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

