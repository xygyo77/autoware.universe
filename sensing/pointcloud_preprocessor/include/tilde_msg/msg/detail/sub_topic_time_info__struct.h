// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"
// Member 'sub_time'
// Member 'sub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SubTopicTimeInfo in the package tilde_msg.
typedef struct tilde_msg__msg__SubTopicTimeInfo
{
  rosidl_runtime_c__String topic_name;
  builtin_interfaces__msg__Time sub_time;
  builtin_interfaces__msg__Time sub_time_steady;
  bool has_header_stamp;
  builtin_interfaces__msg__Time header_stamp;
} tilde_msg__msg__SubTopicTimeInfo;

// Struct for a sequence of tilde_msg__msg__SubTopicTimeInfo.
typedef struct tilde_msg__msg__SubTopicTimeInfo__Sequence
{
  tilde_msg__msg__SubTopicTimeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SubTopicTimeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_H_
