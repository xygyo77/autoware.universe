// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteeDetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'body'
#include "autoware_auto_perception_msgs/msg/detail/detected_objects__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteeDetectedObjects in the package tilde_msg.
typedef struct tilde_msg__msg__SteeDetectedObjects
{
  autoware_auto_perception_msgs__msg__DetectedObjects body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteeDetectedObjects;

// Struct for a sequence of tilde_msg__msg__SteeDetectedObjects.
typedef struct tilde_msg__msg__SteeDetectedObjects__Sequence
{
  tilde_msg__msg__SteeDetectedObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteeDetectedObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__STRUCT_H_
