/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/resource.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_CORE_V3_RESOURCE_PROTO_UPB_H_
#define XDS_CORE_V3_RESOURCE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct xds_core_v3_Resource;
typedef struct xds_core_v3_Resource xds_core_v3_Resource;
extern const upb_MiniTable xds_core_v3_Resource_msginit;
struct google_protobuf_Any;
struct xds_core_v3_ResourceName;
extern const upb_MiniTable google_protobuf_Any_msginit;
extern const upb_MiniTable xds_core_v3_ResourceName_msginit;



/* xds.core.v3.Resource */

UPB_INLINE xds_core_v3_Resource* xds_core_v3_Resource_new(upb_Arena* arena) {
  return (xds_core_v3_Resource*)_upb_Message_New(&xds_core_v3_Resource_msginit, arena);
}
UPB_INLINE xds_core_v3_Resource* xds_core_v3_Resource_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_core_v3_Resource* ret = xds_core_v3_Resource_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_Resource_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_core_v3_Resource* xds_core_v3_Resource_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_core_v3_Resource* ret = xds_core_v3_Resource_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_Resource_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_core_v3_Resource_serialize(const xds_core_v3_Resource* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &xds_core_v3_Resource_msginit, 0, arena, len);
}
UPB_INLINE char* xds_core_v3_Resource_serialize_ex(const xds_core_v3_Resource* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &xds_core_v3_Resource_msginit, options, arena, len);
}
UPB_INLINE bool xds_core_v3_Resource_has_name(const xds_core_v3_Resource* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void xds_core_v3_Resource_clear_name(const xds_core_v3_Resource* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct xds_core_v3_ResourceName* xds_core_v3_Resource_name(const xds_core_v3_Resource* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const struct xds_core_v3_ResourceName*);
}
UPB_INLINE void xds_core_v3_Resource_clear_version(const xds_core_v3_Resource* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView xds_core_v3_Resource_version(const xds_core_v3_Resource* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), upb_StringView);
}
UPB_INLINE bool xds_core_v3_Resource_has_resource(const xds_core_v3_Resource* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void xds_core_v3_Resource_clear_resource(const xds_core_v3_Resource* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_Any* xds_core_v3_Resource_resource(const xds_core_v3_Resource* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), const struct google_protobuf_Any*);
}

UPB_INLINE void xds_core_v3_Resource_set_name(xds_core_v3_Resource *msg, struct xds_core_v3_ResourceName* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), struct xds_core_v3_ResourceName*) = value;
}
UPB_INLINE struct xds_core_v3_ResourceName* xds_core_v3_Resource_mutable_name(xds_core_v3_Resource* msg, upb_Arena* arena) {
  struct xds_core_v3_ResourceName* sub = (struct xds_core_v3_ResourceName*)xds_core_v3_Resource_name(msg);
  if (sub == NULL) {
    sub = (struct xds_core_v3_ResourceName*)_upb_Message_New(&xds_core_v3_ResourceName_msginit, arena);
    if (!sub) return NULL;
    xds_core_v3_Resource_set_name(msg, sub);
  }
  return sub;
}
UPB_INLINE void xds_core_v3_Resource_set_version(xds_core_v3_Resource *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), upb_StringView) = value;
}
UPB_INLINE void xds_core_v3_Resource_set_resource(xds_core_v3_Resource *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32, 64), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* xds_core_v3_Resource_mutable_resource(xds_core_v3_Resource* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)xds_core_v3_Resource_resource(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    xds_core_v3_Resource_set_resource(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File xds_core_v3_resource_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_CORE_V3_RESOURCE_PROTO_UPB_H_ */
