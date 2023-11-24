/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_
#define GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct google_protobuf_Struct;
struct google_protobuf_Struct_FieldsEntry;
struct google_protobuf_Value;
struct google_protobuf_ListValue;
typedef struct google_protobuf_Struct google_protobuf_Struct;
typedef struct google_protobuf_Struct_FieldsEntry google_protobuf_Struct_FieldsEntry;
typedef struct google_protobuf_Value google_protobuf_Value;
typedef struct google_protobuf_ListValue google_protobuf_ListValue;
extern const upb_MiniTable google_protobuf_Struct_msginit;
extern const upb_MiniTable google_protobuf_Struct_FieldsEntry_msginit;
extern const upb_MiniTable google_protobuf_Value_msginit;
extern const upb_MiniTable google_protobuf_ListValue_msginit;

typedef enum {
  google_protobuf_NULL_VALUE = 0
} google_protobuf_NullValue;



/* google.protobuf.Struct */

UPB_INLINE google_protobuf_Struct* google_protobuf_Struct_new(upb_Arena* arena) {
  return (google_protobuf_Struct*)_upb_Message_New(&google_protobuf_Struct_msginit, arena);
}
UPB_INLINE google_protobuf_Struct* google_protobuf_Struct_parse(const char* buf, size_t size, upb_Arena* arena) {
  google_protobuf_Struct* ret = google_protobuf_Struct_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_Struct_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE google_protobuf_Struct* google_protobuf_Struct_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  google_protobuf_Struct* ret = google_protobuf_Struct_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_Struct_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* google_protobuf_Struct_serialize(const google_protobuf_Struct* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_Struct_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* google_protobuf_Struct_serialize_ex(const google_protobuf_Struct* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_Struct_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool google_protobuf_Struct_has_fields(const google_protobuf_Struct* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE void google_protobuf_Struct_clear_fields(const google_protobuf_Struct* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE size_t google_protobuf_Struct_fields_size(const google_protobuf_Struct* msg) {
  return _upb_msg_map_size(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE bool google_protobuf_Struct_fields_get(const google_protobuf_Struct* msg, upb_StringView key, google_protobuf_Value** val) {
  return _upb_msg_map_get(msg, UPB_SIZE(0, 0, 0), &key, 0, val, sizeof(*val));
}
UPB_INLINE const google_protobuf_Struct_FieldsEntry* google_protobuf_Struct_fields_next(const google_protobuf_Struct* msg, size_t* iter) {
  return (const google_protobuf_Struct_FieldsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0, 0), iter);
}

UPB_INLINE void google_protobuf_Struct_fields_clear(google_protobuf_Struct* msg) { _upb_msg_map_clear(msg, UPB_SIZE(0, 0, 0)); }
UPB_INLINE bool google_protobuf_Struct_fields_set(google_protobuf_Struct* msg, upb_StringView key, google_protobuf_Value* val, upb_Arena* a) {
  return _upb_msg_map_set(msg, UPB_SIZE(0, 0, 0), &key, 0, &val, sizeof(val), a);
}
UPB_INLINE bool google_protobuf_Struct_fields_delete(google_protobuf_Struct* msg, upb_StringView key) {
  return _upb_msg_map_delete(msg, UPB_SIZE(0, 0, 0), &key, 0);
}
UPB_INLINE google_protobuf_Struct_FieldsEntry* google_protobuf_Struct_fields_nextmutable(google_protobuf_Struct* msg, size_t* iter) {
  return (google_protobuf_Struct_FieldsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0, 0), iter);
}

/* google.protobuf.Struct.FieldsEntry */

UPB_INLINE upb_StringView google_protobuf_Struct_FieldsEntry_key(const google_protobuf_Struct_FieldsEntry* msg) {
  upb_StringView ret;
  _upb_msg_map_key(msg, &ret, 0);
  return ret;
}
UPB_INLINE bool google_protobuf_Struct_FieldsEntry_has_value(const google_protobuf_Struct_FieldsEntry* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16, 32));
}
UPB_INLINE const google_protobuf_Value* google_protobuf_Struct_FieldsEntry_value(const google_protobuf_Struct_FieldsEntry* msg) {
  google_protobuf_Value* ret;
  _upb_msg_map_value(msg, &ret, sizeof(ret));
  return ret;
}

UPB_INLINE void google_protobuf_Struct_FieldsEntry_set_value(google_protobuf_Struct_FieldsEntry *msg, google_protobuf_Value* value) {
  _upb_msg_map_set_value(msg, &value, sizeof(google_protobuf_Value*));
}

/* google.protobuf.Value */

UPB_INLINE google_protobuf_Value* google_protobuf_Value_new(upb_Arena* arena) {
  return (google_protobuf_Value*)_upb_Message_New(&google_protobuf_Value_msginit, arena);
}
UPB_INLINE google_protobuf_Value* google_protobuf_Value_parse(const char* buf, size_t size, upb_Arena* arena) {
  google_protobuf_Value* ret = google_protobuf_Value_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_Value_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE google_protobuf_Value* google_protobuf_Value_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  google_protobuf_Value* ret = google_protobuf_Value_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_Value_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* google_protobuf_Value_serialize(const google_protobuf_Value* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_Value_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* google_protobuf_Value_serialize_ex(const google_protobuf_Value* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_Value_msginit, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  google_protobuf_Value_kind_null_value = 1,
  google_protobuf_Value_kind_number_value = 2,
  google_protobuf_Value_kind_string_value = 3,
  google_protobuf_Value_kind_bool_value = 4,
  google_protobuf_Value_kind_struct_value = 5,
  google_protobuf_Value_kind_list_value = 6,
  google_protobuf_Value_kind_NOT_SET = 0
} google_protobuf_Value_kind_oneofcases;
UPB_INLINE google_protobuf_Value_kind_oneofcases google_protobuf_Value_kind_case(const google_protobuf_Value* msg) {
  return (google_protobuf_Value_kind_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(0, 0, 0), int32_t);
}
UPB_INLINE bool google_protobuf_Value_has_null_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 1;
}
UPB_INLINE void google_protobuf_Value_clear_null_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, int32_t, UPB_SIZE(8, 8, 16), 0, UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE int32_t google_protobuf_Value_null_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, int32_t, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 1, 0);
}
UPB_INLINE bool google_protobuf_Value_has_number_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 2;
}
UPB_INLINE void google_protobuf_Value_clear_number_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, double, UPB_SIZE(8, 8, 16), 0, UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE double google_protobuf_Value_number_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, double, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 2, 0);
}
UPB_INLINE bool google_protobuf_Value_has_string_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 3;
}
UPB_INLINE void google_protobuf_Value_clear_string_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(8, 8, 16), upb_StringView_FromDataAndSize(NULL, 0), UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE upb_StringView google_protobuf_Value_string_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, upb_StringView, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 3, upb_StringView_FromString(""));
}
UPB_INLINE bool google_protobuf_Value_has_bool_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 4;
}
UPB_INLINE void google_protobuf_Value_clear_bool_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, bool, UPB_SIZE(8, 8, 16), 0, UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE bool google_protobuf_Value_bool_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, bool, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 4, false);
}
UPB_INLINE bool google_protobuf_Value_has_struct_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 5;
}
UPB_INLINE void google_protobuf_Value_clear_struct_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, google_protobuf_Struct*, UPB_SIZE(8, 8, 16), 0, UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE const google_protobuf_Struct* google_protobuf_Value_struct_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, const google_protobuf_Struct*, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 5, NULL);
}
UPB_INLINE bool google_protobuf_Value_has_list_value(const google_protobuf_Value* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0, 0)) == 6;
}
UPB_INLINE void google_protobuf_Value_clear_list_value(const google_protobuf_Value* msg) {
  UPB_WRITE_ONEOF(msg, google_protobuf_ListValue*, UPB_SIZE(8, 8, 16), 0, UPB_SIZE(0, 0, 0), google_protobuf_Value_kind_NOT_SET);
}
UPB_INLINE const google_protobuf_ListValue* google_protobuf_Value_list_value(const google_protobuf_Value* msg) {
  return UPB_READ_ONEOF(msg, const google_protobuf_ListValue*, UPB_SIZE(8, 8, 16), UPB_SIZE(0, 0, 0), 6, NULL);
}

