/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/annotations/v3/versioning.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/annotations/v3/versioning.upb.h"
#include "google/protobuf/descriptor.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field xds_annotations_v3_VersioningAnnotation__fields[1] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_annotations_v3_VersioningAnnotation_msginit = {
  NULL,
  &xds_annotations_v3_VersioningAnnotation__fields[0],
  UPB_SIZE(8, 24, 32), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &xds_annotations_v3_VersioningAnnotation_msginit,
};

extern const upb_MiniTable google_protobuf_MessageOptions_msginit;
extern const upb_MiniTable xds_annotations_v3_VersioningAnnotation_msginit;
const upb_MiniTable_Extension xds_annotations_v3_versioning_ext = {
  {92389011, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsExtension | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  &google_protobuf_MessageOptions_msginit,
  {.submsg = &xds_annotations_v3_VersioningAnnotation_msginit},

};

static const upb_MiniTable_Extension *extensions_layout[1] = {
  &xds_annotations_v3_versioning_ext,
};

const upb_MiniTable_File xds_annotations_v3_versioning_proto_upb_file_layout = {
  messages_layout,
  NULL,
  extensions_layout,
  1,
  0,
  1,
};

#include "upb/port_undef.inc"

