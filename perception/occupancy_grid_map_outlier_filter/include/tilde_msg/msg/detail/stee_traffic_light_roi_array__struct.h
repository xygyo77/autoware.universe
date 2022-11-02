// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteeTrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_

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
#include "autoware_auto_perception_msgs/msg/detail/traffic_light_roi_array__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteeTrafficLightRoiArray in the package tilde_msg.
typedef struct tilde_msg__msg__SteeTrafficLightRoiArray
{
  autoware_auto_perception_msgs__msg__TrafficLightRoiArray body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteeTrafficLightRoiArray;

// Struct for a sequence of tilde_msg__msg__SteeTrafficLightRoiArray.
typedef struct tilde_msg__msg__SteeTrafficLightRoiArray__Sequence
{
  tilde_msg__msg__SteeTrafficLightRoiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteeTrafficLightRoiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
