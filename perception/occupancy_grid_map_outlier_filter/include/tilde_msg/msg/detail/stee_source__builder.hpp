// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeSource.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_SOURCE__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeSource_first_subscription_steady_time
{
public:
  explicit Init_SteeSource_first_subscription_steady_time(::tilde_msg::msg::SteeSource & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeSource first_subscription_steady_time(::tilde_msg::msg::SteeSource::_first_subscription_steady_time_type arg)
  {
    msg_.first_subscription_steady_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeSource msg_;
};

class Init_SteeSource_stamp
{
public:
  explicit Init_SteeSource_stamp(::tilde_msg::msg::SteeSource & msg)
  : msg_(msg)
  {}
  Init_SteeSource_first_subscription_steady_time stamp(::tilde_msg::msg::SteeSource::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SteeSource_first_subscription_steady_time(msg_);
  }

private:
  ::tilde_msg::msg::SteeSource msg_;
};

class Init_SteeSource_topic
{
public:
  Init_SteeSource_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeSource_stamp topic(::tilde_msg::msg::SteeSource::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_SteeSource_stamp(msg_);
  }

private:
  ::tilde_msg::msg::SteeSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeSource>()
{
  return tilde_msg::msg::builder::Init_SteeSource_topic();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_SOURCE__BUILDER_HPP_
