// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/DeadlineNotification.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/deadline_notification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_DeadlineNotification_sources
{
public:
  explicit Init_DeadlineNotification_sources(::tilde_msg::msg::DeadlineNotification & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::DeadlineNotification sources(::tilde_msg::msg::DeadlineNotification::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::DeadlineNotification msg_;
};

class Init_DeadlineNotification_deadline_setting
{
public:
  explicit Init_DeadlineNotification_deadline_setting(::tilde_msg::msg::DeadlineNotification & msg)
  : msg_(msg)
  {}
  Init_DeadlineNotification_sources deadline_setting(::tilde_msg::msg::DeadlineNotification::_deadline_setting_type arg)
  {
    msg_.deadline_setting = std::move(arg);
    return Init_DeadlineNotification_sources(msg_);
  }

private:
  ::tilde_msg::msg::DeadlineNotification msg_;
};

class Init_DeadlineNotification_stamp
{
public:
  explicit Init_DeadlineNotification_stamp(::tilde_msg::msg::DeadlineNotification & msg)
  : msg_(msg)
  {}
  Init_DeadlineNotification_deadline_setting stamp(::tilde_msg::msg::DeadlineNotification::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DeadlineNotification_deadline_setting(msg_);
  }

private:
  ::tilde_msg::msg::DeadlineNotification msg_;
};

class Init_DeadlineNotification_topic_name
{
public:
  explicit Init_DeadlineNotification_topic_name(::tilde_msg::msg::DeadlineNotification & msg)
  : msg_(msg)
  {}
  Init_DeadlineNotification_stamp topic_name(::tilde_msg::msg::DeadlineNotification::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_DeadlineNotification_stamp(msg_);
  }

private:
  ::tilde_msg::msg::DeadlineNotification msg_;
};

class Init_DeadlineNotification_header
{
public:
  Init_DeadlineNotification_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeadlineNotification_topic_name header(::tilde_msg::msg::DeadlineNotification::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeadlineNotification_topic_name(msg_);
  }

private:
  ::tilde_msg::msg::DeadlineNotification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::DeadlineNotification>()
{
  return tilde_msg::msg::builder::Init_DeadlineNotification_header();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__DEADLINE_NOTIFICATION__BUILDER_HPP_
