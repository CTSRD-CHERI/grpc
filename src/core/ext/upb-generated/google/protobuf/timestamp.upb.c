/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/timestamp.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "google/protobuf/timestamp.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field google_protobuf_Timestamp__fields[2] = {
  {1, UPB_SIZE(8, 8, 8), UPB_SIZE(0, 0, 0), kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google_protobuf_Timestamp_msginit = {
  NULL,
  &google_protobuf_Timestamp__fields[0],
  UPB_SIZE(16, 24, 16), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &google_protobuf_Timestamp_msginit,
};

const upb_MiniTable_File google_protobuf_timestamp_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

