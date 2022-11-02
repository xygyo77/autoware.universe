// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/SubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sub_time'
// Member 'sub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__SubTopicTimeInfo __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__SubTopicTimeInfo __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubTopicTimeInfo_
{
  using Type = SubTopicTimeInfo_<ContainerAllocator>;

  explicit SubTopicTimeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sub_time(_init),
    sub_time_steady(_init),
    header_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->has_header_stamp = false;
    }
  }

  explicit SubTopicTimeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    sub_time(_alloc, _init),
    sub_time_steady(_alloc, _init),
    header_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->has_header_stamp = false;
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _sub_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _sub_time_type sub_time;
  using _sub_time_steady_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _sub_time_steady_type sub_time_steady;
  using _has_header_stamp_type =
    bool;
  _has_header_stamp_type has_header_stamp;
  using _header_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _header_stamp_type header_stamp;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__sub_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->sub_time = _arg;
    return *this;
  }
  Type & set__sub_time_steady(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->sub_time_steady = _arg;
    return *this;
  }
  Type & set__has_header_stamp(
    const bool & _arg)
  {
    this->has_header_stamp = _arg;
    return *this;
  }
  Type & set__header_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->header_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__SubTopicTimeInfo
    std::shared_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__SubTopicTimeInfo
    std::shared_ptr<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubTopicTimeInfo_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->sub_time != other.sub_time) {
      return false;
    }
    if (this->sub_time_steady != other.sub_time_steady) {
      return false;
    }
    if (this->has_header_stamp != other.has_header_stamp) {
      return false;
    }
    if (this->header_stamp != other.header_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubTopicTimeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubTopicTimeInfo_

// alias to use template instance with default allocator
using SubTopicTimeInfo =
  tilde_msg::msg::SubTopicTimeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__STRUCT_HPP_
