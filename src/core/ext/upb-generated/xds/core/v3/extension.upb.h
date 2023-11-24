/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/extension.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_CORE_V3_EXTENSION_PROTO_UPB_H_
#define XDS_CORE_V3_EXTENSION_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct xds_core_v3_TypedExtensionConfig;
typedef struct xds_core_v3_TypedExtensionConfig xds_core_v3_TypedExtensionConfig;
extern const upb_MiniTable xds_core_v3_TypedExtensionConfig_msginit;
struct google_protobuf_Any;
extern const upb_MiniTable google_protobuf_Any_msginit;



/* xds.core.v3.TypedExtensionConfig */

UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_new(upb_Arena* arena) {
  return (xds_core_v3_TypedExtensionConfig*)_upb_Message_New(&xds_core_v3_TypedExtensionConfig_msginit, arena);
}
UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_core_v3_TypedExtensionConfig* ret = xds_core_v3_TypedExtensionConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_TypedExtensionConfig_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_core_v3_TypedExtensionConfig* ret = xds_core_v3_TypedExtensionConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_TypedExtensionConfig_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_core_v3_TypedExtensionConfig_serialize(const xds_core_v3_TypedExtensionConfig* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_TypedExtensionConfig_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_core_v3_TypedExtensionConfig_serialize_ex(const xds_core_v3_TypedExtensionConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_TypedExtensionConfig_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_clear_name(const xds_core_v3_TypedExtensionConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView xds_core_v3_TypedExtensionConfig_name(const xds_core_v3_TypedExtensionConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView);
}
UPB_INLINE bool xds_core_v3_TypedExtensionConfig_has_typed_config(const xds_core_v3_TypedExtensionConfig* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_clear_typed_config(const xds_core_v3_TypedExtensionConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_Any* xds_core_v3_TypedExtensionConfig_typed_config(const xds_core_v3_TypedExtensionConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), const struct google_protobuf_Any*);
}

UPB_INLINE void xds_core_v3_TypedExtensionConfig_set_name(xds_core_v3_TypedExtensionConfig *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = value;
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_set_typed_config(xds_core_v3_TypedExtensionConfig *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* xds_core_v3_TypedExtensionConfig_mutable_typed_config(xds_core_v3_TypedExtensionConfig* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)xds_core_v3_TypedExtensionConfig_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    xds_core_v3_TypedExtensionConfig_set_typed_config(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File xds_core_v3_extension_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_CORE_V3_EXTENSION_PROTO_UPB_H_ */
