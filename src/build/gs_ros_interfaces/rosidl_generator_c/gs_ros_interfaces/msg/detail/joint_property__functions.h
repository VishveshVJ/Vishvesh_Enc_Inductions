// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__FUNCTIONS_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gs_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gs_ros_interfaces/msg/detail/joint_property__struct.h"

/// Initialize msg/JointProperty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gs_ros_interfaces__msg__JointProperty
 * )) before or use
 * gs_ros_interfaces__msg__JointProperty__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__JointProperty__init(gs_ros_interfaces__msg__JointProperty * msg);

/// Finalize msg/JointProperty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__JointProperty__fini(gs_ros_interfaces__msg__JointProperty * msg);

/// Create msg/JointProperty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gs_ros_interfaces__msg__JointProperty__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__msg__JointProperty *
gs_ros_interfaces__msg__JointProperty__create();

/// Destroy msg/JointProperty message.
/**
 * It calls
 * gs_ros_interfaces__msg__JointProperty__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__JointProperty__destroy(gs_ros_interfaces__msg__JointProperty * msg);

/// Check for msg/JointProperty message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__JointProperty__are_equal(const gs_ros_interfaces__msg__JointProperty * lhs, const gs_ros_interfaces__msg__JointProperty * rhs);

/// Copy a msg/JointProperty message.
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
gs_ros_interfaces__msg__JointProperty__copy(
  const gs_ros_interfaces__msg__JointProperty * input,
  gs_ros_interfaces__msg__JointProperty * output);

/// Initialize array of msg/JointProperty messages.
/**
 * It allocates the memory for the number of elements and calls
 * gs_ros_interfaces__msg__JointProperty__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__JointProperty__Sequence__init(gs_ros_interfaces__msg__JointProperty__Sequence * array, size_t size);

/// Finalize array of msg/JointProperty messages.
/**
 * It calls
 * gs_ros_interfaces__msg__JointProperty__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__JointProperty__Sequence__fini(gs_ros_interfaces__msg__JointProperty__Sequence * array);

/// Create array of msg/JointProperty messages.
/**
 * It allocates the memory for the array and calls
 * gs_ros_interfaces__msg__JointProperty__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__msg__JointProperty__Sequence *
gs_ros_interfaces__msg__JointProperty__Sequence__create(size_t size);

/// Destroy array of msg/JointProperty messages.
/**
 * It calls
 * gs_ros_interfaces__msg__JointProperty__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__msg__JointProperty__Sequence__destroy(gs_ros_interfaces__msg__JointProperty__Sequence * array);

/// Check for msg/JointProperty message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__msg__JointProperty__Sequence__are_equal(const gs_ros_interfaces__msg__JointProperty__Sequence * lhs, const gs_ros_interfaces__msg__JointProperty__Sequence * rhs);

/// Copy an array of msg/JointProperty messages.
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
gs_ros_interfaces__msg__JointProperty__Sequence__copy(
  const gs_ros_interfaces__msg__JointProperty__Sequence * input,
  gs_ros_interfaces__msg__JointProperty__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__FUNCTIONS_H_
