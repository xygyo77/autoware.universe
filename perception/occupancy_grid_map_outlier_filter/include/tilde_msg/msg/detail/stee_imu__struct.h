// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tilde_msg:msg/SteeImu.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_IMU__STRUCT_H_
#define TILDE_MSG__MSG__DETAIL__STEE_IMU__STRUCT_H_

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
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.h"

/// Struct defined in msg/SteeImu in the package tilde_msg.
typedef struct tilde_msg__msg__SteeImu
{
  sensor_msgs__msg__Imu body;
  tilde_msg__msg__SteeSource__Sequence sources;
} tilde_msg__msg__SteeImu;

// Struct for a sequence of tilde_msg__msg__SteeImu.
typedef struct tilde_msg__msg__SteeImu__Sequence
{
  tilde_msg__msg__SteeImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tilde_msg__msg__SteeImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_IMU__STRUCT_H_
