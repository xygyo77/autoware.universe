// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeLongitudinalCommand.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_LONGITUDINAL_COMMAND__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_LONGITUDINAL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_longitudinal_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeLongitudinalCommand_sources
{
public:
  explicit Init_SteeLongitudinalCommand_sources(::tilde_msg::msg::SteeLongitudinalCommand & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeLongitudinalCommand sources(::tilde_msg::msg::SteeLongitudinalCommand::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeLongitudinalCommand msg_;
};

class Init_SteeLongitudinalCommand_body
{
public:
  Init_SteeLongitudinalCommand_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeLongitudinalCommand_sources body(::tilde_msg::msg::SteeLongitudinalCommand::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeLongitudinalCommand_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeLongitudinalCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeLongitudinalCommand>()
{
  return tilde_msg::msg::builder::Init_SteeLongitudinalCommand_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_LONGITUDINAL_COMMAND__BUILDER_HPP_
