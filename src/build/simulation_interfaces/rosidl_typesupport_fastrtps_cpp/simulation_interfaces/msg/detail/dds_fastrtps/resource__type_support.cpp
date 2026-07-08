// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:msg/Resource.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/resource__rosidl_typesupport_fastrtps_cpp.hpp"
#include "simulation_interfaces/msg/detail/resource__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace simulation_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_serialize(
  const simulation_interfaces::msg::Resource & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uri
  cdr << ros_message.uri;
  // Member: resource_string
  cdr << ros_message.resource_string;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simulation_interfaces::msg::Resource & ros_message)
{
  // Member: uri
  cdr >> ros_message.uri;

  // Member: resource_string
  cdr >> ros_message.resource_string;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
get_serialized_size(
  const simulation_interfaces::msg::Resource & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uri
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uri.size() + 1);
  // Member: resource_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.resource_string.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
max_serialized_size_Resource(
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


  // Member: uri
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

  // Member: resource_string
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simulation_interfaces::msg::Resource;
    is_plain =
      (
      offsetof(DataType, resource_string) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Resource__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const simulation_interfaces::msg::Resource *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Resource__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<simulation_interfaces::msg::Resource *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Resource__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const simulation_interfaces::msg::Resource *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Resource__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Resource(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Resource__callbacks = {
  "simulation_interfaces::msg",
  "Resource",
  _Resource__cdr_serialize,
  _Resource__cdr_deserialize,
  _Resource__get_serialized_size,
  _Resource__max_serialized_size
};

static rosidl_message_type_support_t _Resource__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Resource__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simulation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::msg::Resource>()
{
  return &simulation_interfaces::msg::typesupport_fastrtps_cpp::_Resource__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, msg, Resource)() {
  return &simulation_interfaces::msg::typesupport_fastrtps_cpp::_Resource__handle;
}

#ifdef __cplusplus
}
#endif
