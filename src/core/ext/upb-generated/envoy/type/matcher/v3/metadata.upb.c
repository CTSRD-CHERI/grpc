/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/matcher/v3/metadata.upb.h"
#include "envoy/type/matcher/v3/value.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_type_matcher_v3_MetadataMatcher_submsgs[2] = {
  {.submsg = &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit},
  {.submsg = &envoy_type_matcher_v3_ValueMatcher_msginit},
};

static const upb_MiniTable_Field envoy_type_matcher_v3_MetadataMatcher__fields[4] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24, 48), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32, 64), UPB_SIZE(1, 1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(1, 1, 1), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_MetadataMatcher_msginit = {
  &envoy_type_matcher_v3_MetadataMatcher_submsgs[0],
  &envoy_type_matcher_v3_MetadataMatcher__fields[0],
  UPB_SIZE(20, 40, 80), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Field envoy_type_matcher_v3_MetadataMatcher_PathSegment__fields[1] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit = {
  NULL,
  &envoy_type_matcher_v3_MetadataMatcher_PathSegment__fields[0],
  UPB_SIZE(12, 24, 48), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_type_matcher_v3_MetadataMatcher_msginit,
  &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit,
};

const upb_MiniTable_File envoy_type_matcher_v3_metadata_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

