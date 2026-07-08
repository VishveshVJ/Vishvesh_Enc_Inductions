// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/camera_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gs_ros_interfaces/msg/detail/camera_options__struct.h"
#include "gs_ros_interfaces/msg/detail/camera_options__functions.h"
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

#include "gs_ros_interfaces/msg/detail/general_sensor_options__functions.h"  // options
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"  // rigid_options
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"  // ros_options
#include "rosidl_runtime_c/primitives_sequence.h"  // res
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // res
#include "rosidl_runtime_c/string.h"  // camera_types, model
#include "rosidl_runtime_c/string_functions.h"  // camera_types, model

// forward declare type support functions
size_t get_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions)();
size_t get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions)();
size_t get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions)();


using _CameraOptions__ros_msg_type = gs_ros_interfaces__msg__CameraOptions;

static bool _CameraOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraOptions__ros_msg_type * ros_message = static_cast<const _CameraOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->options, cdr))
    {
      return false;
    }
  }

  // Field name: ros_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ros_options, cdr))
    {
      return false;
    }
  }

  // Field name: rigid_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rigid_options, cdr))
    {
      return false;
    }
  }

  // Field name: camera_types
  {
    size_t size = ros_message->camera_types.size;
    auto array_ptr = ros_message->camera_types.data;
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

  // Field name: res
  {
    size_t size = ros_message->res.size;
    auto array_ptr = ros_message->res.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fov
  {
    cdr << ros_message->fov;
  }

  // Field name: near
  {
    cdr << ros_message->near;
  }

  // Field name: far
  {
    cdr << ros_message->far;
  }

  // Field name: aperture
  {
    cdr << ros_message->aperture;
  }

  // Field name: denoise
  {
    cdr << (ros_message->denoise ? true : false);
  }

  // Field name: spp
  {
    cdr << ros_message->spp;
  }

  // Field name: model
  {
    const rosidl_runtime_c__String * str = &ros_message->model;
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

  // Field name: focus_dist
  {
    cdr << ros_message->focus_dist;
  }

  // Field name: gui
  {
    cdr << (ros_message->gui ? true : false);
  }

  // Field name: add_noise
  {
    cdr << (ros_message->add_noise ? true : false);
  }

  // Field name: noise_mean
  {
    cdr << ros_message->noise_mean;
  }

  // Field name: noise_std
  {
    cdr << ros_message->noise_std;
  }

  return true;
}

static bool _CameraOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraOptions__ros_msg_type * ros_message = static_cast<_CameraOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, GeneralSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->options))
    {
      return false;
    }
  }

  // Field name: ros_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RosSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ros_options))
    {
      return false;
    }
  }

  // Field name: rigid_options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, RigidSensorOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rigid_options))
    {
      return false;
    }
  }

  // Field name: camera_types
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

    if (ros_message->camera_types.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->camera_types);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->camera_types, size)) {
      fprintf(stderr, "failed to create array for field 'camera_types'");
      return false;
    }
    auto array_ptr = ros_message->camera_types.data;
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
        fprintf(stderr, "failed to assign string into field 'camera_types'\n");
        return false;
      }
    }
  }

  // Field name: res
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

    if (ros_message->res.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->res);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->res, size)) {
      fprintf(stderr, "failed to create array for field 'res'");
      return false;
    }
    auto array_ptr = ros_message->res.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fov
  {
    cdr >> ros_message->fov;
  }

  // Field name: near
  {
    cdr >> ros_message->near;
  }

  // Field name: far
  {
    cdr >> ros_message->far;
  }

  // Field name: aperture
  {
    cdr >> ros_message->aperture;
  }

  // Field name: denoise
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->denoise = tmp ? true : false;
  }

  // Field name: spp
  {
    cdr >> ros_message->spp;
  }

  // Field name: model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model.data) {
      rosidl_runtime_c__String__init(&ros_message->model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model'\n");
      return false;
    }
  }

  // Field name: focus_dist
  {
    cdr >> ros_message->focus_dist;
  }

  // Field name: gui
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gui = tmp ? true : false;
  }

  // Field name: add_noise
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->add_noise = tmp ? true : false;
  }

  // Field name: noise_mean
  {
    cdr >> ros_message->noise_mean;
  }

  // Field name: noise_std
  {
    cdr >> ros_message->noise_std;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t get_serialized_size_gs_ros_interfaces__msg__CameraOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraOptions__ros_msg_type * ros_message = static_cast<const _CameraOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
    &(ros_message->options), current_alignment);
  // field.name ros_options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
    &(ros_message->ros_options), current_alignment);
  // field.name rigid_options

  current_alignment += get_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
    &(ros_message->rigid_options), current_alignment);
  // field.name camera_types
  {
    size_t array_size = ros_message->camera_types.size;
    auto array_ptr = ros_message->camera_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name res
  {
    size_t array_size = ros_message->res.size;
    auto array_ptr = ros_message->res.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fov
  {
    size_t item_size = sizeof(ros_message->fov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name near
  {
    size_t item_size = sizeof(ros_message->near);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name far
  {
    size_t item_size = sizeof(ros_message->far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aperture
  {
    size_t item_size = sizeof(ros_message->aperture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name denoise
  {
    size_t item_size = sizeof(ros_message->denoise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spp
  {
    size_t item_size = sizeof(ros_message->spp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model.size + 1);
  // field.name focus_dist
  {
    size_t item_size = sizeof(ros_message->focus_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gui
  {
    size_t item_size = sizeof(ros_message->gui);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name add_noise
  {
    size_t item_size = sizeof(ros_message->add_noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise_mean
  {
    size_t item_size = sizeof(ros_message->noise_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise_std
  {
    size_t item_size = sizeof(ros_message->noise_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gs_ros_interfaces__msg__CameraOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gs_ros_interfaces
size_t max_serialized_size_gs_ros_interfaces__msg__CameraOptions(
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

  // member: options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__GeneralSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ros_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__RosSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rigid_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gs_ros_interfaces__msg__RigidSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: camera_types
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
  // member: res
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fov
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: near
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aperture
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: denoise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: model
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
  // member: focus_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gui
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: add_noise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: noise_mean
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: noise_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces__msg__CameraOptions;
    is_plain =
      (
      offsetof(DataType, noise_std) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CameraOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gs_ros_interfaces__msg__CameraOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CameraOptions = {
  "gs_ros_interfaces::msg",
  "CameraOptions",
  _CameraOptions__cdr_serialize,
  _CameraOptions__cdr_deserialize,
  _CameraOptions__get_serialized_size,
  _CameraOptions__max_serialized_size
};

static rosidl_message_type_support_t _CameraOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gs_ros_interfaces, msg, CameraOptions)() {
  return &_CameraOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
