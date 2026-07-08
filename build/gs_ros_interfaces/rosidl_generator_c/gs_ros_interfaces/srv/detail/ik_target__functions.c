// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/srv/detail/ik_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_name`
// Member `target_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `init_robot_pos`
// Member `pos_mask`
// Member `rot_mask`
// Member `dofs_idx_local`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__srv__IKTarget_Request__init(gs_ros_interfaces__srv__IKTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__init(&msg->target_link_name)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // init_robot_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->init_robot_pos, 0)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // request_joint_limit
  // max_samples
  // max_solver_iterartions
  // damping
  // pos_tol
  // rot_tol
  // pos_mask
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->pos_mask, 0)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // rot_mask
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->rot_mask, 0)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // max_step_size
  // dofs_idx_local
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->dofs_idx_local, 0)) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
    return false;
  }
  // visualize
  // execute
  return true;
}

void
gs_ros_interfaces__srv__IKTarget_Request__fini(gs_ros_interfaces__srv__IKTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // target_link_name
  rosidl_runtime_c__String__fini(&msg->target_link_name);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // init_robot_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->init_robot_pos);
  // request_joint_limit
  // max_samples
  // max_solver_iterartions
  // damping
  // pos_tol
  // rot_tol
  // pos_mask
  rosidl_runtime_c__boolean__Sequence__fini(&msg->pos_mask);
  // rot_mask
  rosidl_runtime_c__boolean__Sequence__fini(&msg->rot_mask);
  // max_step_size
  // dofs_idx_local
  rosidl_runtime_c__int32__Sequence__fini(&msg->dofs_idx_local);
  // visualize
  // execute
}

bool
gs_ros_interfaces__srv__IKTarget_Request__are_equal(const gs_ros_interfaces__srv__IKTarget_Request * lhs, const gs_ros_interfaces__srv__IKTarget_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_link_name), &(rhs->target_link_name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // init_robot_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->init_robot_pos), &(rhs->init_robot_pos)))
  {
    return false;
  }
  // request_joint_limit
  if (lhs->request_joint_limit != rhs->request_joint_limit) {
    return false;
  }
  // max_samples
  if (lhs->max_samples != rhs->max_samples) {
    return false;
  }
  // max_solver_iterartions
  if (lhs->max_solver_iterartions != rhs->max_solver_iterartions) {
    return false;
  }
  // damping
  if (lhs->damping != rhs->damping) {
    return false;
  }
  // pos_tol
  if (lhs->pos_tol != rhs->pos_tol) {
    return false;
  }
  // rot_tol
  if (lhs->rot_tol != rhs->rot_tol) {
    return false;
  }
  // pos_mask
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->pos_mask), &(rhs->pos_mask)))
  {
    return false;
  }
  // rot_mask
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->rot_mask), &(rhs->rot_mask)))
  {
    return false;
  }
  // max_step_size
  if (lhs->max_step_size != rhs->max_step_size) {
    return false;
  }
  // dofs_idx_local
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->dofs_idx_local), &(rhs->dofs_idx_local)))
  {
    return false;
  }
  // visualize
  if (lhs->visualize != rhs->visualize) {
    return false;
  }
  // execute
  if (lhs->execute != rhs->execute) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__IKTarget_Request__copy(
  const gs_ros_interfaces__srv__IKTarget_Request * input,
  gs_ros_interfaces__srv__IKTarget_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_link_name), &(output->target_link_name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // init_robot_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->init_robot_pos), &(output->init_robot_pos)))
  {
    return false;
  }
  // request_joint_limit
  output->request_joint_limit = input->request_joint_limit;
  // max_samples
  output->max_samples = input->max_samples;
  // max_solver_iterartions
  output->max_solver_iterartions = input->max_solver_iterartions;
  // damping
  output->damping = input->damping;
  // pos_tol
  output->pos_tol = input->pos_tol;
  // rot_tol
  output->rot_tol = input->rot_tol;
  // pos_mask
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->pos_mask), &(output->pos_mask)))
  {
    return false;
  }
  // rot_mask
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->rot_mask), &(output->rot_mask)))
  {
    return false;
  }
  // max_step_size
  output->max_step_size = input->max_step_size;
  // dofs_idx_local
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->dofs_idx_local), &(output->dofs_idx_local)))
  {
    return false;
  }
  // visualize
  output->visualize = input->visualize;
  // execute
  output->execute = input->execute;
  return true;
}

