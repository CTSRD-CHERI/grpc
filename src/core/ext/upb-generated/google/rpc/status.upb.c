/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/rpc/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "google/rpc/status.upb.h"
#include "google/protobuf/any.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub google_rpc_Status_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field google_rpc_Status__fields[3] = {
  {1, UPB_SIZE(0, 0, 0), UPB_SIZE(0, 0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24, 48), UPB_SIZE(0, 0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google_rpc_Status_msginit = {
  &google_rpc_Status_submsgs[0],
  &google_rpc_Status__fields[0],
  UPB_SIZE(16, 40, 64), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &google_rpc_Status_msginit,
};

const upb_MiniTable_File google_rpc_status_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

