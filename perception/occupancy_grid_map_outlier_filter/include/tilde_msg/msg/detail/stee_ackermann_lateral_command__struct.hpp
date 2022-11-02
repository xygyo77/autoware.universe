// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/SteeAckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'body'
#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
// Member 'sources'
#include "tilde_msg/msg/detail/stee_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__SteeAckermannLateralCommand __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__SteeAckermannLateralCommand __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeAckermannLateralCommand_
{
  using Type = SteeAckermannLateralCommand_<ContainerAllocator>;

  explicit SteeAckermannLateralCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : body(_init)
  {
    (void)_init;
  }

  explicit SteeAckermannLateralCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : body(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _body_type =
    autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>;
  _body_type body;
  using _sources_type =
    std::vector<tilde_msg::msg::SteeSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::SteeSource_<ContainerAllocator>>>;
  _sources_type sources;

  // setters for named parameter idiom
  Type & set__body(
    const autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> & _arg)
  {
    this->body = _arg;
    return *this;
  }
  Type & set__sources(
    const std::vector<tilde_msg::msg::SteeSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::SteeSource_<ContainerAllocator>>> & _arg)
  {
    this->sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__SteeAckermannLateralCommand
    std::shared_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__SteeAckermannLateralCommand
    std::shared_ptr<tilde_msg::msg::SteeAckermannLateralCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeAckermannLateralCommand_ & other) const
  {
    if (this->body != other.body) {
      return false;
    }
    if (this->sources != other.sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeAckermannLateralCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeAckermannLateralCommand_

// alias to use template instance with default allocator
using SteeAckermannLateralCommand =
  tilde_msg::msg::SteeAckermannLateralCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_
