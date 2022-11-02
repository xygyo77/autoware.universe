// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/SteeSource.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
// Member 'first_subscription_steady_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__SteeSource __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__SteeSource __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeSource_
{
  using Type = SteeSource_<ContainerAllocator>;

  explicit SteeSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    first_subscription_steady_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  explicit SteeSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc),
    stamp(_alloc, _init),
    first_subscription_steady_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  // field types and members
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _first_subscription_steady_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _first_subscription_steady_time_type first_subscription_steady_time;

  // setters for named parameter idiom
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__first_subscription_steady_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->first_subscription_steady_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::SteeSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::SteeSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SteeSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SteeSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__SteeSource
    std::shared_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__SteeSource
    std::shared_ptr<tilde_msg::msg::SteeSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeSource_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->first_subscription_steady_time != other.first_subscription_steady_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeSource_

// alias to use template instance with default allocator
using SteeSource =
  tilde_msg::msg::SteeSource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_SOURCE__STRUCT_HPP_
