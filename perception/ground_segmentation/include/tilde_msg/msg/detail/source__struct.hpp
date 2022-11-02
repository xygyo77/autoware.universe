// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/Source.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'elapsed'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__Source __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__Source __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Source_
{
  using Type = Source_<ContainerAllocator>;

  explicit Source_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    elapsed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->is_overrun = false;
    }
  }

  explicit Source_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc),
    stamp(_alloc, _init),
    elapsed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->is_overrun = false;
    }
  }

  // field types and members
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _elapsed_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _elapsed_type elapsed;
  using _is_overrun_type =
    bool;
  _is_overrun_type is_overrun;

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
  Type & set__elapsed(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->elapsed = _arg;
    return *this;
  }
  Type & set__is_overrun(
    const bool & _arg)
  {
    this->is_overrun = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::Source_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::Source_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::Source_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::Source_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::Source_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::Source_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::Source_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::Source_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::Source_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::Source_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__Source
    std::shared_ptr<tilde_msg::msg::Source_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__Source
    std::shared_ptr<tilde_msg::msg::Source_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Source_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->elapsed != other.elapsed) {
      return false;
    }
    if (this->is_overrun != other.is_overrun) {
      return false;
    }
    return true;
  }
  bool operator!=(const Source_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Source_

// alias to use template instance with default allocator
using Source =
  tilde_msg::msg::Source_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__SOURCE__STRUCT_HPP_
