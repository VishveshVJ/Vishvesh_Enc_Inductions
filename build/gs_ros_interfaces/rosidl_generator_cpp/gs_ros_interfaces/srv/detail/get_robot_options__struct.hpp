// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:srv/GetRobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Request __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Request __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotOptions_Request_
{
  using Type = GetRobotOptions_Request_<ContainerAllocator>;

  explicit GetRobotOptions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  explicit GetRobotOptions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  // field types and members
  using _entity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_type entity;

  // setters for named parameter idiom
  Type & set__entity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Request
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Request
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotOptions_Request_ & other) const
  {
    if (this->entity != other.entity) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotOptions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotOptions_Request_

// alias to use template instance with default allocator
using GetRobotOptions_Request =
  gs_ros_interfaces::srv::GetRobotOptions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces


// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/robot_options__struct.hpp"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Response __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Response __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotOptions_Response_
{
  using Type = GetRobotOptions_Response_<ContainerAllocator>;

  explicit GetRobotOptions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    result(_init)
  {
    (void)_init;
  }

  explicit GetRobotOptions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _options_type =
    gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator>;
  _options_type options;
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__options(
    const gs_ros_interfaces::msg::RobotOptions_<ContainerAllocator> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Response
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__GetRobotOptions_Response
    std::shared_ptr<gs_ros_interfaces::srv::GetRobotOptions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotOptions_Response_ & other) const
  {
    if (this->options != other.options) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotOptions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotOptions_Response_

// alias to use template instance with default allocator
using GetRobotOptions_Response =
  gs_ros_interfaces::srv::GetRobotOptions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{

namespace srv
{

struct GetRobotOptions
{
  using Request = gs_ros_interfaces::srv::GetRobotOptions_Request;
  using Response = gs_ros_interfaces::srv::GetRobotOptions_Response;
};

}  // namespace srv

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_ROBOT_OPTIONS__STRUCT_HPP_
