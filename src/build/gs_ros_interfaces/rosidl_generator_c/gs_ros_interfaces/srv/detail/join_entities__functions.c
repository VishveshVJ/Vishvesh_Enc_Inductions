// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:srv/JoinEntities.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/srv/detail/join_entities__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `entity_one`
// Member `link_one`
// Member `entity_one_type`
// Member `entity_two`
// Member `link_two`
// Member `entity_two_type`
#include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__srv__JoinEntities_Request__init(gs_ros_interfaces__srv__JoinEntities_Request * msg)
{
  if (!msg) {
    return false;
  }
  // entity_one
  if (!rosidl_runtime_c__String__init(&msg->entity_one)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  // link_one
  if (!rosidl_runtime_c__String__init(&msg->link_one)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  // entity_one_type
  if (!rosidl_runtime_c__String__init(&msg->entity_one_type)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  // entity_two
  if (!rosidl_runtime_c__String__init(&msg->entity_two)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  // link_two
  if (!rosidl_runtime_c__String__init(&msg->link_two)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  // entity_two_type
  if (!rosidl_runtime_c__String__init(&msg->entity_two_type)) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__JoinEntities_Request__fini(gs_ros_interfaces__srv__JoinEntities_Request * msg)
{
  if (!msg) {
    return;
  }
  // entity_one
  rosidl_runtime_c__String__fini(&msg->entity_one);
  // link_one
  rosidl_runtime_c__String__fini(&msg->link_one);
  // entity_one_type
  rosidl_runtime_c__String__fini(&msg->entity_one_type);
  // entity_two
  rosidl_runtime_c__String__fini(&msg->entity_two);
  // link_two
  rosidl_runtime_c__String__fini(&msg->link_two);
  // entity_two_type
  rosidl_runtime_c__String__fini(&msg->entity_two_type);
}

bool
gs_ros_interfaces__srv__JoinEntities_Request__are_equal(const gs_ros_interfaces__srv__JoinEntities_Request * lhs, const gs_ros_interfaces__srv__JoinEntities_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entity_one
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_one), &(rhs->entity_one)))
  {
    return false;
  }
  // link_one
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_one), &(rhs->link_one)))
  {
    return false;
  }
  // entity_one_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_one_type), &(rhs->entity_one_type)))
  {
    return false;
  }
  // entity_two
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_two), &(rhs->entity_two)))
  {
    return false;
  }
  // link_two
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_two), &(rhs->link_two)))
  {
    return false;
  }
  // entity_two_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_two_type), &(rhs->entity_two_type)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__srv__JoinEntities_Request__copy(
  const gs_ros_interfaces__srv__JoinEntities_Request * input,
  gs_ros_interfaces__srv__JoinEntities_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // entity_one
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_one), &(output->entity_one)))
  {
    return false;
  }
  // link_one
  if (!rosidl_runtime_c__String__copy(
      &(input->link_one), &(output->link_one)))
  {
    return false;
  }
  // entity_one_type
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_one_type), &(output->entity_one_type)))
  {
    return false;
  }
  // entity_two
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_two), &(output->entity_two)))
  {
    return false;
  }
  // link_two
  if (!rosidl_runtime_c__String__copy(
      &(input->link_two), &(output->link_two)))
  {
    return false;
  }
  // entity_two_type
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_two_type), &(output->entity_two_type)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__JoinEntities_Request *
gs_ros_interfaces__srv__JoinEntities_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Request * msg = (gs_ros_interfaces__srv__JoinEntities_Request *)allocator.allocate(sizeof(gs_ros_interfaces__srv__JoinEntities_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__JoinEntities_Request));
  bool success = gs_ros_interfaces__srv__JoinEntities_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__JoinEntities_Request__destroy(gs_ros_interfaces__srv__JoinEntities_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__JoinEntities_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__init(gs_ros_interfaces__srv__JoinEntities_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Request * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__JoinEntities_Request *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__JoinEntities_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__JoinEntities_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__JoinEntities_Request__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__fini(gs_ros_interfaces__srv__JoinEntities_Request__Sequence * array)
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
      gs_ros_interfaces__srv__JoinEntities_Request__fini(&array->data[i]);
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

gs_ros_interfaces__srv__JoinEntities_Request__Sequence *
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Request__Sequence * array = (gs_ros_interfaces__srv__JoinEntities_Request__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__JoinEntities_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__JoinEntities_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__destroy(gs_ros_interfaces__srv__JoinEntities_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__JoinEntities_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__are_equal(const gs_ros_interfaces__srv__JoinEntities_Request__Sequence * lhs, const gs_ros_interfaces__srv__JoinEntities_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__JoinEntities_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__JoinEntities_Request__Sequence__copy(
  const gs_ros_interfaces__srv__JoinEntities_Request__Sequence * input,
  gs_ros_interfaces__srv__JoinEntities_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__JoinEntities_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__JoinEntities_Request * data =
      (gs_ros_interfaces__srv__JoinEntities_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__JoinEntities_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__JoinEntities_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__JoinEntities_Request__copy(
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

bool
gs_ros_interfaces__srv__JoinEntities_Response__init(gs_ros_interfaces__srv__JoinEntities_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    gs_ros_interfaces__srv__JoinEntities_Response__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__srv__JoinEntities_Response__fini(gs_ros_interfaces__srv__JoinEntities_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
gs_ros_interfaces__srv__JoinEntities_Response__are_equal(const gs_ros_interfaces__srv__JoinEntities_Response * lhs, const gs_ros_interfaces__srv__JoinEntities_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
gs_ros_interfaces__srv__JoinEntities_Response__copy(
  const gs_ros_interfaces__srv__JoinEntities_Response * input,
  gs_ros_interfaces__srv__JoinEntities_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__srv__JoinEntities_Response *
gs_ros_interfaces__srv__JoinEntities_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Response * msg = (gs_ros_interfaces__srv__JoinEntities_Response *)allocator.allocate(sizeof(gs_ros_interfaces__srv__JoinEntities_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__srv__JoinEntities_Response));
  bool success = gs_ros_interfaces__srv__JoinEntities_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__srv__JoinEntities_Response__destroy(gs_ros_interfaces__srv__JoinEntities_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__srv__JoinEntities_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__init(gs_ros_interfaces__srv__JoinEntities_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Response * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__srv__JoinEntities_Response *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__srv__JoinEntities_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__srv__JoinEntities_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__srv__JoinEntities_Response__fini(&data[i - 1]);
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
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__fini(gs_ros_interfaces__srv__JoinEntities_Response__Sequence * array)
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
      gs_ros_interfaces__srv__JoinEntities_Response__fini(&array->data[i]);
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

gs_ros_interfaces__srv__JoinEntities_Response__Sequence *
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__srv__JoinEntities_Response__Sequence * array = (gs_ros_interfaces__srv__JoinEntities_Response__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__srv__JoinEntities_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__srv__JoinEntities_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__destroy(gs_ros_interfaces__srv__JoinEntities_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__srv__JoinEntities_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__are_equal(const gs_ros_interfaces__srv__JoinEntities_Response__Sequence * lhs, const gs_ros_interfaces__srv__JoinEntities_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__srv__JoinEntities_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__srv__JoinEntities_Response__Sequence__copy(
  const gs_ros_interfaces__srv__JoinEntities_Response__Sequence * input,
  gs_ros_interfaces__srv__JoinEntities_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__srv__JoinEntities_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__srv__JoinEntities_Response * data =
      (gs_ros_interfaces__srv__JoinEntities_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__srv__JoinEntities_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__srv__JoinEntities_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__srv__JoinEntities_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