gs_ros_interfaces__srv__IKTarget_Request *
gs_ros_interfaces__srv__IKTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Request * msg = (gs_ros_interfaces__srv__IKTarget_Request *)allocator.allocate(sizeof(gs_ros_interfaces__srv__IKTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__IKTarget_Request));
  bool success = gs_ros_interfaces__srv__IKTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__IKTarget_Request__destroy(gs_ros_interfaces__srv__IKTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__IKTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__IKTarget_Request__Sequence__init(gs_ros_interfaces__srv__IKTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Request * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__IKTarget_Request *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__IKTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__IKTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__IKTarget_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gs_ros_interfaces__srv__IKTarget_Request__Sequence__fini(gs_ros_interfaces__srv__IKTarget_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gs_ros_interfaces__srv__IKTarget_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gs_ros_interfaces__srv__IKTarget_Request__Sequence *
gs_ros_interfaces__srv__IKTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Request__Sequence * array = (gs_ros_interfaces__srv__IKTarget_Request__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__IKTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__IKTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__IKTarget_Request__Sequence__destroy(gs_ros_interfaces__srv__IKTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__IKTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__IKTarget_Request__Sequence__are_equal(const gs_ros_interfaces__srv__IKTarget_Request__Sequence * lhs, const gs_ros_interfaces__srv__IKTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__IKTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__IKTarget_Request__Sequence__copy(
  const gs_ros_interfaces__srv__IKTarget_Request__Sequence * input,
  gs_ros_interfaces__srv__IKTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__IKTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__IKTarget_Request * data =
      (gs_ros_interfaces__srv__IKTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__IKTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__IKTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__IKTarget_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_angles`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__srv__IKTarget_Response__init(gs_ros_interfaces__srv__IKTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // solution_found
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_angles, 0)) {
    gs_ros_interfaces__srv__IKTarget_Response__fini(msg);
    return false;
  }
  // target_pos_error
  // target_quat_error
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    gs_ros_interfaces__srv__IKTarget_Response__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__IKTarget_Response__fini(gs_ros_interfaces__srv__IKTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // solution_found
  // joint_angles
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_angles);
  // target_pos_error
  // target_quat_error
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
gs_ros_interfaces__srv__IKTarget_Response__are_equal(const gs_ros_interfaces__srv__IKTarget_Response * lhs, const gs_ros_interfaces__srv__IKTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // solution_found
  if (lhs->solution_found != rhs->solution_found) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_angles), &(rhs->joint_angles)))
  {
    return false;
  }
  // target_pos_error
  if (lhs->target_pos_error != rhs->target_pos_error) {
    return false;
  }
  // target_quat_error
  if (lhs->target_quat_error != rhs->target_quat_error) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__IKTarget_Response__copy(
  const gs_ros_interfaces__srv__IKTarget_Response * input,
  gs_ros_interfaces__srv__IKTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // solution_found
  output->solution_found = input->solution_found;
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_angles), &(output->joint_angles)))
  {
    return false;
  }
  // target_pos_error
  output->target_pos_error = input->target_pos_error;
  // target_quat_error
  output->target_quat_error = input->target_quat_error;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__IKTarget_Response *
gs_ros_interfaces__srv__IKTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Response * msg = (gs_ros_interfaces__srv__IKTarget_Response *)allocator.allocate(sizeof(gs_ros_interfaces__srv__IKTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__IKTarget_Response));
  bool success = gs_ros_interfaces__srv__IKTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__IKTarget_Response__destroy(gs_ros_interfaces__srv__IKTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__IKTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__IKTarget_Response__Sequence__init(gs_ros_interfaces__srv__IKTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Response * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__IKTarget_Response *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__IKTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__IKTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__IKTarget_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gs_ros_interfaces__srv__IKTarget_Response__Sequence__fini(gs_ros_interfaces__srv__IKTarget_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gs_ros_interfaces__srv__IKTarget_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gs_ros_interfaces__srv__IKTarget_Response__Sequence *
gs_ros_interfaces__srv__IKTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__IKTarget_Response__Sequence * array = (gs_ros_interfaces__srv__IKTarget_Response__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__IKTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__IKTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__IKTarget_Response__Sequence__destroy(gs_ros_interfaces__srv__IKTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__IKTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__IKTarget_Response__Sequence__are_equal(const gs_ros_interfaces__srv__IKTarget_Response__Sequence * lhs, const gs_ros_interfaces__srv__IKTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__IKTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__IKTarget_Response__Sequence__copy(
  const gs_ros_interfaces__srv__IKTarget_Response__Sequence * input,
  gs_ros_interfaces__srv__IKTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__IKTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__IKTarget_Response * data =
      (gs_ros_interfaces__srv__IKTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__IKTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__IKTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__IKTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
