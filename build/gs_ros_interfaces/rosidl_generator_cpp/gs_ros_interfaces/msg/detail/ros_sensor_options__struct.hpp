// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__RosSensorOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__RosSensorOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosSensorOptions_
{
  using Type = RosSensorOptions_<ContainerAllocator>;

  explicit RosSensorOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->frequency = 0.0f;
      this->topic = "";
      this->qos_history = "";
      this->qos_depth = 0l;
      this->qos_reliability = "";
      this->qos_durability = "";
    }
  }

  explicit RosSensorOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    topic(_alloc),
    qos_history(_alloc),
    qos_reliability(_alloc),
    qos_durability(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->frequency = 0.0f;
      this->topic = "";
      this->qos_history = "";
      this->qos_depth = 0l;
      this->qos_reliability = "";
      this->qos_durability = "";
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _frequency_type =
    float;
  _frequency_type frequency;
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _qos_history_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _qos_history_type qos_history;
  using _qos_depth_type =
    int32_t;
  _qos_depth_type qos_depth;
  using _qos_reliability_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _qos_reliability_type qos_reliability;
  using _qos_durability_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _qos_durability_type qos_durability;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__qos_history(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->qos_history = _arg;
    return *this;
  }
  Type & set__qos_depth(
    const int32_t & _arg)
  {
    this->qos_depth = _arg;
    return *this;
  }
  Type & set__qos_reliability(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->qos_reliability = _arg;
    return *this;
  }
  Type & set__qos_durability(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->qos_durability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__RosSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__RosSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSensorOptions_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    if (this->qos_history != other.qos_history) {
      return false;
    }
    if (this->qos_depth != other.qos_depth) {
      return false;
    }
    if (this->qos_reliability != other.qos_reliability) {
      return false;
    }
    if (this->qos_durability != other.qos_durability) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSensorOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSensorOptions_

// alias to use template instance with default allocator
using RosSensorOptions =
  gs_ros_interfaces::msg::RosSensorOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__STRUCT_HPP_
