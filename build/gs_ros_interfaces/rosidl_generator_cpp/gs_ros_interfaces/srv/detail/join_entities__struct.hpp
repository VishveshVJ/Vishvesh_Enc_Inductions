// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:srv/JoinEntities.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__STRUCT_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Request __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Request __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JoinEntities_Request_
{
  using Type = JoinEntities_Request_<ContainerAllocator>;

  explicit JoinEntities_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_one = "";
      this->link_one = "";
      this->entity_one_type = "";
      this->entity_two = "";
      this->link_two = "";
      this->entity_two_type = "";
    }
  }

  explicit JoinEntities_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity_one(_alloc),
    link_one(_alloc),
    entity_one_type(_alloc),
    entity_two(_alloc),
    link_two(_alloc),
    entity_two_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_one = "";
      this->link_one = "";
      this->entity_one_type = "";
      this->entity_two = "";
      this->link_two = "";
      this->entity_two_type = "";
    }
  }

  // field types and members
  using _entity_one_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_one_type entity_one;
  using _link_one_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_one_type link_one;
  using _entity_one_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_one_type_type entity_one_type;
  using _entity_two_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_two_type entity_two;
  using _link_two_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_two_type link_two;
  using _entity_two_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_two_type_type entity_two_type;

  // setters for named parameter idiom
  Type & set__entity_one(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_one = _arg;
    return *this;
  }
  Type & set__link_one(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_one = _arg;
    return *this;
  }
  Type & set__entity_one_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_one_type = _arg;
    return *this;
  }
  Type & set__entity_two(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_two = _arg;
    return *this;
  }
  Type & set__link_two(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_two = _arg;
    return *this;
  }
  Type & set__entity_two_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_two_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Request
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Request
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoinEntities_Request_ & other) const
  {
    if (this->entity_one != other.entity_one) {
      return false;
    }
    if (this->link_one != other.link_one) {
      return false;
    }
    if (this->entity_one_type != other.entity_one_type) {
      return false;
    }
    if (this->entity_two != other.entity_two) {
      return false;
    }
    if (this->link_two != other.link_two) {
      return false;
    }
    if (this->entity_two_type != other.entity_two_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoinEntities_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoinEntities_Request_

// alias to use template instance with default allocator
using JoinEntities_Request =
  gs_ros_interfaces::srv::JoinEntities_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Response __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Response __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JoinEntities_Response_
{
  using Type = JoinEntities_Response_<ContainerAllocator>;

  explicit JoinEntities_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit JoinEntities_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Response
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__srv__JoinEntities_Response
    std::shared_ptr<gs_ros_interfaces::srv::JoinEntities_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoinEntities_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoinEntities_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoinEntities_Response_

// alias to use template instance with default allocator
using JoinEntities_Response =
  gs_ros_interfaces::srv::JoinEntities_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{

namespace srv
{

struct JoinEntities
{
  using Request = gs_ros_interfaces::srv::JoinEntities_Request;
  using Response = gs_ros_interfaces::srv::JoinEntities_Response;
};

}  // namespace srv

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__STRUCT_HPP_
