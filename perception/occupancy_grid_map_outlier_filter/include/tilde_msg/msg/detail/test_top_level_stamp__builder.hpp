// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/TestTopLevelStamp.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/test_top_level_stamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_TestTopLevelStamp_stamp
{
public:
  Init_TestTopLevelStamp_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tilde_msg::msg::TestTopLevelStamp stamp(::tilde_msg::msg::TestTopLevelStamp::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::TestTopLevelStamp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::TestTopLevelStamp>()
{
  return tilde_msg::msg::builder::Init_TestTopLevelStamp_stamp();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__TEST_TOP_LEVEL_STAMP__BUILDER_HPP_