UPB_INLINE void google_protobuf_Value_set_null_value(google_protobuf_Value *msg, int32_t value) {
  UPB_WRITE_ONEOF(msg, int32_t, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 1);
}
UPB_INLINE void google_protobuf_Value_set_number_value(google_protobuf_Value *msg, double value) {
  UPB_WRITE_ONEOF(msg, double, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 2);
}
UPB_INLINE void google_protobuf_Value_set_string_value(google_protobuf_Value *msg, upb_StringView value) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 3);
}
UPB_INLINE void google_protobuf_Value_set_bool_value(google_protobuf_Value *msg, bool value) {
  UPB_WRITE_ONEOF(msg, bool, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 4);
}
UPB_INLINE void google_protobuf_Value_set_struct_value(google_protobuf_Value *msg, google_protobuf_Struct* value) {
  UPB_WRITE_ONEOF(msg, google_protobuf_Struct*, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 5);
}
UPB_INLINE struct google_protobuf_Struct* google_protobuf_Value_mutable_struct_value(google_protobuf_Value* msg, upb_Arena* arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)google_protobuf_Value_struct_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)_upb_Message_New(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    google_protobuf_Value_set_struct_value(msg, sub);
  }
  return sub;
}
UPB_INLINE void google_protobuf_Value_set_list_value(google_protobuf_Value *msg, google_protobuf_ListValue* value) {
  UPB_WRITE_ONEOF(msg, google_protobuf_ListValue*, UPB_SIZE(8, 8, 16), value, UPB_SIZE(0, 0, 0), 6);
}
UPB_INLINE struct google_protobuf_ListValue* google_protobuf_Value_mutable_list_value(google_protobuf_Value* msg, upb_Arena* arena) {
  struct google_protobuf_ListValue* sub = (struct google_protobuf_ListValue*)google_protobuf_Value_list_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_ListValue*)_upb_Message_New(&google_protobuf_ListValue_msginit, arena);
    if (!sub) return NULL;
    google_protobuf_Value_set_list_value(msg, sub);
  }
  return sub;
}

