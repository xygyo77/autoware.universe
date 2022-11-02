// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/PubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pub_time'
// Member 'pub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__PubTopicTimeInfo __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__PubTopicTimeInfo __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PubTopicTimeInfo_
{
  using Type = PubTopicTimeInfo_<ContainerAllocator>;

  explicit PubTopicTimeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pub_time(_init),
    pub_time_steady(_init),
    header_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->node_fqn = "";
      this->seq = 0ll;
      this->has_header_stamp = false;
    }
  }

  explicit PubTopicTimeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    node_fqn(_alloc),
    pub_time(_alloc, _init),
    pub_time_steady(_alloc, _init),
    header_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->node_fqn = "";
      this->seq = 0ll;
      this->has_header_stamp = false;
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _node_fqn_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_fqn_type node_fqn;
  using _seq_type =
    int64_t;
  _seq_type seq;
  using _pub_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pub_time_type pub_time;
  using _pub_time_steady_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pub_time_steady_type pub_time_steady;
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
  Type & set__node_fqn(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_fqn = _arg;
    return *this;
  }
  Type & set__seq(
    const int64_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__pub_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pub_time = _arg;
    return *this;
  }
  Type & set__pub_time_steady(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pub_time_steady = _arg;
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
    tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__PubTopicTimeInfo
    std::shared_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__PubTopicTimeInfo
    std::shared_ptr<tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubTopicTimeInfo_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->node_fqn != other.node_fqn) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->pub_time != other.pub_time) {
      return false;
    }
    if (this->pub_time_steady != other.pub_time_steady) {
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
  bool operator!=(const PubTopicTimeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubTopicTimeInfo_

// alias to use template instance with default allocator
using PubTopicTimeInfo =
  tilde_msg::msg::PubTopicTimeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__PUB_TOPIC_TIME_INFO__STRUCT_HPP_
