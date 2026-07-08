// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__GeneralSensorOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__GeneralSensorOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeneralSensorOptions_
{
  using Type = GeneralSensorOptions_<ContainerAllocator>;

  explicit GeneralSensorOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->sensor_type = "";
      this->delay = 0.0f;
      this->update_ground_truth_only = false;
      this->draw_debug = false;
    }
  }

  explicit GeneralSensorOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    sensor_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->sensor_type = "";
      this->delay = 0.0f;
      this->update_ground_truth_only = false;
      this->draw_debug = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _sensor_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_type_type sensor_type;
  using _delay_type =
    float;
  _delay_type delay;
  using _update_ground_truth_only_type =
    bool;
  _update_ground_truth_only_type update_ground_truth_only;
  using _draw_debug_type =
    bool;
  _draw_debug_type draw_debug;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }
  Type & set__delay(
    const float & _arg)
  {
    this->delay = _arg;
    return *this;
  }
  Type & set__update_ground_truth_only(
    const bool & _arg)
  {
    this->update_ground_truth_only = _arg;
    return *this;
  }
  Type & set__draw_debug(
    const bool & _arg)
  {
    this->draw_debug = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__GeneralSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__GeneralSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneralSensorOptions_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    if (this->update_ground_truth_only != other.update_ground_truth_only) {
      return false;
    }
    if (this->draw_debug != other.draw_debug) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneralSensorOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneralSensorOptions_

// alias to use template instance with default allocator
using GeneralSensorOptions =
  gs_ros_interfaces::msg::GeneralSensorOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__STRUCT_HPP_
