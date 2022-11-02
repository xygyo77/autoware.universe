// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/PubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_H_

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
// Member 'node_fqn'
#include "rosidl_runtime_c/string.h"
// Member 'pub_time'
// Member 'pub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PubTopicTimeInfo in the package tilde_msg.
typedef struct tilde_msg__msg__PubTopicTimeInfo
{
  rosidl_runtime_c__String topic_name;
  rosidl_runtime_c__String node_fqn;
  int64_t seq;
  builtin_interfaces__msg__Time pub_time;
  builtin_interfaces__msg__Time pub_time_steady;
  bool has_header_stamp;
  builtin_interfaces__msg__Time header_stamp;
} tilde_msg__msg__PubTopicTimeInfo;

// Struct for a sequence of tilde_msg__msg__PubTopicTimeInfo.
typedef struct tilde_msg__msg__PubTopicTimeInfo__Sequence
{
  tilde_msg__msg__PubTopicTimeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__PubTopicTimeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_H_
