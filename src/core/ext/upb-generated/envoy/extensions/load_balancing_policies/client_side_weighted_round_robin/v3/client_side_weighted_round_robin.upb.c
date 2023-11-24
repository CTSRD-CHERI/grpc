/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/load_balancing_policies/client_side_weighted_round_robin/v3/client_side_weighted_round_robin.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/load_balancing_policies/client_side_weighted_round_robin/v3/client_side_weighted_round_robin.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/status.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_submsgs[6] = {
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_FloatValue_msginit},
};

static const upb_MiniTable_Field envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin__fields[6] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(1, 1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(2, 2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24, 48), UPB_SIZE(3, 3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32, 64), UPB_SIZE(4, 4, 4), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40, 80), UPB_SIZE(5, 5, 5), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 48, 96), UPB_SIZE(6, 6, 6), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_msginit = {
  &envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_submsgs[0],
  &envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin__fields[0],
  UPB_SIZE(32, 56, 112), 6, kUpb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_msginit,
};

const upb_MiniTable_File envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_client_side_weighted_round_robin_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

