// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/ContactForce.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/contact_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `contact_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
gs_ros_interfaces__msg__ContactForce__init(gs_ros_interfaces__msg__ContactForce * msg)
{
  if (!msg) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    gs_ros_interfaces__msg__ContactForce__fini(msg);
    return false;
  }
  // contact_force
  if (!geometry_msgs__msg__Vector3__init(&msg->contact_force)) {
    gs_ros_interfaces__msg__ContactForce__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__ContactForce__fini(gs_ros_interfaces__msg__ContactForce * msg)
{
  if (!msg) {
    return;
  }
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // contact_force
  geometry_msgs__msg__Vector3__fini(&msg->contact_force);
}

bool
gs_ros_interfaces__msg__ContactForce__are_equal(const gs_ros_interfaces__msg__ContactForce * lhs, const gs_ros_interfaces__msg__ContactForce * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_name), &(rhs->link_name)))
  {
    return false;
  }
  // contact_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->contact_force), &(rhs->contact_force)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__ContactForce__copy(
  const gs_ros_interfaces__msg__ContactForce * input,
  gs_ros_interfaces__msg__ContactForce * output)
{
  if (!input || !output) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link_name), &(output->link_name)))
  {
    return false;
  }
  // contact_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->contact_force), &(output->contact_force)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__ContactForce *
gs_ros_interfaces__msg__ContactForce__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForce * msg = (gs_ros_interfaces__msg__ContactForce *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ContactForce), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__ContactForce));
  bool success = gs_ros_interfaces__msg__ContactForce__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__ContactForce__destroy(gs_ros_interfaces__msg__ContactForce * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__ContactForce__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__ContactForce__Sequence__init(gs_ros_interfaces__msg__ContactForce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForce * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__ContactForce *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__ContactForce), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__ContactForce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__ContactForce__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__ContactForce__Sequence__fini(gs_ros_interfaces__msg__ContactForce__Sequence * array)
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
      gs_ros_interfaces__msg__ContactForce__fini(&array->data[i]);
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

gs_ros_interfaces__msg__ContactForce__Sequence *
gs_ros_interfaces__msg__ContactForce__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForce__Sequence * array = (gs_ros_interfaces__msg__ContactForce__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ContactForce__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__ContactForce__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__ContactForce__Sequence__destroy(gs_ros_interfaces__msg__ContactForce__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__ContactForce__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__ContactForce__Sequence__are_equal(const gs_ros_interfaces__msg__ContactForce__Sequence * lhs, const gs_ros_interfaces__msg__ContactForce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__ContactForce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__ContactForce__Sequence__copy(
  const gs_ros_interfaces__msg__ContactForce__Sequence * input,
  gs_ros_interfaces__msg__ContactForce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__ContactForce);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__ContactForce * data =
      (gs_ros_interfaces__msg__ContactForce *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__ContactForce__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__ContactForce__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__ContactForce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
