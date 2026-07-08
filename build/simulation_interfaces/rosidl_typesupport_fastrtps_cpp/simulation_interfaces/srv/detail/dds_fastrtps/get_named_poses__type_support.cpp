// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/get_named_poses__rosidl_typesupport_fastrtps_cpp.hpp"
#include "simulation_interfaces/srv/detail/get_named_poses__struct.hpp"

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
bool cdr_serialize(
  const simulation_interfaces::msg::TagsFilter &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  simulation_interfaces::msg::TagsFilter &);
size_t get_serialized_size(
  const simulation_interfaces::msg::TagsFilter &,
  size_t current_alignment);
size_t
max_serialized_size_TagsFilter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_serialize(
  const simulation_interfaces::srv::GetNamedPoses_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tags
  simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tags,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simulation_interfaces::srv::GetNamedPoses_Request & ros_message)
{
  // Member: tags
  simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tags);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
get_serialized_size(
  const simulation_interfaces::srv::GetNamedPoses_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tags

  current_alignment +=
    simulation_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tags, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
max_serialized_size_GetNamedPoses_Request(
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


  // Member: tags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        simulation_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_TagsFilter(
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
    using DataType = simulation_interfaces::srv::GetNamedPoses_Request;
    is_plain =
      (
      offsetof(DataType, tags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetNamedPoses_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const simulation_interfaces::srv::GetNamedPoses_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetNamedPoses_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<simulation_interfaces::srv::GetNamedPoses_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetNamedPoses_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const simulation_interfaces::srv::GetNamedPoses_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetNamedPoses_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetNamedPoses_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetNamedPoses_Request__callbacks = {
  "simulation_interfaces::srv",
  "GetNamedPoses_Request",
  _GetNamedPoses_Request__cdr_serialize,
  _GetNamedPoses_Request__cdr_deserialize,
  _GetNamedPoses_Request__get_serialized_size,
  _GetNamedPoses_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetNamedPoses_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetNamedPoses_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace simulation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::GetNamedPoses_Request>()
{
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, srv, GetNamedPoses_Request)() {
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace simulation_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const simulation_interfaces::msg::Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  simulation_interfaces::msg::Result &);
size_t get_serialized_size(
  const simulation_interfaces::msg::Result &,
  size_t current_alignment);
size_t
max_serialized_size_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace simulation_interfaces

namespace simulation_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const simulation_interfaces::msg::NamedPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  simulation_interfaces::msg::NamedPose &);
size_t get_serialized_size(
  const simulation_interfaces::msg::NamedPose &,
  size_t current_alignment);
size_t
max_serialized_size_NamedPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_serialize(
  const simulation_interfaces::srv::GetNamedPoses_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  // Member: poses
  {
    size_t size = ros_message.poses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.poses[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simulation_interfaces::srv::GetNamedPoses_Response & ros_message)
{
  // Member: result
  simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  // Member: poses
  {
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

    ros_message.poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      simulation_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.poses[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
get_serialized_size(
  const simulation_interfaces::srv::GetNamedPoses_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result

  current_alignment +=
    simulation_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);
  // Member: poses
  {
    size_t array_size = ros_message.poses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        simulation_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.poses[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simulation_interfaces
max_serialized_size_GetNamedPoses_Response(
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


  // Member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        simulation_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: poses
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
      size_t inner_size =
        simulation_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_NamedPose(
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
    using DataType = simulation_interfaces::srv::GetNamedPoses_Response;
    is_plain =
      (
      offsetof(DataType, poses) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetNamedPoses_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const simulation_interfaces::srv::GetNamedPoses_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetNamedPoses_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<simulation_interfaces::srv::GetNamedPoses_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetNamedPoses_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const simulation_interfaces::srv::GetNamedPoses_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetNamedPoses_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetNamedPoses_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetNamedPoses_Response__callbacks = {
  "simulation_interfaces::srv",
  "GetNamedPoses_Response",
  _GetNamedPoses_Response__cdr_serialize,
  _GetNamedPoses_Response__cdr_deserialize,
  _GetNamedPoses_Response__get_serialized_size,
  _GetNamedPoses_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetNamedPoses_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetNamedPoses_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace simulation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::GetNamedPoses_Response>()
{
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, srv, GetNamedPoses_Response)() {
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace simulation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetNamedPoses__callbacks = {
  "simulation_interfaces::srv",
  "GetNamedPoses",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, srv, GetNamedPoses_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, srv, GetNamedPoses_Response)(),
};

static rosidl_service_type_support_t _GetNamedPoses__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetNamedPoses__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace simulation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<simulation_interfaces::srv::GetNamedPoses>()
{
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simulation_interfaces, srv, GetNamedPoses)() {
  return &simulation_interfaces::srv::typesupport_fastrtps_cpp::_GetNamedPoses__handle;
}

#ifdef __cplusplus
}
#endif
