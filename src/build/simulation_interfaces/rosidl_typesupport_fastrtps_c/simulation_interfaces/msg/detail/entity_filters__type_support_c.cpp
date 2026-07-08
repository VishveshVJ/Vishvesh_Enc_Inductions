// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/entity_filters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/msg/detail/entity_filters__struct.h"
#include "simulation_interfaces/msg/detail/entity_filters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // filter
#include "rosidl_runtime_c/string_functions.h"  // filter
#include "simulation_interfaces/msg/detail/bounds__functions.h"  // bounds
#include "simulation_interfaces/msg/detail/entity_category__functions.h"  // categories
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"  // tags

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__Bounds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Bounds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds)();
size_t get_serialized_size_simulation_interfaces__msg__EntityCategory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__EntityCategory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, EntityCategory)();
size_t get_serialized_size_simulation_interfaces__msg__TagsFilter(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__TagsFilter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter)();


using _EntityFilters__ros_msg_type = simulation_interfaces__msg__EntityFilters;

static bool _EntityFilters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EntityFilters__ros_msg_type * ros_message = static_cast<const _EntityFilters__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    const rosidl_runtime_c__String * str = &ros_message->filter;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: categories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, EntityCategory
      )()->data);
    size_t size = ros_message->categories.size;
    auto array_ptr = ros_message->categories.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tags, cdr))
    {
      return false;
    }
  }

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounds, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _EntityFilters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EntityFilters__ros_msg_type * ros_message = static_cast<_EntityFilters__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filter.data) {
      rosidl_runtime_c__String__init(&ros_message->filter);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filter,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filter'\n");
      return false;
    }
  }

  // Field name: categories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, EntityCategory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->categories.data) {
      simulation_interfaces__msg__EntityCategory__Sequence__fini(&ros_message->categories);
    }
    if (!simulation_interfaces__msg__EntityCategory__Sequence__init(&ros_message->categories, size)) {
      fprintf(stderr, "failed to create array for field 'categories'");
      return false;
    }
    auto array_ptr = ros_message->categories.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tags))
    {
      return false;
    }
  }

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Bounds
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounds))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__msg__EntityFilters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EntityFilters__ros_msg_type * ros_message = static_cast<const _EntityFilters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filter
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filter.size + 1);
  // field.name categories
  {
    size_t array_size = ros_message->categories.size;
    auto array_ptr = ros_message->categories.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_simulation_interfaces__msg__EntityCategory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tags

  current_alignment += get_serialized_size_simulation_interfaces__msg__TagsFilter(
    &(ros_message->tags), current_alignment);
  // field.name bounds

  current_alignment += get_serialized_size_simulation_interfaces__msg__Bounds(
    &(ros_message->bounds), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _EntityFilters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__msg__EntityFilters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__msg__EntityFilters(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: filter
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: categories
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__EntityCategory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__TagsFilter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bounds
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__Bounds(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simulation_interfaces__msg__EntityFilters;
    is_plain =
      (
      offsetof(DataType, bounds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EntityFilters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__msg__EntityFilters(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EntityFilters = {
  "simulation_interfaces::msg",
  "EntityFilters",
  _EntityFilters__cdr_serialize,
  _EntityFilters__cdr_deserialize,
  _EntityFilters__get_serialized_size,
  _EntityFilters__max_serialized_size
};

static rosidl_message_type_support_t _EntityFilters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EntityFilters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, EntityFilters)() {
  return &_EntityFilters__type_support;
}

#if defined(__cplusplus)
}
#endif
