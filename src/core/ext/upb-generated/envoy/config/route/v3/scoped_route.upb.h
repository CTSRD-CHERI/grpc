/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/scoped_route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_
#define ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_route_v3_ScopedRouteConfiguration;
struct envoy_config_route_v3_ScopedRouteConfiguration_Key;
struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration envoy_config_route_v3_ScopedRouteConfiguration;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration_Key envoy_config_route_v3_ScopedRouteConfiguration_Key;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment;
extern const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_msginit;
extern const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit;
extern const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit;
struct envoy_config_route_v3_RouteConfiguration;
extern const upb_MiniTable envoy_config_route_v3_RouteConfiguration_msginit;



/* envoy.config.route.v3.ScopedRouteConfiguration */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration* envoy_config_route_v3_ScopedRouteConfiguration_new(upb_Arena* arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration*)_upb_Message_New(&envoy_config_route_v3_ScopedRouteConfiguration_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration* envoy_config_route_v3_ScopedRouteConfiguration_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration* ret = envoy_config_route_v3_ScopedRouteConfiguration_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration* envoy_config_route_v3_ScopedRouteConfiguration_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration* ret = envoy_config_route_v3_ScopedRouteConfiguration_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_serialize(const envoy_config_route_v3_ScopedRouteConfiguration* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_serialize_ex(const envoy_config_route_v3_ScopedRouteConfiguration* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, options, arena, len);
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_clear_name(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_config_route_v3_ScopedRouteConfiguration_name(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView);
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_clear_route_configuration_name(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_config_route_v3_ScopedRouteConfiguration_route_configuration_name(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView);
}
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_has_key(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_clear_key(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), const upb_Message*) = NULL;
}
UPB_INLINE const envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_key(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), const envoy_config_route_v3_ScopedRouteConfiguration_Key*);
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_clear_on_demand(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1, 1), bool) = 0;
}
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_on_demand(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(1, 1, 1), bool);
}
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_has_route_configuration(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_clear_route_configuration(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_config_route_v3_RouteConfiguration* envoy_config_route_v3_ScopedRouteConfiguration_route_configuration(const envoy_config_route_v3_ScopedRouteConfiguration* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), const struct envoy_config_route_v3_RouteConfiguration*);
}

UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_name(envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = value;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_route_configuration_name(envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24, 48), upb_StringView) = value;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_key(envoy_config_route_v3_ScopedRouteConfiguration *msg, envoy_config_route_v3_ScopedRouteConfiguration_Key* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40, 80), envoy_config_route_v3_ScopedRouteConfiguration_Key*) = value;
}
UPB_INLINE struct envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_mutable_key(envoy_config_route_v3_ScopedRouteConfiguration* msg, upb_Arena* arena) {
  struct envoy_config_route_v3_ScopedRouteConfiguration_Key* sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key*)envoy_config_route_v3_ScopedRouteConfiguration_key(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key*)_upb_Message_New(&envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_ScopedRouteConfiguration_set_key(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_on_demand(envoy_config_route_v3_ScopedRouteConfiguration *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1, 1), bool) = value;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_route_configuration(envoy_config_route_v3_ScopedRouteConfiguration *msg, struct envoy_config_route_v3_RouteConfiguration* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 48, 96), struct envoy_config_route_v3_RouteConfiguration*) = value;
}
UPB_INLINE struct envoy_config_route_v3_RouteConfiguration* envoy_config_route_v3_ScopedRouteConfiguration_mutable_route_configuration(envoy_config_route_v3_ScopedRouteConfiguration* msg, upb_Arena* arena) {
  struct envoy_config_route_v3_RouteConfiguration* sub = (struct envoy_config_route_v3_RouteConfiguration*)envoy_config_route_v3_ScopedRouteConfiguration_route_configuration(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_route_v3_RouteConfiguration*)_upb_Message_New(&envoy_config_route_v3_RouteConfiguration_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_ScopedRouteConfiguration_set_route_configuration(msg, sub);
  }
  return sub;
}

/* envoy.config.route.v3.ScopedRouteConfiguration.Key */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_Key_new(upb_Arena* arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key*)_upb_Message_New(&envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_Key_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key* ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_Key_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key* ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_Key_serialize(const envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_Key_serialize_ex(const envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, options, arena, len);
}
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_Key_has_fragments(const envoy_config_route_v3_ScopedRouteConfiguration_Key* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_Key_clear_fragments(const envoy_config_route_v3_ScopedRouteConfiguration_Key* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* const* envoy_config_route_v3_ScopedRouteConfiguration_Key_fragments(const envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, size_t* len) {
  return (const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0, 0), len);
}

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment** envoy_config_route_v3_ScopedRouteConfiguration_Key_mutable_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, size_t* len) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0, 0), len);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment** envoy_config_route_v3_ScopedRouteConfiguration_Key_resize_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, size_t len, upb_Arena* arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0, 0), len, UPB_SIZE(2, 3, 4), arena);
}
UPB_INLINE struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* envoy_config_route_v3_ScopedRouteConfiguration_Key_add_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key* msg, upb_Arena* arena) {
  struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment*)_upb_Message_New(&envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0, 0), UPB_SIZE(2, 3, 4), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.config.route.v3.ScopedRouteConfiguration.Key.Fragment */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_new(upb_Arena* arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment*)_upb_Message_New(&envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_serialize(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_serialize_ex(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, options, arena, len);
}
typedef enum {
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_string_key = 1,
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_NOT_SET = 0
} envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases;
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_case(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t);
}
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_has_string_key(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 1;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_clear_string_key(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8, 16), upb_StringView_FromDataAndSize(NULL, 0), UPB_SIZE(0, 0, 0), envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_NOT_SET);
}
UPB_INLINE upb_StringView envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_string_key(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg) {
  return UPB_READ_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8, 16), UPB_SIZE(0, 0, 0), 1, upb_StringView_FromString(""));
}

UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_set_string_key(envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *msg, upb_StringView value) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8, 16), value, UPB_SIZE(0, 0, 0), 1);
}

extern const upb_MiniTable_File envoy_config_route_v3_scoped_route_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_ */
