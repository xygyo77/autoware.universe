// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/MessageTrackingTag.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_HPP_

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
// Member 'output_info'
#include "../../../tilde_msg/msg/detail/pub_topic_time_info__struct.hpp"
// Member 'input_infos'
#include "../../../tilde_msg/msg/detail/sub_topic_time_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__MessageTrackingTag __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__MessageTrackingTag __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MessageTrackingTag_
{
  using Type = MessageTrackingTag_<ContainerAllocator>;

  explicit MessageTrackingTag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    output_info(_init)
  {
    (void)_init;
  }

  explicit MessageTrackingTag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    output_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _output_info_type =
    tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator>;
  _output_info_type output_info;
  using _input_infos_type =
    std::vector<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>>;
  _input_infos_type input_infos;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__output_info(
    const tilde_msg::msg::PubTopicTimeInfo_<ContainerAllocator> & _arg)
  {
    this->output_info = _arg;
    return *this;
  }
  Type & set__input_infos(
    const std::vector<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tilde_msg::msg::SubTopicTimeInfo_<ContainerAllocator>>> & _arg)
  {
    this->input_infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__MessageTrackingTag
    std::shared_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__MessageTrackingTag
    std::shared_ptr<tilde_msg::msg::MessageTrackingTag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageTrackingTag_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->output_info != other.output_info) {
      return false;
    }
    if (this->input_infos != other.input_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageTrackingTag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageTrackingTag_

// alias to use template instance with default allocator
using MessageTrackingTag =
  tilde_msg::msg::MessageTrackingTag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__STRUCT_HPP_
