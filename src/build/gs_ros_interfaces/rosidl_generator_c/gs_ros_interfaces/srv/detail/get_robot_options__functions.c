// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:srv/GetRobotOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/srv/detail/get_robot_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `entity`
#include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__srv__GetRobotOptions_Request__init(gs_ros_interfaces__srv__GetRobotOptions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__init(&msg->entity)) {
    gs_ros_interfaces__srv__GetRobotOptions_Request__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Request__fini(gs_ros_interfaces__srv__GetRobotOptions_Request * msg)
{
  if (!msg) {
    return;
  }
  // entity
  rosidl_runtime_c__String__fini(&msg->entity);
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Request__are_equal(const gs_ros_interfaces__srv__GetRobotOptions_Request * lhs, const gs_ros_interfaces__srv__GetRobotOptions_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity), &(rhs->entity)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Request__copy(
  const gs_ros_interfaces__srv__GetRobotOptions_Request * input,
  gs_ros_interfaces__srv__GetRobotOptions_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__copy(
      &(input->entity), &(output->entity)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__GetRobotOptions_Request *
gs_ros_interfaces__srv__GetRobotOptions_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Request * msg = (gs_ros_interfaces__srv__GetRobotOptions_Request *)allocator.allocate(sizeof(gs_ros_interfaces__srv__GetRobotOptions_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__GetRobotOptions_Request));
  bool success = gs_ros_interfaces__srv__GetRobotOptions_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Request__destroy(gs_ros_interfaces__srv__GetRobotOptions_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__GetRobotOptions_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__init(gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Request * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__GetRobotOptions_Request *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__GetRobotOptions_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__GetRobotOptions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__GetRobotOptions_Request__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__fini(gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * array)
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
      gs_ros_interfaces__srv__GetRobotOptions_Request__fini(&array->data[i]);
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

gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence *
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * array = (gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__destroy(gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__are_equal(const gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * lhs, const gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__GetRobotOptions_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence__copy(
  const gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * input,
  gs_ros_interfaces__srv__GetRobotOptions_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__GetRobotOptions_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__GetRobotOptions_Request * data =
      (gs_ros_interfaces__srv__GetRobotOptions_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__GetRobotOptions_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__GetRobotOptions_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__GetRobotOptions_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `options`
#include "gs_ros_interfaces/msg/detail/robot_options__functions.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__functions.h"

bool
gs_ros_interfaces__srv__GetRobotOptions_Response__init(gs_ros_interfaces__srv__GetRobotOptions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__RobotOptions__init(&msg->options)) {
    gs_ros_interfaces__srv__GetRobotOptions_Response__fini(msg);
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__init(&msg->result)) {
    gs_ros_interfaces__srv__GetRobotOptions_Response__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Response__fini(gs_ros_interfaces__srv__GetRobotOptions_Response * msg)
{
  if (!msg) {
    return;
  }
  // options
  gs_ros_interfaces__msg__RobotOptions__fini(&msg->options);
  // result
  simulation_interfaces__msg__Result__fini(&msg->result);
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Response__are_equal(const gs_ros_interfaces__srv__GetRobotOptions_Response * lhs, const gs_ros_interfaces__srv__GetRobotOptions_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__RobotOptions__are_equal(
      &(lhs->options), &(rhs->options)))
  {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Response__copy(
  const gs_ros_interfaces__srv__GetRobotOptions_Response * input,
  gs_ros_interfaces__srv__GetRobotOptions_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__RobotOptions__copy(
      &(input->options), &(output->options)))
  {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__GetRobotOptions_Response *
gs_ros_interfaces__srv__GetRobotOptions_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Response * msg = (gs_ros_interfaces__srv__GetRobotOptions_Response *)allocator.allocate(sizeof(gs_ros_interfaces__srv__GetRobotOptions_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__GetRobotOptions_Response));
  bool success = gs_ros_interfaces__srv__GetRobotOptions_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Response__destroy(gs_ros_interfaces__srv__GetRobotOptions_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__GetRobotOptions_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__init(gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Response * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__GetRobotOptions_Response *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__GetRobotOptions_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__GetRobotOptions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__GetRobotOptions_Response__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__fini(gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * array)
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
      gs_ros_interfaces__srv__GetRobotOptions_Response__fini(&array->data[i]);
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

gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence *
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * array = (gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__destroy(gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__are_equal(const gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * lhs, const gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__GetRobotOptions_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence__copy(
  const gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * input,
  gs_ros_interfaces__srv__GetRobotOptions_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__GetRobotOptions_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__GetRobotOptions_Response * data =
      (gs_ros_interfaces__srv__GetRobotOptions_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__GetRobotOptions_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__GetRobotOptions_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__GetRobotOptions_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
