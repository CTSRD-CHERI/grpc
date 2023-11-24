/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/metadata/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/metadata/v3/metadata.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_type_metadata_v3_MetadataKey_submsgs[1] = {
  {.submsg = &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit},
};

static const upb_MiniTable_Field envoy_type_metadata_v3_MetadataKey__fields[2] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16, 32), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKey_msginit = {
  &envoy_type_metadata_v3_MetadataKey_submsgs[0],
  &envoy_type_metadata_v3_MetadataKey__fields[0],
  UPB_SIZE(16, 24, 48), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_type_metadata_v3_MetadataKey_PathSegment__fields[1] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKey_PathSegment_msginit = {
  NULL,
  &envoy_type_metadata_v3_MetadataKey_PathSegment__fields[0],
  UPB_SIZE(16, 24, 48), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_type_metadata_v3_MetadataKind_submsgs[4] = {
  {.submsg = &envoy_type_metadata_v3_MetadataKind_Request_msginit},
  {.submsg = &envoy_type_metadata_v3_MetadataKind_Route_msginit},
  {.submsg = &envoy_type_metadata_v3_MetadataKind_Cluster_msginit},
  {.submsg = &envoy_type_metadata_v3_MetadataKind_Host_msginit},
};

static const upb_MiniTable_Field envoy_type_metadata_v3_MetadataKind__fields[4] = {
  {1, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8, 16), UPB_SIZE(-1, -1, -1), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKind_msginit = {
  &envoy_type_metadata_v3_MetadataKind_submsgs[0],
  &envoy_type_metadata_v3_MetadataKind__fields[0],
  UPB_SIZE(8, 16, 32), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKind_Request_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKind_Route_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKind_Cluster_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

const upb_MiniTable envoy_type_metadata_v3_MetadataKind_Host_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable *messages_layout[7] = {
  &envoy_type_metadata_v3_MetadataKey_msginit,
  &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit,
  &envoy_type_metadata_v3_MetadataKind_msginit,
  &envoy_type_metadata_v3_MetadataKind_Request_msginit,
  &envoy_type_metadata_v3_MetadataKind_Route_msginit,
  &envoy_type_metadata_v3_MetadataKind_Cluster_msginit,
  &envoy_type_metadata_v3_MetadataKind_Host_msginit,
};

const upb_MiniTable_File envoy_type_metadata_v3_metadata_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  7,
  0,
  0,
};

#include "upb/port_undef.inc"

