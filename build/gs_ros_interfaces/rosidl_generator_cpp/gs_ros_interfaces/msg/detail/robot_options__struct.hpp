// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_properties'
#include "gs_ros_interfaces/msg/detail/joint_property__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__RobotOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__RobotOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotOptions_
{
  using Type = RobotOptions_<ContainerAllocator>;

  explicit RobotOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_states_topic = "";
      this->joint_states_topic_frequency = 0.0f;
      this->joint_commands_topic = "";
      this->joint_commands_topic_frequency = 0.0f;
      this->joints_control_topic = "";
      this->joints_control_topic_frequency = 0.0f;
    }
  }

  explicit RobotOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states_topic(_alloc),
    joint_commands_topic(_alloc),
    joints_control_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_states_topic = "";
      this->joint_states_topic_frequency = 0.0f;
      this->joint_commands_topic = "";
      this->joint_commands_topic_frequency = 0.0f;
      this->joints_control_topic = "";
      this->joints_control_topic_frequency = 0.0f;
    }
  }

  // field types and members
  using _joint_states_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_states_topic_type joint_states_topic;
  using _joint_states_topic_frequency_type =
    float;
  _joint_states_topic_frequency_type joint_states_topic_frequency;
  using _joint_commands_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_commands_topic_type joint_commands_topic;
  using _joint_commands_topic_frequency_type =
    float;
  _joint_commands_topic_frequency_type joint_commands_topic_frequency;
  using _joints_control_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joints_control_topic_type joints_control_topic;
  using _joints_control_topic_frequency_type =
    float;
  _joints_control_topic_frequency_type joints_control_topic_frequency;
  using _joint_properties_type =
    std::vector<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>>;
  _joint_properties_type joint_properties;

  // setters for named parameter idiom
  Type & set__joint_states_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_states_topic = _arg;
    return *this;
  }
  Type & set__joint_states_topic_frequency(
    const float & _arg)
  {
    this->joint_states_topic_frequency = _arg;
    return *this;
  }
  Type & set__joint_commands_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_commands_topic = _arg;
    return *this;
  }
  Type & set__joint_commands_topic_frequency(
    const float & _arg)
  {
    this->joint_commands_topic_frequency = _arg;
    return *this;
  }
  Type & set__joints_control_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joints_control_topic = _arg;
    return *this;
  }
  Type & set__joints_control_topic_frequency(
    const float & _arg)
  {
    this->joints_control_topic_frequency = _arg;
    return *this;
  }
  Type & set__joint_properties(
    const std::vector<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gs_ros_interfaces::msg::JointProperty_<ContainerAllocator>>> & _arg)
  {
    this->joint_properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__RobotOptions
    std::shared_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__RobotOptions
    std::shared_ptr<gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotOptions_ & other) const
  {
    if (this->joint_states_topic != other.joint_states_topic) {
      return false;
    }
    if (this->joint_states_topic_frequency != other.joint_states_topic_frequency) {
      return false;
    }
    if (this->joint_commands_topic != other.joint_commands_topic) {
      return false;
    }
    if (this->joint_commands_topic_frequency != other.joint_commands_topic_frequency) {
      return false;
    }
    if (this->joints_control_topic != other.joints_control_topic) {
      return false;
    }
    if (this->joints_control_topic_frequency != other.joints_control_topic_frequency) {
      return false;
    }
    if (this->joint_properties != other.joint_properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotOptions_

// alias to use template instance with default allocator
using RobotOptions =
  gs_ros_interfaces::msg::RobotOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__STRUCT_HPP_
