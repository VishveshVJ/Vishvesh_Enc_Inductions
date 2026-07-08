// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gs_ros_interfaces:srv/BuildSimulator.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__FUNCTIONS_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gs_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gs_ros_interfaces/srv/detail/build_simulator__struct.h"

/// Initialize srv/BuildSimulator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gs_ros_interfaces__srv__BuildSimulator_Request
 * )) before or use
 * gs_ros_interfaces__srv__BuildSimulator_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Request__init(gs_ros_interfaces__srv__BuildSimulator_Request * msg);

/// Finalize srv/BuildSimulator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Request__fini(gs_ros_interfaces__srv__BuildSimulator_Request * msg);

/// Create srv/BuildSimulator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__srv__BuildSimulator_Request *
gs_ros_interfaces__srv__BuildSimulator_Request__create();

/// Destroy srv/BuildSimulator message.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Request__destroy(gs_ros_interfaces__srv__BuildSimulator_Request * msg);

/// Check for srv/BuildSimulator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Request__are_equal(const gs_ros_interfaces__srv__BuildSimulator_Request * lhs, const gs_ros_interfaces__srv__BuildSimulator_Request * rhs);

/// Copy a srv/BuildSimulator message.
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
gs_ros_interfaces__srv__BuildSimulator_Request__copy(
  const gs_ros_interfaces__srv__BuildSimulator_Request * input,
  gs_ros_interfaces__srv__BuildSimulator_Request * output);

/// Initialize array of srv/BuildSimulator messages.
/**
 * It allocates the memory for the number of elements and calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__init(gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * array, size_t size);

/// Finalize array of srv/BuildSimulator messages.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__fini(gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * array);

/// Create array of srv/BuildSimulator messages.
/**
 * It allocates the memory for the array and calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence *
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__create(size_t size);

/// Destroy array of srv/BuildSimulator messages.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__destroy(gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * array);

/// Check for srv/BuildSimulator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__are_equal(const gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * lhs, const gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * rhs);

/// Copy an array of srv/BuildSimulator messages.
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
gs_ros_interfaces__srv__BuildSimulator_Request__Sequence__copy(
  const gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * input,
  gs_ros_interfaces__srv__BuildSimulator_Request__Sequence * output);

/// Initialize srv/BuildSimulator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gs_ros_interfaces__srv__BuildSimulator_Response
 * )) before or use
 * gs_ros_interfaces__srv__BuildSimulator_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Response__init(gs_ros_interfaces__srv__BuildSimulator_Response * msg);

/// Finalize srv/BuildSimulator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Response__fini(gs_ros_interfaces__srv__BuildSimulator_Response * msg);

/// Create srv/BuildSimulator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__srv__BuildSimulator_Response *
gs_ros_interfaces__srv__BuildSimulator_Response__create();

/// Destroy srv/BuildSimulator message.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Response__destroy(gs_ros_interfaces__srv__BuildSimulator_Response * msg);

/// Check for srv/BuildSimulator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Response__are_equal(const gs_ros_interfaces__srv__BuildSimulator_Response * lhs, const gs_ros_interfaces__srv__BuildSimulator_Response * rhs);

/// Copy a srv/BuildSimulator message.
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
gs_ros_interfaces__srv__BuildSimulator_Response__copy(
  const gs_ros_interfaces__srv__BuildSimulator_Response * input,
  gs_ros_interfaces__srv__BuildSimulator_Response * output);

/// Initialize array of srv/BuildSimulator messages.
/**
 * It allocates the memory for the number of elements and calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__init(gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * array, size_t size);

/// Finalize array of srv/BuildSimulator messages.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__fini(gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * array);

/// Create array of srv/BuildSimulator messages.
/**
 * It allocates the memory for the array and calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence *
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__create(size_t size);

/// Destroy array of srv/BuildSimulator messages.
/**
 * It calls
 * gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
void
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__destroy(gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * array);

/// Check for srv/BuildSimulator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gs_ros_interfaces
bool
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__are_equal(const gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * lhs, const gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * rhs);

/// Copy an array of srv/BuildSimulator messages.
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
gs_ros_interfaces__srv__BuildSimulator_Response__Sequence__copy(
  const gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * input,
  gs_ros_interfaces__srv__BuildSimulator_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__BUILD_SIMULATOR__FUNCTIONS_H_
