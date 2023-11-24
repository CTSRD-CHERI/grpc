/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/lookup/v1/rls.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef SRC_PROTO_GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_
#define SRC_PROTO_GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct grpc_lookup_v1_RouteLookupRequest;
struct grpc_lookup_v1_RouteLookupRequest_KeyMapEntry;
struct grpc_lookup_v1_RouteLookupResponse;
typedef struct grpc_lookup_v1_RouteLookupRequest grpc_lookup_v1_RouteLookupRequest;
typedef struct grpc_lookup_v1_RouteLookupRequest_KeyMapEntry grpc_lookup_v1_RouteLookupRequest_KeyMapEntry;
typedef struct grpc_lookup_v1_RouteLookupResponse grpc_lookup_v1_RouteLookupResponse;
extern const upb_MiniTable grpc_lookup_v1_RouteLookupRequest_msginit;
extern const upb_MiniTable grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msginit;
extern const upb_MiniTable grpc_lookup_v1_RouteLookupResponse_msginit;

typedef enum {
  grpc_lookup_v1_RouteLookupRequest_REASON_UNKNOWN = 0,
  grpc_lookup_v1_RouteLookupRequest_REASON_MISS = 1,
  grpc_lookup_v1_RouteLookupRequest_REASON_STALE = 2
} grpc_lookup_v1_RouteLookupRequest_Reason;



/* grpc.lookup.v1.RouteLookupRequest */

UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_new(upb_Arena* arena) {
  return (grpc_lookup_v1_RouteLookupRequest*)_upb_Message_New(&grpc_lookup_v1_RouteLookupRequest_msginit, arena);
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_parse(const char* buf, size_t size, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupRequest* ret = grpc_lookup_v1_RouteLookupRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &grpc_lookup_v1_RouteLookupRequest_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupRequest* ret = grpc_lookup_v1_RouteLookupRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &grpc_lookup_v1_RouteLookupRequest_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupRequest_serialize(const grpc_lookup_v1_RouteLookupRequest* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &grpc_lookup_v1_RouteLookupRequest_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupRequest_serialize_ex(const grpc_lookup_v1_RouteLookupRequest* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &grpc_lookup_v1_RouteLookupRequest_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_target_type(const grpc_lookup_v1_RouteLookupRequest* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_target_type(const grpc_lookup_v1_RouteLookupRequest* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView);
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_has_key_map(const grpc_lookup_v1_RouteLookupRequest* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24, 48));
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_key_map(const grpc_lookup_v1_RouteLookupRequest* msg) {
  _upb_array_detach(msg, UPB_SIZE(12, 24, 48));
}
UPB_INLINE size_t grpc_lookup_v1_RouteLookupRequest_key_map_size(const grpc_lookup_v1_RouteLookupRequest* msg) {
  return _upb_msg_map_size(msg, UPB_SIZE(12, 24, 48));
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_get(const grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key, upb_StringView* val) {
  return _upb_msg_map_get(msg, UPB_SIZE(12, 24, 48), &key, 0, val, 0);
}
UPB_INLINE const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* grpc_lookup_v1_RouteLookupRequest_key_map_next(const grpc_lookup_v1_RouteLookupRequest* msg, size_t* iter) {
  return (const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry*)_upb_msg_map_next(msg, UPB_SIZE(12, 24, 48), iter);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_reason(const grpc_lookup_v1_RouteLookupRequest* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t) = 0;
}
UPB_INLINE int32_t grpc_lookup_v1_RouteLookupRequest_reason(const grpc_lookup_v1_RouteLookupRequest* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_stale_header_data(const grpc_lookup_v1_RouteLookupRequest* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_stale_header_data(const grpc_lookup_v1_RouteLookupRequest* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), upb_StringView);
}

UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_target_type(grpc_lookup_v1_RouteLookupRequest *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = value;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_key_map_clear(grpc_lookup_v1_RouteLookupRequest* msg) { _upb_msg_map_clear(msg, UPB_SIZE(12, 24, 48)); }
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_set(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key, upb_StringView val, upb_Arena* a) {
  return _upb_msg_map_set(msg, UPB_SIZE(12, 24, 48), &key, 0, &val, 0, a);
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_delete(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key) {
  return _upb_msg_map_delete(msg, UPB_SIZE(12, 24, 48), &key, 0);
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* grpc_lookup_v1_RouteLookupRequest_key_map_nextmutable(grpc_lookup_v1_RouteLookupRequest* msg, size_t* iter) {
  return (grpc_lookup_v1_RouteLookupRequest_KeyMapEntry*)_upb_msg_map_next(msg, UPB_SIZE(12, 24, 48), iter);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_reason(grpc_lookup_v1_RouteLookupRequest *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t) = value;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_stale_header_data(grpc_lookup_v1_RouteLookupRequest *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), upb_StringView) = value;
}

/* grpc.lookup.v1.RouteLookupRequest.KeyMapEntry */

UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_key(const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* msg) {
  upb_StringView ret;
  _upb_msg_map_key(msg, &ret, 0);
  return ret;
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_value(const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* msg) {
  upb_StringView ret;
  _upb_msg_map_value(msg, &ret, 0);
  return ret;
}

UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_set_value(grpc_lookup_v1_RouteLookupRequest_KeyMapEntry *msg, upb_StringView value) {
  _upb_msg_map_set_value(msg, &value, 0);
}

/* grpc.lookup.v1.RouteLookupResponse */

UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_new(upb_Arena* arena) {
  return (grpc_lookup_v1_RouteLookupResponse*)_upb_Message_New(&grpc_lookup_v1_RouteLookupResponse_msginit, arena);
}
UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_parse(const char* buf, size_t size, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupResponse* ret = grpc_lookup_v1_RouteLookupResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &grpc_lookup_v1_RouteLookupResponse_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupResponse* ret = grpc_lookup_v1_RouteLookupResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &grpc_lookup_v1_RouteLookupResponse_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupResponse_serialize(const grpc_lookup_v1_RouteLookupResponse* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &grpc_lookup_v1_RouteLookupResponse_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupResponse_serialize_ex(const grpc_lookup_v1_RouteLookupResponse* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &grpc_lookup_v1_RouteLookupResponse_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_clear_header_data(const grpc_lookup_v1_RouteLookupResponse* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupResponse_header_data(const grpc_lookup_v1_RouteLookupResponse* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), upb_StringView);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_clear_targets(const grpc_lookup_v1_RouteLookupResponse* msg) {
  _upb_array_detach(msg, UPB_SIZE(8, 16, 32));
}
UPB_INLINE upb_StringView const* grpc_lookup_v1_RouteLookupResponse_targets(const grpc_lookup_v1_RouteLookupResponse* msg, size_t* len) {
  return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(8, 16, 32), len);
}

UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_set_header_data(grpc_lookup_v1_RouteLookupResponse *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), upb_StringView) = value;
}
UPB_INLINE upb_StringView* grpc_lookup_v1_RouteLookupResponse_mutable_targets(grpc_lookup_v1_RouteLookupResponse* msg, size_t* len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16, 32), len);
}
UPB_INLINE upb_StringView* grpc_lookup_v1_RouteLookupResponse_resize_targets(grpc_lookup_v1_RouteLookupResponse* msg, size_t len, upb_Arena* arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(8, 16, 32), len, UPB_SIZE(3, 4, 5), arena);
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupResponse_add_targets(grpc_lookup_v1_RouteLookupResponse* msg, upb_StringView val, upb_Arena* arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(8, 16, 32), UPB_SIZE(3, 4, 5), &val, arena);
}

extern const upb_MiniTable_File src_proto_grpc_lookup_v1_rls_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* SRC_PROTO_GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_ */
