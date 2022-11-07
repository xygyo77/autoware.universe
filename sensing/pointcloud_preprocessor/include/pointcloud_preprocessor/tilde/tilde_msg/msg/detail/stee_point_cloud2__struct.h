// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteePointCloud2.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__STRUCT_H_

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
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteePointCloud2 in the package tilde_msg.
typedef struct tilde_msg__msg__SteePointCloud2
{
  sensor_msgs__msg__PointCloud2 body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteePointCloud2;

// Struct for a sequence of tilde_msg__msg__SteePointCloud2.
typedef struct tilde_msg__msg__SteePointCloud2__Sequence
{
  tilde_msg__msg__SteePointCloud2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteePointCloud2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__STRUCT_H_
