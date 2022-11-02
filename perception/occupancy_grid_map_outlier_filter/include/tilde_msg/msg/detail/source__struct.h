// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/Source.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'elapsed'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Source in the package tilde_msg.
typedef struct tilde_msg__msg__Source
{
  rosidl_runtime_c__String topic;
  builtin_interfaces__msg__Time stamp;
  builtin_interfaces__msg__Duration elapsed;
  bool is_overrun;
} tilde_msg__msg__Source;

// Struct for a sequence of tilde_msg__msg__Source.
typedef struct tilde_msg__msg__Source__Sequence
{
  tilde_msg__msg__Source * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__Source__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_H_
