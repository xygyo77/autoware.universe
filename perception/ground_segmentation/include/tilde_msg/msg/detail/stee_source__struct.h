// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteeSource.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_H_

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
// Member 'first_subscription_steady_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SteeSource in the package tilde_msg.
typedef struct tilde_msg__msg__SteeSource
{
  rosidl_runtime_c__String topic;
  builtin_interfaces__msg__Time stamp;
  builtin_interfaces__msg__Time first_subscription_steady_time;
} tilde_msg__msg__SteeSource;

// Struct for a sequence of tilde_msg__msg__SteeSource.
typedef struct tilde_msg__msg__SteeSource__Sequence
{
  tilde_msg__msg__SteeSource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteeSource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_H_
