// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gs_ros_interfaces:msg/ContactOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__FUNCTIONS_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gs_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gs_ros_interfaces/msg/detail/contact_options__struct.h"

/// Initialize msg/ContactOptions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gs_ros_interfaces__msg__ContactOptions
 * )) before or use
 * gs_ros_interfaces__msg__ContactOptions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__init(gs_ros_interfaces__msg__ContactOptions * msg);

/// Finalize msg/ContactOptions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__ContactOptions__fini(gs_ros_interfaces__msg__ContactOptions * msg);

/// Create msg/ContactOptions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gs_ros_interfaces__msg__ContactOptions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__msg__ContactOptions *
gs_ros_interfaces__msg__ContactOptions__create();

/// Destroy msg/ContactOptions message.
/**
 * It calls
 * gs_ros_interfaces__msg__ContactOptions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__ContactOptions__destroy(gs_ros_interfaces__msg__ContactOptions * msg);

/// Check for msg/ContactOptions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__are_equal(const gs_ros_interfaces__msg__ContactOptions * lhs, const gs_ros_interfaces__msg__ContactOptions * rhs);

/// Copy a msg/ContactOptions message.
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
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__copy(
  const gs_ros_interfaces__msg__ContactOptions * input,
  gs_ros_interfaces__msg__ContactOptions * output);

/// Initialize array of msg/ContactOptions messages.
/**
 * It allocates the memory for the number of elements and calls
 * gs_ros_interfaces__msg__ContactOptions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__Sequence__init(gs_ros_interfaces__msg__ContactOptions__Sequence * array, size_t size);

/// Finalize array of msg/ContactOptions messages.
/**
 * It calls
 * gs_ros_interfaces__msg__ContactOptions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__ContactOptions__Sequence__fini(gs_ros_interfaces__msg__ContactOptions__Sequence * array);

/// Create array of msg/ContactOptions messages.
/**
 * It allocates the memory for the array and calls
 * gs_ros_interfaces__msg__ContactOptions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__msg__ContactOptions__Sequence *
gs_ros_interfaces__msg__ContactOptions__Sequence__create(size_t size);

/// Destroy array of msg/ContactOptions messages.
/**
 * It calls
 * gs_ros_interfaces__msg__ContactOptions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__ContactOptions__Sequence__destroy(gs_ros_interfaces__msg__ContactOptions__Sequence * array);

/// Check for msg/ContactOptions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__Sequence__are_equal(const gs_ros_interfaces__msg__ContactOptions__Sequence * lhs, const gs_ros_interfaces__msg__ContactOptions__Sequence * rhs);

/// Copy an array of msg/ContactOptions messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__ContactOptions__Sequence__copy(
  const gs_ros_interfaces__msg__ContactOptions__Sequence * input,
  gs_ros_interfaces__msg__ContactOptions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_OPTIONS__FUNCTIONS_H_
