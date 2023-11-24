/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_v3_NodeMatcher;
typedef struct envoy_type_matcher_v3_NodeMatcher envoy_type_matcher_v3_NodeMatcher;
extern const upb_MiniTable envoy_type_matcher_v3_NodeMatcher_msginit;
struct envoy_type_matcher_v3_StringMatcher;
struct envoy_type_matcher_v3_StructMatcher;
extern const upb_MiniTable envoy_type_matcher_v3_StringMatcher_msginit;
extern const upb_MiniTable envoy_type_matcher_v3_StructMatcher_msginit;



/* envoy.type.matcher.v3.NodeMatcher */

UPB_INLINE envoy_type_matcher_v3_NodeMatcher* envoy_type_matcher_v3_NodeMatcher_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_NodeMatcher*)_upb_Message_New(&envoy_type_matcher_v3_NodeMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_NodeMatcher* envoy_type_matcher_v3_NodeMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_NodeMatcher* ret = envoy_type_matcher_v3_NodeMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_NodeMatcher_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_NodeMatcher* envoy_type_matcher_v3_NodeMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_NodeMatcher* ret = envoy_type_matcher_v3_NodeMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_NodeMatcher_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_NodeMatcher_serialize(const envoy_type_matcher_v3_NodeMatcher* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_type_matcher_v3_NodeMatcher_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_type_matcher_v3_NodeMatcher_serialize_ex(const envoy_type_matcher_v3_NodeMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_type_matcher_v3_NodeMatcher_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_type_matcher_v3_NodeMatcher_has_node_id(const envoy_type_matcher_v3_NodeMatcher* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_type_matcher_v3_NodeMatcher_clear_node_id(const envoy_type_matcher_v3_NodeMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_NodeMatcher_node_id(const envoy_type_matcher_v3_NodeMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const struct envoy_type_matcher_v3_StringMatcher*);
}
UPB_INLINE bool envoy_type_matcher_v3_NodeMatcher_has_node_metadatas(const envoy_type_matcher_v3_NodeMatcher* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16, 32));
}
UPB_INLINE void envoy_type_matcher_v3_NodeMatcher_clear_node_metadatas(const envoy_type_matcher_v3_NodeMatcher* msg) {
  _upb_array_detach(msg, UPB_SIZE(8, 16, 32));
}
UPB_INLINE const struct envoy_type_matcher_v3_StructMatcher* const* envoy_type_matcher_v3_NodeMatcher_node_metadatas(const envoy_type_matcher_v3_NodeMatcher* msg, size_t* len) {
  return (const struct envoy_type_matcher_v3_StructMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16, 32), len);
}

UPB_INLINE void envoy_type_matcher_v3_NodeMatcher_set_node_id(envoy_type_matcher_v3_NodeMatcher *msg, struct envoy_type_matcher_v3_StringMatcher* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), struct envoy_type_matcher_v3_StringMatcher*) = value;
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_NodeMatcher_mutable_node_id(envoy_type_matcher_v3_NodeMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_StringMatcher* sub = (struct envoy_type_matcher_v3_StringMatcher*)envoy_type_matcher_v3_NodeMatcher_node_id(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_StringMatcher*)_upb_Message_New(&envoy_type_matcher_v3_StringMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_v3_NodeMatcher_set_node_id(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher** envoy_type_matcher_v3_NodeMatcher_mutable_node_metadatas(envoy_type_matcher_v3_NodeMatcher* msg, size_t* len) {
  return (struct envoy_type_matcher_v3_StructMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16, 32), len);
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher** envoy_type_matcher_v3_NodeMatcher_resize_node_metadatas(envoy_type_matcher_v3_NodeMatcher* msg, size_t len, upb_Arena* arena) {
  return (struct envoy_type_matcher_v3_StructMatcher**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(8, 16, 32), len, UPB_SIZE(2, 3, 4), arena);
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher* envoy_type_matcher_v3_NodeMatcher_add_node_metadatas(envoy_type_matcher_v3_NodeMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_StructMatcher* sub = (struct envoy_type_matcher_v3_StructMatcher*)_upb_Message_New(&envoy_type_matcher_v3_StructMatcher_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(8, 16, 32), UPB_SIZE(2, 3, 4), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

extern const upb_MiniTable_File envoy_type_matcher_v3_node_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_ */
