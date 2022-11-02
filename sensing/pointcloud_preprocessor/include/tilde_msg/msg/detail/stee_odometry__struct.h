// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteeOdometry.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__STRUCT_H_

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
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteeOdometry in the package tilde_msg.
typedef struct tilde_msg__msg__SteeOdometry
{
  nav_msgs__msg__Odometry body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteeOdometry;

// Struct for a sequence of tilde_msg__msg__SteeOdometry.
typedef struct tilde_msg__msg__SteeOdometry__Sequence
{
  tilde_msg__msg__SteeOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteeOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__STRUCT_H_
