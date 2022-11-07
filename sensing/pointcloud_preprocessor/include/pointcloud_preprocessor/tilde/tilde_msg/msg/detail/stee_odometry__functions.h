// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tilde_msg:msg/SteeOdometry.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__FUNCTIONS_H_
#define TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tilde_msg/msg/rosidl_generator_c__visibility_control.h"

#include "tilde_msg/msg/detail/stee_odometry__struct.h"

/// Initialize msg/SteeOdometry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tilde_msg__msg__SteeOdometry
 * )) before or use
 * tilde_msg__msg__SteeOdometry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__init(tilde_msg__msg__SteeOdometry * msg);

/// Finalize msg/SteeOdometry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteeOdometry__fini(tilde_msg__msg__SteeOdometry * msg);

/// Create msg/SteeOdometry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tilde_msg__msg__SteeOdometry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
tilde_msg__msg__SteeOdometry *
tilde_msg__msg__SteeOdometry__create();

/// Destroy msg/SteeOdometry message.
/**
 * It calls
 * tilde_msg__msg__SteeOdometry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteeOdometry__destroy(tilde_msg__msg__SteeOdometry * msg);

/// Check for msg/SteeOdometry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__are_equal(const tilde_msg__msg__SteeOdometry * lhs, const tilde_msg__msg__SteeOdometry * rhs);

/// Copy a msg/SteeOdometry message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__copy(
  const tilde_msg__msg__SteeOdometry * input,
  tilde_msg__msg__SteeOdometry * output);

/// Initialize array of msg/SteeOdometry messages.
/**
 * It allocates the memory for the number of elements and calls
 * tilde_msg__msg__SteeOdometry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__Sequence__init(tilde_msg__msg__SteeOdometry__Sequence * array, size_t size);

/// Finalize array of msg/SteeOdometry messages.
/**
 * It calls
 * tilde_msg__msg__SteeOdometry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteeOdometry__Sequence__fini(tilde_msg__msg__SteeOdometry__Sequence * array);

/// Create array of msg/SteeOdometry messages.
/**
 * It allocates the memory for the array and calls
 * tilde_msg__msg__SteeOdometry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
tilde_msg__msg__SteeOdometry__Sequence *
tilde_msg__msg__SteeOdometry__Sequence__create(size_t size);

/// Destroy array of msg/SteeOdometry messages.
/**
 * It calls
 * tilde_msg__msg__SteeOdometry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteeOdometry__Sequence__destroy(tilde_msg__msg__SteeOdometry__Sequence * array);

/// Check for msg/SteeOdometry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__Sequence__are_equal(const tilde_msg__msg__SteeOdometry__Sequence * lhs, const tilde_msg__msg__SteeOdometry__Sequence * rhs);

/// Copy an array of msg/SteeOdometry messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteeOdometry__Sequence__copy(
  const tilde_msg__msg__SteeOdometry__Sequence * input,
  tilde_msg__msg__SteeOdometry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__FUNCTIONS_H_
