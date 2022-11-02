// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/Source.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SOURCE__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_Source_is_overrun
{
public:
  explicit Init_Source_is_overrun(::tilde_msg::msg::Source & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::Source is_overrun(::tilde_msg::msg::Source::_is_overrun_type arg)
  {
    msg_.is_overrun = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::Source msg_;
};

class Init_Source_elapsed
{
public:
  explicit Init_Source_elapsed(::tilde_msg::msg::Source & msg)
  : msg_(msg)
  {}
  Init_Source_is_overrun elapsed(::tilde_msg::msg::Source::_elapsed_type arg)
  {
    msg_.elapsed = std::move(arg);
    return Init_Source_is_overrun(msg_);
  }

private:
  ::tilde_msg::msg::Source msg_;
};

class Init_Source_stamp
{
public:
  explicit Init_Source_stamp(::tilde_msg::msg::Source & msg)
  : msg_(msg)
  {}
  Init_Source_elapsed stamp(::tilde_msg::msg::Source::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Source_elapsed(msg_);
  }

private:
  ::tilde_msg::msg::Source msg_;
};

class Init_Source_topic
{
public:
  Init_Source_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Source_stamp topic(::tilde_msg::msg::Source::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_Source_stamp(msg_);
  }

private:
  ::tilde_msg::msg::Source msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::Source>()
{
  return tilde_msg::msg::builder::Init_Source_topic();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__SOURCE__BUILDER_HPP_
