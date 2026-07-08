// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/get_available_worlds__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/srv/detail/get_available_worlds__struct.h"
#include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"
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

#include "rosidl_runtime_c/string.h"  // additional_sources
#include "rosidl_runtime_c/string_functions.h"  // additional_sources
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"  // filter

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__TagsFilter(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__TagsFilter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter)();


using _GetAvailableWorlds_Request__ros_msg_type = simulation_interfaces__srv__GetAvailableWorlds_Request;

static bool _GetAvailableWorlds_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAvailableWorlds_Request__ros_msg_type * ros_message = static_cast<const _GetAvailableWorlds_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: additional_sources
  {
    size_t size = ros_message->additional_sources.size;
    auto array_ptr = ros_message->additional_sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: filter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->filter, cdr))
    {
      return false;
    }
  }

  // Field name: offline_only
  {
    cdr << (ros_message->offline_only ? true : false);
  }

  // Field name: continue_on_error
  {
    cdr << (ros_message->continue_on_error ? true : false);
  }

  return true;
}

static bool _GetAvailableWorlds_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAvailableWorlds_Request__ros_msg_type * ros_message = static_cast<_GetAvailableWorlds_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: additional_sources
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

    if (ros_message->additional_sources.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->additional_sources);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->additional_sources, size)) {
      fprintf(stderr, "failed to create array for field 'additional_sources'");
      return false;
    }
    auto array_ptr = ros_message->additional_sources.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'additional_sources'\n");
        return false;
      }
    }
  }

  // Field name: filter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, TagsFilter
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->filter))
    {
      return false;
    }
  }

  // Field name: offline_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->offline_only = tmp ? true : false;
  }

  // Field name: continue_on_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->continue_on_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAvailableWorlds_Request__ros_msg_type * ros_message = static_cast<const _GetAvailableWorlds_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name additional_sources
  {
    size_t array_size = ros_message->additional_sources.size;
    auto array_ptr = ros_message->additional_sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name filter

  current_alignment += get_serialized_size_simulation_interfaces__msg__TagsFilter(
    &(ros_message->filter), current_alignment);
  // field.name offline_only
  {
    size_t item_size = sizeof(ros_message->offline_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name continue_on_error
  {
    size_t item_size = sizeof(ros_message->continue_on_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableWorlds_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Request(
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

  // member: additional_sources
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: filter
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
  // member: offline_only
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: continue_on_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simulation_interfaces__srv__GetAvailableWorlds_Request;
    is_plain =
      (
      offsetof(DataType, continue_on_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAvailableWorlds_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAvailableWorlds_Request = {
  "simulation_interfaces::srv",
  "GetAvailableWorlds_Request",
  _GetAvailableWorlds_Request__cdr_serialize,
  _GetAvailableWorlds_Request__cdr_deserialize,
  _GetAvailableWorlds_Request__get_serialized_size,
  _GetAvailableWorlds_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableWorlds_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAvailableWorlds_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, GetAvailableWorlds_Request)() {
  return &_GetAvailableWorlds_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__struct.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "simulation_interfaces/msg/detail/result__functions.h"  // result
#include "simulation_interfaces/msg/detail/world_resource__functions.h"  // worlds

// forward declare type support functions
size_t get_serialized_size_simulation_interfaces__msg__Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result)();
size_t get_serialized_size_simulation_interfaces__msg__WorldResource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_simulation_interfaces__msg__WorldResource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource)();


using _GetAvailableWorlds_Response__ros_msg_type = simulation_interfaces__srv__GetAvailableWorlds_Response;

static bool _GetAvailableWorlds_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAvailableWorlds_Response__ros_msg_type * ros_message = static_cast<const _GetAvailableWorlds_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  // Field name: worlds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource
      )()->data);
    size_t size = ros_message->worlds.size;
    auto array_ptr = ros_message->worlds.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetAvailableWorlds_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAvailableWorlds_Response__ros_msg_type * ros_message = static_cast<_GetAvailableWorlds_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  // Field name: worlds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, WorldResource
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

    if (ros_message->worlds.data) {
      simulation_interfaces__msg__WorldResource__Sequence__fini(&ros_message->worlds);
    }
    if (!simulation_interfaces__msg__WorldResource__Sequence__init(&ros_message->worlds, size)) {
      fprintf(stderr, "failed to create array for field 'worlds'");
      return false;
    }
    auto array_ptr = ros_message->worlds.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAvailableWorlds_Response__ros_msg_type * ros_message = static_cast<const _GetAvailableWorlds_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_simulation_interfaces__msg__Result(
    &(ros_message->result), current_alignment);
  // field.name worlds
  {
    size_t array_size = ros_message->worlds.size;
    auto array_ptr = ros_message->worlds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_simulation_interfaces__msg__WorldResource(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableWorlds_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Response(
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

  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_simulation_interfaces__msg__Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: worlds
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
        max_serialized_size_simulation_interfaces__msg__WorldResource(
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
    using DataType = simulation_interfaces__srv__GetAvailableWorlds_Response;
    is_plain =
      (
      offsetof(DataType, worlds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAvailableWorlds_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simulation_interfaces__srv__GetAvailableWorlds_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAvailableWorlds_Response = {
  "simulation_interfaces::srv",
  "GetAvailableWorlds_Response",
  _GetAvailableWorlds_Response__cdr_serialize,
  _GetAvailableWorlds_Response__cdr_deserialize,
  _GetAvailableWorlds_Response__get_serialized_size,
  _GetAvailableWorlds_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableWorlds_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAvailableWorlds_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, GetAvailableWorlds_Response)() {
  return &_GetAvailableWorlds_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/srv/get_available_worlds.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAvailableWorlds__callbacks = {
  "simulation_interfaces::srv",
  "GetAvailableWorlds",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, GetAvailableWorlds_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, GetAvailableWorlds_Response)(),
};

static rosidl_service_type_support_t GetAvailableWorlds__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAvailableWorlds__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, srv, GetAvailableWorlds)() {
  return &GetAvailableWorlds__handle;
}

#if defined(__cplusplus)
}
#endif
