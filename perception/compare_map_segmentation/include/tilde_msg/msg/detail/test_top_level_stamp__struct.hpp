// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tilde_msg:msg/TestTopLevelStamp.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_HPP_
#define TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__tilde_msg__msg__TestTopLevelStamp __attribute__((deprecated))
#else
# define DEPRECATED__tilde_msg__msg__TestTopLevelStamp __declspec(deprecated)
#endif

namespace tilde_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestTopLevelStamp_
{
  using Type = TestTopLevelStamp_<ContainerAllocator>;

  explicit TestTopLevelStamp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit TestTopLevelStamp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> *;
  using ConstRawPtr =
    const tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tilde_msg__msg__TestTopLevelStamp
    std::shared_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tilde_msg__msg__TestTopLevelStamp
    std::shared_ptr<tilde_msg::msg::TestTopLevelStamp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestTopLevelStamp_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestTopLevelStamp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestTopLevelStamp_

// alias to use template instance with default allocator
using TestTopLevelStamp =
  tilde_msg::msg::TestTopLevelStamp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__STRUCT_HPP_
