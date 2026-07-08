// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
// Member `topic`
// Member `qos_history`
// Member `qos_reliability`
// Member `qos_durability`
#include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__msg__RosSensorOptions__init(gs_ros_interfaces__msg__RosSensorOptions * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
    return false;
  }
  // frequency
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
    return false;
  }
  // qos_history
  if (!rosidl_runtime_c__String__init(&msg->qos_history)) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
    return false;
  }
  // qos_depth
  // qos_reliability
  if (!rosidl_runtime_c__String__init(&msg->qos_reliability)) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
    return false;
  }
  // qos_durability
  if (!rosidl_runtime_c__String__init(&msg->qos_durability)) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__RosSensorOptions__fini(gs_ros_interfaces__msg__RosSensorOptions * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // frequency
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // qos_history
  rosidl_runtime_c__String__fini(&msg->qos_history);
  // qos_depth
  // qos_reliability
  rosidl_runtime_c__String__fini(&msg->qos_reliability);
  // qos_durability
  rosidl_runtime_c__String__fini(&msg->qos_durability);
}

bool
gs_ros_interfaces__msg__RosSensorOptions__are_equal(const gs_ros_interfaces__msg__RosSensorOptions * lhs, const gs_ros_interfaces__msg__RosSensorOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // qos_history
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->qos_history), &(rhs->qos_history)))
  {
    return false;
  }
  // qos_depth
  if (lhs->qos_depth != rhs->qos_depth) {
    return false;
  }
  // qos_reliability
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->qos_reliability), &(rhs->qos_reliability)))
  {
    return false;
  }
  // qos_durability
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->qos_durability), &(rhs->qos_durability)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__RosSensorOptions__copy(
  const gs_ros_interfaces__msg__RosSensorOptions * input,
  gs_ros_interfaces__msg__RosSensorOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // qos_history
  if (!rosidl_runtime_c__String__copy(
      &(input->qos_history), &(output->qos_history)))
  {
    return false;
  }
  // qos_depth
  output->qos_depth = input->qos_depth;
  // qos_reliability
  if (!rosidl_runtime_c__String__copy(
      &(input->qos_reliability), &(output->qos_reliability)))
  {
    return false;
  }
  // qos_durability
  if (!rosidl_runtime_c__String__copy(
      &(input->qos_durability), &(output->qos_durability)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__RosSensorOptions *
gs_ros_interfaces__msg__RosSensorOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RosSensorOptions * msg = (gs_ros_interfaces__msg__RosSensorOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RosSensorOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__RosSensorOptions));
  bool success = gs_ros_interfaces__msg__RosSensorOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__RosSensorOptions__destroy(gs_ros_interfaces__msg__RosSensorOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__RosSensorOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__RosSensorOptions__Sequence__init(gs_ros_interfaces__msg__RosSensorOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RosSensorOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__RosSensorOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__RosSensorOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__RosSensorOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__RosSensorOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__RosSensorOptions__Sequence__fini(gs_ros_interfaces__msg__RosSensorOptions__Sequence * array)
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
      gs_ros_interfaces__msg__RosSensorOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__RosSensorOptions__Sequence *
gs_ros_interfaces__msg__RosSensorOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RosSensorOptions__Sequence * array = (gs_ros_interfaces__msg__RosSensorOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RosSensorOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__RosSensorOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__RosSensorOptions__Sequence__destroy(gs_ros_interfaces__msg__RosSensorOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__RosSensorOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__RosSensorOptions__Sequence__are_equal(const gs_ros_interfaces__msg__RosSensorOptions__Sequence * lhs, const gs_ros_interfaces__msg__RosSensorOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__RosSensorOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__RosSensorOptions__Sequence__copy(
  const gs_ros_interfaces__msg__RosSensorOptions__Sequence * input,
  gs_ros_interfaces__msg__RosSensorOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__RosSensorOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__RosSensorOptions * data =
      (gs_ros_interfaces__msg__RosSensorOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__RosSensorOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__RosSensorOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__RosSensorOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