/* google.protobuf.ListValue */

UPB_INLINE google_protobuf_ListValue* google_protobuf_ListValue_new(upb_Arena* arena) {
  return (google_protobuf_ListValue*)_upb_Message_New(&google_protobuf_ListValue_msginit, arena);
}
UPB_INLINE google_protobuf_ListValue* google_protobuf_ListValue_parse(const char* buf, size_t size, upb_Arena* arena) {
  google_protobuf_ListValue* ret = google_protobuf_ListValue_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_ListValue_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE google_protobuf_ListValue* google_protobuf_ListValue_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  google_protobuf_ListValue* ret = google_protobuf_ListValue_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &google_protobuf_ListValue_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* google_protobuf_ListValue_serialize(const google_protobuf_ListValue* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_ListValue_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* google_protobuf_ListValue_serialize_ex(const google_protobuf_ListValue* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &google_protobuf_ListValue_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool google_protobuf_ListValue_has_values(const google_protobuf_ListValue* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE void google_protobuf_ListValue_clear_values(const google_protobuf_ListValue* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0, 0));
}
UPB_INLINE const google_protobuf_Value* const* google_protobuf_ListValue_values(const google_protobuf_ListValue* msg, size_t* len) {
  return (const google_protobuf_Value* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0, 0), len);
}

UPB_INLINE google_protobuf_Value** google_protobuf_ListValue_mutable_values(google_protobuf_ListValue* msg, size_t* len) {
  return (google_protobuf_Value**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0, 0), len);
}
UPB_INLINE google_protobuf_Value** google_protobuf_ListValue_resize_values(google_protobuf_ListValue* msg, size_t len, upb_Arena* arena) {
  return (google_protobuf_Value**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0, 0), len, UPB_SIZE(2, 3, 4), arena);
}
UPB_INLINE struct google_protobuf_Value* google_protobuf_ListValue_add_values(google_protobuf_ListValue* msg, upb_Arena* arena) {
  struct google_protobuf_Value* sub = (struct google_protobuf_Value*)_upb_Message_New(&google_protobuf_Value_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0, 0), UPB_SIZE(2, 3, 4), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

extern const upb_MiniTable_File google_protobuf_struct_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_ */
