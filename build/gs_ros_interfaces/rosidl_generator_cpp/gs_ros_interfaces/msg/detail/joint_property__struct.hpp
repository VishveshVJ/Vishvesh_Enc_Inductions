// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__JointProperty __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__JointProperty __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointProperty_
{
  using Type = JointProperty_<ContainerAllocator>;

  explicit JointProperty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->kp = 0.0f;
      this->kv = 0.0f;
      this->stiffness = 0.0f;
      this->armature = 0.0f;
      this->damping = 0.0f;
      this->command = "";
    }
  }

  explicit JointProperty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->kp = 0.0f;
      this->kv = 0.0f;
      this->stiffness = 0.0f;
      this->armature = 0.0f;
      this->damping = 0.0f;
      this->command = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _kp_type =
    float;
  _kp_type kp;
  using _kv_type =
    float;
  _kv_type kv;
  using _stiffness_type =
    float;
  _stiffness_type stiffness;
  using _armature_type =
    float;
  _armature_type armature;
  using _damping_type =
    float;
  _damping_type damping;
  using _force_range_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _force_range_type force_range;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kv(
    const float & _arg)
  {
    this->kv = _arg;
    return *this;
  }
  Type & set__stiffness(
    const float & _arg)
  {
    this->stiffness = _arg;
    return *this;
  }
  Type & set__armature(
    const float & _arg)
  {
    this->armature = _arg;
    return *this;
  }
  Type & set__damping(
    const float & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__force_range(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->force_range = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__JointProperty
    std::shared_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__JointProperty
    std::shared_ptr<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointProperty_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kv != other.kv) {
      return false;
    }
    if (this->stiffness != other.stiffness) {
      return false;
    }
    if (this->armature != other.armature) {
      return false;
    }
    if (this->damping != other.damping) {
      return false;
    }
    if (this->force_range != other.force_range) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointProperty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointProperty_

// alias to use template instance with default allocator
using JointProperty =
  gs_ros_interfaces::msg::JointProperty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__STRUCT_HPP_
