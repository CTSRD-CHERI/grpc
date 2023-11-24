/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/http_inputs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/matcher/v3/http_inputs.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field envoy_type_matcher_v3_HttpRequestHeaderMatchInput__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_HttpRequestHeaderMatchInput_msginit = {
  NULL,
  &envoy_type_matcher_v3_HttpRequestHeaderMatchInput__fields[0],
  UPB_SIZE(8, 16, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_type_matcher_v3_HttpRequestTrailerMatchInput__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_HttpRequestTrailerMatchInput_msginit = {
  NULL,
  &envoy_type_matcher_v3_HttpRequestTrailerMatchInput__fields[0],
  UPB_SIZE(8, 16, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_type_matcher_v3_HttpResponseHeaderMatchInput__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_HttpResponseHeaderMatchInput_msginit = {
  NULL,
  &envoy_type_matcher_v3_HttpResponseHeaderMatchInput__fields[0],
  UPB_SIZE(8, 16, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_type_matcher_v3_HttpResponseTrailerMatchInput__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_HttpResponseTrailerMatchInput_msginit = {
  NULL,
  &envoy_type_matcher_v3_HttpResponseTrailerMatchInput__fields[0],
  UPB_SIZE(8, 16, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_type_matcher_v3_HttpRequestQueryParamMatchInput__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_HttpRequestQueryParamMatchInput_msginit = {
  NULL,
  &envoy_type_matcher_v3_HttpRequestQueryParamMatchInput__fields[0],
  UPB_SIZE(8, 16, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[5] = {
  &envoy_type_matcher_v3_HttpRequestHeaderMatchInput_msginit,
  &envoy_type_matcher_v3_HttpRequestTrailerMatchInput_msginit,
  &envoy_type_matcher_v3_HttpResponseHeaderMatchInput_msginit,
  &envoy_type_matcher_v3_HttpResponseTrailerMatchInput_msginit,
  &envoy_type_matcher_v3_HttpRequestQueryParamMatchInput_msginit,
};

const upb_MiniTable_File envoy_type_matcher_v3_http_inputs_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  5,
  0,
  0,
};

#include "upb/port_undef.inc"

