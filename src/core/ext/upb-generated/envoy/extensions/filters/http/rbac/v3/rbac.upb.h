/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/http/rbac/v3/rbac.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_filters_http_rbac_v3_RBAC;
struct envoy_extensions_filters_http_rbac_v3_RBACPerRoute;
typedef struct envoy_extensions_filters_http_rbac_v3_RBAC envoy_extensions_filters_http_rbac_v3_RBAC;
typedef struct envoy_extensions_filters_http_rbac_v3_RBACPerRoute envoy_extensions_filters_http_rbac_v3_RBACPerRoute;
extern const upb_MiniTable envoy_extensions_filters_http_rbac_v3_RBAC_msginit;
extern const upb_MiniTable envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit;
struct envoy_config_rbac_v3_RBAC;
struct xds_type_matcher_v3_Matcher;
extern const upb_MiniTable envoy_config_rbac_v3_RBAC_msginit;
extern const upb_MiniTable xds_type_matcher_v3_Matcher_msginit;



/* envoy.extensions.filters.http.rbac.v3.RBAC */

UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_new(upb_Arena* arena) {
  return (envoy_extensions_filters_http_rbac_v3_RBAC*)_upb_Message_New(&envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_extensions_filters_http_rbac_v3_RBAC* ret = envoy_extensions_filters_http_rbac_v3_RBAC_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_extensions_filters_http_rbac_v3_RBAC* ret = envoy_extensions_filters_http_rbac_v3_RBAC_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_extensions_filters_http_rbac_v3_RBAC_serialize(const envoy_extensions_filters_http_rbac_v3_RBAC* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_extensions_filters_http_rbac_v3_RBAC_serialize_ex(const envoy_extensions_filters_http_rbac_v3_RBAC* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_filters_http_rbac_v3_RBAC_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_clear_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const struct envoy_config_rbac_v3_RBAC*);
}
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_shadow_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_clear_shadow_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), const struct envoy_config_rbac_v3_RBAC*);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_clear_shadow_rules_stat_prefix(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules_stat_prefix(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView);
}
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return _upb_hasbit(msg, 3);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_clear_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), const upb_Message*) = NULL;
}
UPB_INLINE const struct xds_type_matcher_v3_Matcher* envoy_extensions_filters_http_rbac_v3_RBAC_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), const struct xds_type_matcher_v3_Matcher*);
}
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBAC_has_shadow_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return _upb_hasbit(msg, 4);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_clear_shadow_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), const upb_Message*) = NULL;
}
UPB_INLINE const struct xds_type_matcher_v3_Matcher* envoy_extensions_filters_http_rbac_v3_RBAC_shadow_matcher(const envoy_extensions_filters_http_rbac_v3_RBAC* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), const struct xds_type_matcher_v3_Matcher*);
}

UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct envoy_config_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), struct envoy_config_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_rules(envoy_extensions_filters_http_rbac_v3_RBAC* msg, upb_Arena* arena) {
  struct envoy_config_rbac_v3_RBAC* sub = (struct envoy_config_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBAC_rules(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_rbac_v3_RBAC*)_upb_Message_New(&envoy_config_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_rules(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct envoy_config_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16, 32), struct envoy_config_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_config_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_shadow_rules(envoy_extensions_filters_http_rbac_v3_RBAC* msg, upb_Arena* arena) {
  struct envoy_config_rbac_v3_RBAC* sub = (struct envoy_config_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBAC_shadow_rules(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_rbac_v3_RBAC*)_upb_Message_New(&envoy_config_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_rules_stat_prefix(envoy_extensions_filters_http_rbac_v3_RBAC *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView) = value;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_matcher(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct xds_type_matcher_v3_Matcher* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), struct xds_type_matcher_v3_Matcher*) = value;
}
UPB_INLINE struct xds_type_matcher_v3_Matcher* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_matcher(envoy_extensions_filters_http_rbac_v3_RBAC* msg, upb_Arena* arena) {
  struct xds_type_matcher_v3_Matcher* sub = (struct xds_type_matcher_v3_Matcher*)envoy_extensions_filters_http_rbac_v3_RBAC_matcher(msg);
  if (sub == NULL) {
    sub = (struct xds_type_matcher_v3_Matcher*)_upb_Message_New(&xds_type_matcher_v3_Matcher_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_matcher(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_matcher(envoy_extensions_filters_http_rbac_v3_RBAC *msg, struct xds_type_matcher_v3_Matcher* value) {
  _upb_sethas(msg, 4);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), struct xds_type_matcher_v3_Matcher*) = value;
}
UPB_INLINE struct xds_type_matcher_v3_Matcher* envoy_extensions_filters_http_rbac_v3_RBAC_mutable_shadow_matcher(envoy_extensions_filters_http_rbac_v3_RBAC* msg, upb_Arena* arena) {
  struct xds_type_matcher_v3_Matcher* sub = (struct xds_type_matcher_v3_Matcher*)envoy_extensions_filters_http_rbac_v3_RBAC_shadow_matcher(msg);
  if (sub == NULL) {
    sub = (struct xds_type_matcher_v3_Matcher*)_upb_Message_New(&xds_type_matcher_v3_Matcher_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBAC_set_shadow_matcher(msg, sub);
  }
  return sub;
}

/* envoy.extensions.filters.http.rbac.v3.RBACPerRoute */

UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(upb_Arena* arena) {
  return (envoy_extensions_filters_http_rbac_v3_RBACPerRoute*)_upb_Message_New(&envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_extensions_filters_http_rbac_v3_RBACPerRoute* ret = envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_extensions_filters_http_rbac_v3_RBACPerRoute* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_extensions_filters_http_rbac_v3_RBACPerRoute* ret = envoy_extensions_filters_http_rbac_v3_RBACPerRoute_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_serialize(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_serialize_ex(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_filters_http_rbac_v3_RBACPerRoute_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_extensions_filters_http_rbac_v3_RBACPerRoute_has_rbac(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBACPerRoute_clear_rbac(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_rbac(const envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), const envoy_extensions_filters_http_rbac_v3_RBAC*);
}

UPB_INLINE void envoy_extensions_filters_http_rbac_v3_RBACPerRoute_set_rbac(envoy_extensions_filters_http_rbac_v3_RBACPerRoute *msg, envoy_extensions_filters_http_rbac_v3_RBAC* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), envoy_extensions_filters_http_rbac_v3_RBAC*) = value;
}
UPB_INLINE struct envoy_extensions_filters_http_rbac_v3_RBAC* envoy_extensions_filters_http_rbac_v3_RBACPerRoute_mutable_rbac(envoy_extensions_filters_http_rbac_v3_RBACPerRoute* msg, upb_Arena* arena) {
  struct envoy_extensions_filters_http_rbac_v3_RBAC* sub = (struct envoy_extensions_filters_http_rbac_v3_RBAC*)envoy_extensions_filters_http_rbac_v3_RBACPerRoute_rbac(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_filters_http_rbac_v3_RBAC*)_upb_Message_New(&envoy_extensions_filters_http_rbac_v3_RBAC_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_rbac_v3_RBACPerRoute_set_rbac(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File envoy_extensions_filters_http_rbac_v3_rbac_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_EXTENSIONS_FILTERS_HTTP_RBAC_V3_RBAC_PROTO_UPB_H_ */
