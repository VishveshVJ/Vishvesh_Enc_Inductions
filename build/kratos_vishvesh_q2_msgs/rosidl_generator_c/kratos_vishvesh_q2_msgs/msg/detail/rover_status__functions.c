// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice
#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__init(kratos_vishvesh_q2_msgs__msg__RoverStatus * msg)
{
  if (!msg) {
    return false;
  }
  // battery_percentage
  // velocity
  // emergency_stop
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(msg);
    return false;
  }
  return true;
}

void
kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(kratos_vishvesh_q2_msgs__msg__RoverStatus * msg)
{
  if (!msg) {
    return;
  }
  // battery_percentage
  // velocity
  // emergency_stop
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
}

bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__are_equal(const kratos_vishvesh_q2_msgs__msg__RoverStatus * lhs, const kratos_vishvesh_q2_msgs__msg__RoverStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__copy(
  const kratos_vishvesh_q2_msgs__msg__RoverStatus * input,
  kratos_vishvesh_q2_msgs__msg__RoverStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // velocity
  output->velocity = input->velocity;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

kratos_vishvesh_q2_msgs__msg__RoverStatus *
kratos_vishvesh_q2_msgs__msg__RoverStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kratos_vishvesh_q2_msgs__msg__RoverStatus * msg = (kratos_vishvesh_q2_msgs__msg__RoverStatus *)allocator.allocate(sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus));
  bool success = kratos_vishvesh_q2_msgs__msg__RoverStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kratos_vishvesh_q2_msgs__msg__RoverStatus__destroy(kratos_vishvesh_q2_msgs__msg__RoverStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__init(kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kratos_vishvesh_q2_msgs__msg__RoverStatus * data = NULL;

  if (size) {
    data = (kratos_vishvesh_q2_msgs__msg__RoverStatus *)allocator.zero_allocate(size, sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kratos_vishvesh_q2_msgs__msg__RoverStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(&data[i - 1]);
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
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__fini(kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * array)
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
      kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(&array->data[i]);
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

kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence *
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * array = (kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence *)allocator.allocate(sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__destroy(kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__are_equal(const kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * lhs, const kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kratos_vishvesh_q2_msgs__msg__RoverStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence__copy(
  const kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * input,
  kratos_vishvesh_q2_msgs__msg__RoverStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kratos_vishvesh_q2_msgs__msg__RoverStatus * data =
      (kratos_vishvesh_q2_msgs__msg__RoverStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kratos_vishvesh_q2_msgs__msg__RoverStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kratos_vishvesh_q2_msgs__msg__RoverStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
