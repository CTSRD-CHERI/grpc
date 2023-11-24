/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/matcher/v3/ip.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/type/matcher/v3/ip.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/cidr.upb.h"
#include "xds/type/matcher/v3/matcher.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_type_matcher_v3_IPMatcher_submsgs[1] = {
  {.submsg = &xds_type_matcher_v3_IPMatcher_IPRangeMatcher_msginit},
};

static const upb_MiniTable_Field xds_type_matcher_v3_IPMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_type_matcher_v3_IPMatcher_msginit = {
  &xds_type_matcher_v3_IPMatcher_submsgs[0],
  &xds_type_matcher_v3_IPMatcher__fields[0],
  UPB_SIZE(8, 8, 16), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub xds_type_matcher_v3_IPMatcher_IPRangeMatcher_submsgs[2] = {
  {.submsg = &xds_core_v3_CidrRange_msginit},
  {.submsg = &xds_type_matcher_v3_Matcher_OnMatch_msginit},
};

static const upb_MiniTable_Field xds_type_matcher_v3_IPMatcher_IPRangeMatcher__fields[3] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(1, 1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1, 1), UPB_SIZE(0, 0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_type_matcher_v3_IPMatcher_IPRangeMatcher_msginit = {
  &xds_type_matcher_v3_IPMatcher_IPRangeMatcher_submsgs[0],
  &xds_type_matcher_v3_IPMatcher_IPRangeMatcher__fields[0],
  UPB_SIZE(16, 24, 48), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &xds_type_matcher_v3_IPMatcher_msginit,
  &xds_type_matcher_v3_IPMatcher_IPRangeMatcher_msginit,
};

const upb_MiniTable_File xds_type_matcher_v3_ip_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

