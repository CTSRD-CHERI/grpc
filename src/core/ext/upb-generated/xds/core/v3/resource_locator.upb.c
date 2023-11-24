/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/resource_locator.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/core/v3/resource_locator.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/context_params.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_core_v3_ResourceLocator_submsgs[2] = {
  {.submsg = &xds_core_v3_ContextParams_msginit},
  {.submsg = &xds_core_v3_ResourceLocator_Directive_msginit},
};

static const upb_MiniTable_Field xds_core_v3_ResourceLocator__fields[6] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 24, 48), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(24, 40, 80), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(36, 64, 128), UPB_SIZE(-5, -5, -5), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(32, 56, 112), UPB_SIZE(0, 0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_ResourceLocator_msginit = {
  &xds_core_v3_ResourceLocator_submsgs[0],
  &xds_core_v3_ResourceLocator__fields[0],
  UPB_SIZE(40, 72, 144), 6, kUpb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable_Sub xds_core_v3_ResourceLocator_Directive_submsgs[1] = {
  {.submsg = &xds_core_v3_ResourceLocator_msginit},
};

static const upb_MiniTable_Field xds_core_v3_ResourceLocator_Directive__fields[2] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_ResourceLocator_Directive_msginit = {
  &xds_core_v3_ResourceLocator_Directive_submsgs[0],
  &xds_core_v3_ResourceLocator_Directive__fields[0],
  UPB_SIZE(16, 24, 48), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &xds_core_v3_ResourceLocator_msginit,
  &xds_core_v3_ResourceLocator_Directive_msginit,
};

const upb_MiniTable_File xds_core_v3_resource_locator_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

