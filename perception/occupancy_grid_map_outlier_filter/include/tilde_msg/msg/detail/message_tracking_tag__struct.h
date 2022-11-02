// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/MessageTrackingTag.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_H_

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
// Member 'output_info'
#include "tilde_msg/msg/detail/pub_topic_time_info__struct.h"
// Member 'input_infos'
#include "tilde_msg/msg/detail/sub_topic_time_info__struct.h"

/// Struct defined in msg/MessageTrackingTag in the package tilde_msg.
typedef struct tilde_msg__msg__MessageTrackingTag
{
  std_msgs__msg__Header header;
  tilde_msg__msg__PubTopicTimeInfo output_info;
  tilde_msg__msg__SubTopicTimeInfo__Sequence input_infos;
} tilde_msg__msg__MessageTrackingTag;

// Struct for a sequence of tilde_msg__msg__MessageTrackingTag.
typedef struct tilde_msg__msg__MessageTrackingTag__Sequence
{
  tilde_msg__msg__MessageTrackingTag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__MessageTrackingTag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_H_
