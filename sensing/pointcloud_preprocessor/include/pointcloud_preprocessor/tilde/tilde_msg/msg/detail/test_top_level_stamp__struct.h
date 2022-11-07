// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/TestTopLevelStamp.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TestTopLevelStamp in the package tilde_msg.
typedef struct tilde_msg__msg__TestTopLevelStamp
{
  builtin_interfaces__msg__Time stamp;
} tilde_msg__msg__TestTopLevelStamp;

// Struct for a sequence of tilde_msg__msg__TestTopLevelStamp.
typedef struct tilde_msg__msg__TestTopLevelStamp__Sequence
{
  tilde_msg__msg__TestTopLevelStamp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__TestTopLevelStamp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_H_
