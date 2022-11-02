// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/DeadlineNotification.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'deadline_setting'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'sources'
#include "tilde_msg/msg/detail/source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__DeadlineNotification __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__DeadlineNotification __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeadlineNotification_
{
  using Type = DeadlineNotification_<ContainerAllocator>;

  explicit DeadlineNotification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    stamp(_init),
    deadline_setting(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  explicit DeadlineNotification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    topic_name(_alloc),
    stamp(_alloc, _init),
    deadline_setting(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _deadline_setting_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _deadline_setting_type deadline_setting;
  using _sources_type =
    std::vector<tilde_msg::msg::Source_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::Source_<ContainerAllocator>>>;
  _sources_type sources;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__deadline_setting(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->deadline_setting = _arg;
    return *this;
  }
  Type & set__sources(
    const std::vector<tilde_msg::msg::Source_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::Source_<ContainerAllocator>>> & _arg)
  {
    this->sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::DeadlineNotification_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::DeadlineNotification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::DeadlineNotification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::DeadlineNotification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__DeadlineNotification
    std::shared_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__DeadlineNotification
    std::shared_ptr<tilde_msg::msg::DeadlineNotification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeadlineNotification_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->deadline_setting != other.deadline_setting) {
      return false;
    }
    if (this->sources != other.sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeadlineNotification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeadlineNotification_

// alias to use template instance with default allocator
using DeadlineNotification =
  tilde_msg::msg::DeadlineNotification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__STRUCT_HPP_
