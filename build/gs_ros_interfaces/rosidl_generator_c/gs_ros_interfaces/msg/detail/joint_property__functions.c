// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/joint_property__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"
// Member `force_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__JointProperty__init(gs_ros_interfaces__msg__JointProperty * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gs_ros_interfaces__msg__JointProperty__fini(msg);
    return false;
  }
  // kp
  // kv
  // stiffness
  // armature
  // damping
  // force_range
  if (!rosidl_runtime_c__float__Sequence__init(&msg->force_range, 0)) {
    gs_ros_interfaces__msg__JointProperty__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    gs_ros_interfaces__msg__JointProperty__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__JointProperty__fini(gs_ros_interfaces__msg__JointProperty * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // kp
  // kv
  // stiffness
  // armature
  // damping
  // force_range
  rosidl_runtime_c__float__Sequence__fini(&msg->force_range);
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
gs_ros_interfaces__msg__JointProperty__are_equal(const gs_ros_interfaces__msg__JointProperty * lhs, const gs_ros_interfaces__msg__JointProperty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kv
  if (lhs->kv != rhs->kv) {
    return false;
  }
  // stiffness
  if (lhs->stiffness != rhs->stiffness) {
    return false;
  }
  // armature
  if (lhs->armature != rhs->armature) {
    return false;
  }
  // damping
  if (lhs->damping != rhs->damping) {
    return false;
  }
  // force_range
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->force_range), &(rhs->force_range)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__JointProperty__copy(
  const gs_ros_interfaces__msg__JointProperty * input,
  gs_ros_interfaces__msg__JointProperty * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // kp
  output->kp = input->kp;
  // kv
  output->kv = input->kv;
  // stiffness
  output->stiffness = input->stiffness;
  // armature
  output->armature = input->armature;
  // damping
  output->damping = input->damping;
  // force_range
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->force_range), &(output->force_range)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__JointProperty *
gs_ros_interfaces__msg__JointProperty__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__JointProperty * msg = (gs_ros_interfaces__msg__JointProperty *)allocator.allocate(sizeof(gs_ros_interfaces__msg__JointProperty), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__JointProperty));
  bool success = gs_ros_interfaces__msg__JointProperty__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__JointProperty__destroy(gs_ros_interfaces__msg__JointProperty * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__JointProperty__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__JointProperty__Sequence__init(gs_ros_interfaces__msg__JointProperty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__JointProperty * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__JointProperty *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__JointProperty), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__JointProperty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__JointProperty__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__JointProperty__Sequence__fini(gs_ros_interfaces__msg__JointProperty__Sequence * array)
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
      gs_ros_interfaces__msg__JointProperty__fini(&array->data[i]);
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

gs_ros_interfaces__msg__JointProperty__Sequence *
gs_ros_interfaces__msg__JointProperty__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__JointProperty__Sequence * array = (gs_ros_interfaces__msg__JointProperty__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__JointProperty__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__JointProperty__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__JointProperty__Sequence__destroy(gs_ros_interfaces__msg__JointProperty__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__JointProperty__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__JointProperty__Sequence__are_equal(const gs_ros_interfaces__msg__JointProperty__Sequence * lhs, const gs_ros_interfaces__msg__JointProperty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__JointProperty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__JointProperty__Sequence__copy(
  const gs_ros_interfaces__msg__JointProperty__Sequence * input,
  gs_ros_interfaces__msg__JointProperty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__JointProperty);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__JointProperty * data =
      (gs_ros_interfaces__msg__JointProperty *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__JointProperty__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__JointProperty__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__JointProperty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
