// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/srv/detail/path_plan_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_name`
// Member `attached_intity`
// Member `target_link_name`
// Member `planner`
// Member `ee_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal_state`
// Member `start_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
gs_ros_interfaces__srv__PathPlanTarget_Request__init(gs_ros_interfaces__srv__PathPlanTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // attached_intity
  if (!rosidl_runtime_c__String__init(&msg->attached_intity)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__init(&msg->target_link_name)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // goal_state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal_state, 0)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // start_state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->start_state, 0)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // max_nodes
  // resolution
  // timeout
  // max_retries
  // smooth_path
  // num_waypoints
  // ignore_collision
  // planner
  if (!rosidl_runtime_c__String__init(&msg->planner)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // ee_link_name
  if (!rosidl_runtime_c__String__init(&msg->ee_link_name)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // visualize
  // execute
  // target_pos
  if (!geometry_msgs__msg__Point__init(&msg->target_pos)) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
    return false;
  }
  // tolerance
  return true;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Request__fini(gs_ros_interfaces__srv__PathPlanTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // attached_intity
  rosidl_runtime_c__String__fini(&msg->attached_intity);
  // target_link_name
  rosidl_runtime_c__String__fini(&msg->target_link_name);
  // goal_state
  rosidl_runtime_c__double__Sequence__fini(&msg->goal_state);
  // start_state
  rosidl_runtime_c__double__Sequence__fini(&msg->start_state);
  // max_nodes
  // resolution
  // timeout
  // max_retries
  // smooth_path
  // num_waypoints
  // ignore_collision
  // planner
  rosidl_runtime_c__String__fini(&msg->planner);
  // ee_link_name
  rosidl_runtime_c__String__fini(&msg->ee_link_name);
  // visualize
  // execute
  // target_pos
  geometry_msgs__msg__Point__fini(&msg->target_pos);
  // tolerance
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Request__are_equal(const gs_ros_interfaces__srv__PathPlanTarget_Request * lhs, const gs_ros_interfaces__srv__PathPlanTarget_Request * rhs)
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
  // attached_intity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->attached_intity), &(rhs->attached_intity)))
  {
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_link_name), &(rhs->target_link_name)))
  {
    return false;
  }
  // goal_state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal_state), &(rhs->goal_state)))
  {
    return false;
  }
  // start_state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->start_state), &(rhs->start_state)))
  {
    return false;
  }
  // max_nodes
  if (lhs->max_nodes != rhs->max_nodes) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // max_retries
  if (lhs->max_retries != rhs->max_retries) {
    return false;
  }
  // smooth_path
  if (lhs->smooth_path != rhs->smooth_path) {
    return false;
  }
  // num_waypoints
  if (lhs->num_waypoints != rhs->num_waypoints) {
    return false;
  }
  // ignore_collision
  if (lhs->ignore_collision != rhs->ignore_collision) {
    return false;
  }
  // planner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planner), &(rhs->planner)))
  {
    return false;
  }
  // ee_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ee_link_name), &(rhs->ee_link_name)))
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
  // target_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target_pos), &(rhs->target_pos)))
  {
    return false;
  }
  // tolerance
  if (lhs->tolerance != rhs->tolerance) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Request__copy(
  const gs_ros_interfaces__srv__PathPlanTarget_Request * input,
  gs_ros_interfaces__srv__PathPlanTarget_Request * output)
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
  // attached_intity
  if (!rosidl_runtime_c__String__copy(
      &(input->attached_intity), &(output->attached_intity)))
  {
    return false;
  }
  // target_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_link_name), &(output->target_link_name)))
  {
    return false;
  }
  // goal_state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal_state), &(output->goal_state)))
  {
    return false;
  }
  // start_state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->start_state), &(output->start_state)))
  {
    return false;
  }
  // max_nodes
  output->max_nodes = input->max_nodes;
  // resolution
  output->resolution = input->resolution;
  // timeout
  output->timeout = input->timeout;
  // max_retries
  output->max_retries = input->max_retries;
  // smooth_path
  output->smooth_path = input->smooth_path;
  // num_waypoints
  output->num_waypoints = input->num_waypoints;
  // ignore_collision
  output->ignore_collision = input->ignore_collision;
  // planner
  if (!rosidl_runtime_c__String__copy(
      &(input->planner), &(output->planner)))
  {
    return false;
  }
  // ee_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->ee_link_name), &(output->ee_link_name)))
  {
    return false;
  }
  // visualize
  output->visualize = input->visualize;
  // execute
  output->execute = input->execute;
  // target_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->target_pos), &(output->target_pos)))
  {
    return false;
  }
  // tolerance
  output->tolerance = input->tolerance;
  return true;
}

gs_ros_interfaces__srv__PathPlanTarget_Request *
gs_ros_interfaces__srv__PathPlanTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Request * msg = (gs_ros_interfaces__srv__PathPlanTarget_Request *)allocator.allocate(sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request));
  bool success = gs_ros_interfaces__srv__PathPlanTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Request__destroy(gs_ros_interfaces__srv__PathPlanTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__init(gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Request * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__PathPlanTarget_Request *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__PathPlanTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__PathPlanTarget_Request__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__fini(gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * array)
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
      gs_ros_interfaces__srv__PathPlanTarget_Request__fini(&array->data[i]);
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

gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence *
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * array = (gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__destroy(gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__are_equal(const gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * lhs, const gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__PathPlanTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence__copy(
  const gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * input,
  gs_ros_interfaces__srv__PathPlanTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__PathPlanTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__PathPlanTarget_Request * data =
      (gs_ros_interfaces__srv__PathPlanTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__PathPlanTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__PathPlanTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__PathPlanTarget_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `path`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__srv__PathPlanTarget_Response__init(gs_ros_interfaces__srv__PathPlanTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // plan_found
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    gs_ros_interfaces__srv__PathPlanTarget_Response__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path, 0)) {
    gs_ros_interfaces__srv__PathPlanTarget_Response__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Response__fini(gs_ros_interfaces__srv__PathPlanTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // plan_found
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // path
  rosidl_runtime_c__double__Sequence__fini(&msg->path);
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Response__are_equal(const gs_ros_interfaces__srv__PathPlanTarget_Response * lhs, const gs_ros_interfaces__srv__PathPlanTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // plan_found
  if (lhs->plan_found != rhs->plan_found) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Response__copy(
  const gs_ros_interfaces__srv__PathPlanTarget_Response * input,
  gs_ros_interfaces__srv__PathPlanTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // plan_found
  output->plan_found = input->plan_found;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__PathPlanTarget_Response *
gs_ros_interfaces__srv__PathPlanTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Response * msg = (gs_ros_interfaces__srv__PathPlanTarget_Response *)allocator.allocate(sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response));
  bool success = gs_ros_interfaces__srv__PathPlanTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Response__destroy(gs_ros_interfaces__srv__PathPlanTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__PathPlanTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__init(gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Response * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__PathPlanTarget_Response *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__PathPlanTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__PathPlanTarget_Response__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__fini(gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * array)
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
      gs_ros_interfaces__srv__PathPlanTarget_Response__fini(&array->data[i]);
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

gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence *
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * array = (gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__destroy(gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__are_equal(const gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * lhs, const gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__PathPlanTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence__copy(
  const gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * input,
  gs_ros_interfaces__srv__PathPlanTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__PathPlanTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__PathPlanTarget_Response * data =
      (gs_ros_interfaces__srv__PathPlanTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__PathPlanTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__PathPlanTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__PathPlanTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
