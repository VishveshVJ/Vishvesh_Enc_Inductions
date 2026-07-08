// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/robot_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_states_topic`
// Member `joint_commands_topic`
// Member `joints_control_topic`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_properties`
#include "gs_ros_interfaces/msg/detail/joint_property__functions.h"

bool
gs_ros_interfaces__msg__RobotOptions__init(gs_ros_interfaces__msg__RobotOptions * msg)
{
  if (!msg) {
    return false;
  }
  // joint_states_topic
  if (!rosidl_runtime_c__String__init(&msg->joint_states_topic)) {
    gs_ros_interfaces__msg__RobotOptions__fini(msg);
    return false;
  }
  // joint_states_topic_frequency
  // joint_commands_topic
  if (!rosidl_runtime_c__String__init(&msg->joint_commands_topic)) {
    gs_ros_interfaces__msg__RobotOptions__fini(msg);
    return false;
  }
  // joint_commands_topic_frequency
  // joints_control_topic
  if (!rosidl_runtime_c__String__init(&msg->joints_control_topic)) {
    gs_ros_interfaces__msg__RobotOptions__fini(msg);
    return false;
  }
  // joints_control_topic_frequency
  // joint_properties
  if (!gs_ros_interfaces__msg__JointProperty__Sequence__init(&msg->joint_properties, 0)) {
    gs_ros_interfaces__msg__RobotOptions__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__RobotOptions__fini(gs_ros_interfaces__msg__RobotOptions * msg)
{
  if (!msg) {
    return;
  }
  // joint_states_topic
  rosidl_runtime_c__String__fini(&msg->joint_states_topic);
  // joint_states_topic_frequency
  // joint_commands_topic
  rosidl_runtime_c__String__fini(&msg->joint_commands_topic);
  // joint_commands_topic_frequency
  // joints_control_topic
  rosidl_runtime_c__String__fini(&msg->joints_control_topic);
  // joints_control_topic_frequency
  // joint_properties
  gs_ros_interfaces__msg__JointProperty__Sequence__fini(&msg->joint_properties);
}

bool
gs_ros_interfaces__msg__RobotOptions__are_equal(const gs_ros_interfaces__msg__RobotOptions * lhs, const gs_ros_interfaces__msg__RobotOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_states_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_states_topic), &(rhs->joint_states_topic)))
  {
    return false;
  }
  // joint_states_topic_frequency
  if (lhs->joint_states_topic_frequency != rhs->joint_states_topic_frequency) {
    return false;
  }
  // joint_commands_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_commands_topic), &(rhs->joint_commands_topic)))
  {
    return false;
  }
  // joint_commands_topic_frequency
  if (lhs->joint_commands_topic_frequency != rhs->joint_commands_topic_frequency) {
    return false;
  }
  // joints_control_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joints_control_topic), &(rhs->joints_control_topic)))
  {
    return false;
  }
  // joints_control_topic_frequency
  if (lhs->joints_control_topic_frequency != rhs->joints_control_topic_frequency) {
    return false;
  }
  // joint_properties
  if (!gs_ros_interfaces__msg__JointProperty__Sequence__are_equal(
      &(lhs->joint_properties), &(rhs->joint_properties)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__RobotOptions__copy(
  const gs_ros_interfaces__msg__RobotOptions * input,
  gs_ros_interfaces__msg__RobotOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_states_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_states_topic), &(output->joint_states_topic)))
  {
    return false;
  }
  // joint_states_topic_frequency
  output->joint_states_topic_frequency = input->joint_states_topic_frequency;
  // joint_commands_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_commands_topic), &(output->joint_commands_topic)))
  {
    return false;
  }
  // joint_commands_topic_frequency
  output->joint_commands_topic_frequency = input->joint_commands_topic_frequency;
  // joints_control_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->joints_control_topic), &(output->joints_control_topic)))
  {
    return false;
  }
  // joints_control_topic_frequency
  output->joints_control_topic_frequency = input->joints_control_topic_frequency;
  // joint_properties
  if (!gs_ros_interfaces__msg__JointProperty__Sequence__copy(
      &(input->joint_properties), &(output->joint_properties)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__RobotOptions *
gs_ros_interfaces__msg__RobotOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RobotOptions * msg = (gs_ros_interfaces__msg__RobotOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RobotOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__RobotOptions));
  bool success = gs_ros_interfaces__msg__RobotOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__RobotOptions__destroy(gs_ros_interfaces__msg__RobotOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__RobotOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__RobotOptions__Sequence__init(gs_ros_interfaces__msg__RobotOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RobotOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__RobotOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__RobotOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__RobotOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__RobotOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__RobotOptions__Sequence__fini(gs_ros_interfaces__msg__RobotOptions__Sequence * array)
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
      gs_ros_interfaces__msg__RobotOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__RobotOptions__Sequence *
gs_ros_interfaces__msg__RobotOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RobotOptions__Sequence * array = (gs_ros_interfaces__msg__RobotOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RobotOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__RobotOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__RobotOptions__Sequence__destroy(gs_ros_interfaces__msg__RobotOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__RobotOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__RobotOptions__Sequence__are_equal(const gs_ros_interfaces__msg__RobotOptions__Sequence * lhs, const gs_ros_interfaces__msg__RobotOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__RobotOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__RobotOptions__Sequence__copy(
  const gs_ros_interfaces__msg__RobotOptions__Sequence * input,
  gs_ros_interfaces__msg__RobotOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__RobotOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__RobotOptions * data =
      (gs_ros_interfaces__msg__RobotOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__RobotOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__RobotOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__RobotOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
