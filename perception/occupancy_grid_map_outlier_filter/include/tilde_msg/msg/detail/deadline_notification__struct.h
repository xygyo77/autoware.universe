// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/DeadlineNotification.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'deadline_setting'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/source__struct.h"

/// Struct defined in msg/DeadlineNotification in the package tilde_msg.
typedef struct tilde_msg__msg__DeadlineNotification
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String topic_name;
  builtin_interfaces__msg__Time stamp;
  builtin_interfaces__msg__Duration deadline_setting;
  tilde_msg__msg__Source__Sequence sources;
} tilde_msg__msg__DeadlineNotification;

// Struct for a sequence of tilde_msg__msg__DeadlineNotification.
typedef struct tilde_msg__msg__DeadlineNotification__Sequence
{
  tilde_msg__msg__DeadlineNotification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__DeadlineNotification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_H_
