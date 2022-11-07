// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tilde_msg:msg/SteePathWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__FUNCTIONS_H_
#define TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tilde_msg/msg/rosidl_generator_c__visibility_control.h"

#include "tilde_msg/msg/detail/stee_path_with_lane_id__struct.h"

/// Initialize msg/SteePathWithLaneId message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tilde_msg__msg__SteePathWithLaneId
 * )) before or use
 * tilde_msg__msg__SteePathWithLaneId__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteePathWithLaneId__init(tilde_msg__msg__SteePathWithLaneId * msg);

/// Finalize msg/SteePathWithLaneId message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteePathWithLaneId__fini(tilde_msg__msg__SteePathWithLaneId * msg);

/// Create msg/SteePathWithLaneId message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tilde_msg__msg__SteePathWithLaneId__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
tilde_msg__msg__SteePathWithLaneId *
tilde_msg__msg__SteePathWithLaneId__create();

/// Destroy msg/SteePathWithLaneId message.
/**
 * It calls
 * tilde_msg__msg__SteePathWithLaneId__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteePathWithLaneId__destroy(tilde_msg__msg__SteePathWithLaneId * msg);

/// Check for msg/SteePathWithLaneId message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteePathWithLaneId__are_equal(const tilde_msg__msg__SteePathWithLaneId * lhs, const tilde_msg__msg__SteePathWithLaneId * rhs);

/// Copy a msg/SteePathWithLaneId message.
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
tilde_msg__msg__SteePathWithLaneId__copy(
  const tilde_msg__msg__SteePathWithLaneId * input,
  tilde_msg__msg__SteePathWithLaneId * output);

/// Initialize array of msg/SteePathWithLaneId messages.
/**
 * It allocates the memory for the number of elements and calls
 * tilde_msg__msg__SteePathWithLaneId__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteePathWithLaneId__Sequence__init(tilde_msg__msg__SteePathWithLaneId__Sequence * array, size_t size);

/// Finalize array of msg/SteePathWithLaneId messages.
/**
 * It calls
 * tilde_msg__msg__SteePathWithLaneId__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteePathWithLaneId__Sequence__fini(tilde_msg__msg__SteePathWithLaneId__Sequence * array);

/// Create array of msg/SteePathWithLaneId messages.
/**
 * It allocates the memory for the array and calls
 * tilde_msg__msg__SteePathWithLaneId__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
tilde_msg__msg__SteePathWithLaneId__Sequence *
tilde_msg__msg__SteePathWithLaneId__Sequence__create(size_t size);

/// Destroy array of msg/SteePathWithLaneId messages.
/**
 * It calls
 * tilde_msg__msg__SteePathWithLaneId__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
void
tilde_msg__msg__SteePathWithLaneId__Sequence__destroy(tilde_msg__msg__SteePathWithLaneId__Sequence * array);

/// Check for msg/SteePathWithLaneId message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tilde_msg
bool
tilde_msg__msg__SteePathWithLaneId__Sequence__are_equal(const tilde_msg__msg__SteePathWithLaneId__Sequence * lhs, const tilde_msg__msg__SteePathWithLaneId__Sequence * rhs);

/// Copy an array of msg/SteePathWithLaneId messages.
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
tilde_msg__msg__SteePathWithLaneId__Sequence__copy(
  const tilde_msg__msg__SteePathWithLaneId__Sequence * input,
  tilde_msg__msg__SteePathWithLaneId__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TILDE_MSG__MSG__DETAIL__STEE_PATH_WITH_LANE_ID__FUNCTIONS_H_
