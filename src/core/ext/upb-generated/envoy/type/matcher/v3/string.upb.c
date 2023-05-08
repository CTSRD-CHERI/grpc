/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/string.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "envoy/type/matcher/v3/regex.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_type_matcher_v3_StringMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_v3_RegexMatcher_msginit},
};

static const upb_MiniTable_Field envoy_type_matcher_v3_StringMatcher__fields[6] = {
  {1, UPB_SIZE(8, 8, 16), UPB_SIZE(-5, -5, -5), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 8, 16), UPB_SIZE(-5, -5, -5), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 8, 16), UPB_SIZE(-5, -5, -5), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(8, 8, 16), UPB_SIZE(-5, -5, -5), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 8, 16), UPB_SIZE(-5, -5, -5), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_StringMatcher_msginit = {
  &envoy_type_matcher_v3_StringMatcher_submsgs[0],
  &envoy_type_matcher_v3_StringMatcher__fields[0],
  UPB_SIZE(16, 24, 48), 6, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_type_matcher_v3_ListStringMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_v3_StringMatcher_msginit},
};

static const upb_MiniTable_Field envoy_type_matcher_v3_ListStringMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_ListStringMatcher_msginit = {
  &envoy_type_matcher_v3_ListStringMatcher_submsgs[0],
  &envoy_type_matcher_v3_ListStringMatcher__fields[0],
  UPB_SIZE(4, 8, 16), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_type_matcher_v3_StringMatcher_msginit,
  &envoy_type_matcher_v3_ListStringMatcher_msginit,
};

const upb_MiniTable_File envoy_type_matcher_v3_string_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

