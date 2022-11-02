// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteePoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteePoseWithCovarianceStamped in the package tilde_msg.
typedef struct tilde_msg__msg__SteePoseWithCovarianceStamped
{
  geometry_msgs__msg__PoseWithCovarianceStamped body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteePoseWithCovarianceStamped;

// Struct for a sequence of tilde_msg__msg__SteePoseWithCovarianceStamped.
typedef struct tilde_msg__msg__SteePoseWithCovarianceStamped__Sequence
{
  tilde_msg__msg__SteePoseWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteePoseWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
