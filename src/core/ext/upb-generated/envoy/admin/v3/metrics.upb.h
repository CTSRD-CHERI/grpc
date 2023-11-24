/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/metrics.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_METRICS_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_METRICS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_admin_v3_SimpleMetric;
typedef struct envoy_admin_v3_SimpleMetric envoy_admin_v3_SimpleMetric;
extern const upb_MiniTable envoy_admin_v3_SimpleMetric_msginit;

typedef enum {
  envoy_admin_v3_SimpleMetric_COUNTER = 0,
  envoy_admin_v3_SimpleMetric_GAUGE = 1
} envoy_admin_v3_SimpleMetric_Type;



/* envoy.admin.v3.SimpleMetric */

UPB_INLINE envoy_admin_v3_SimpleMetric* envoy_admin_v3_SimpleMetric_new(upb_Arena* arena) {
  return (envoy_admin_v3_SimpleMetric*)_upb_Message_New(&envoy_admin_v3_SimpleMetric_msginit, arena);
}
UPB_INLINE envoy_admin_v3_SimpleMetric* envoy_admin_v3_SimpleMetric_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_SimpleMetric* ret = envoy_admin_v3_SimpleMetric_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SimpleMetric_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_SimpleMetric* envoy_admin_v3_SimpleMetric_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_SimpleMetric* ret = envoy_admin_v3_SimpleMetric_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SimpleMetric_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_SimpleMetric_serialize(const envoy_admin_v3_SimpleMetric* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SimpleMetric_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_SimpleMetric_serialize_ex(const envoy_admin_v3_SimpleMetric* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SimpleMetric_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_SimpleMetric_clear_type(const envoy_admin_v3_SimpleMetric* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t) = 0;
}
UPB_INLINE int32_t envoy_admin_v3_SimpleMetric_type(const envoy_admin_v3_SimpleMetric* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t);
}
UPB_INLINE void envoy_admin_v3_SimpleMetric_clear_value(const envoy_admin_v3_SimpleMetric* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24, 48), uint64_t) = 0;
}
UPB_INLINE uint64_t envoy_admin_v3_SimpleMetric_value(const envoy_admin_v3_SimpleMetric* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 24, 48), uint64_t);
}
UPB_INLINE void envoy_admin_v3_SimpleMetric_clear_name(const envoy_admin_v3_SimpleMetric* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_admin_v3_SimpleMetric_name(const envoy_admin_v3_SimpleMetric* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView);
}

UPB_INLINE void envoy_admin_v3_SimpleMetric_set_type(envoy_admin_v3_SimpleMetric *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t) = value;
}
UPB_INLINE void envoy_admin_v3_SimpleMetric_set_value(envoy_admin_v3_SimpleMetric *msg, uint64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24, 48), uint64_t) = value;
}
UPB_INLINE void envoy_admin_v3_SimpleMetric_set_name(envoy_admin_v3_SimpleMetric *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8, 16), upb_StringView) = value;
}

extern const upb_MiniTable_File envoy_admin_v3_metrics_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_METRICS_PROTO_UPB_H_ */
