// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeAckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_ackermann_lateral_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeAckermannLateralCommand_sources
{
public:
  explicit Init_SteeAckermannLateralCommand_sources(::tilde_msg::msg::SteeAckermannLateralCommand & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeAckermannLateralCommand sources(::tilde_msg::msg::SteeAckermannLateralCommand::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeAckermannLateralCommand msg_;
};

class Init_SteeAckermannLateralCommand_body
{
public:
  Init_SteeAckermannLateralCommand_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeAckermannLateralCommand_sources body(::tilde_msg::msg::SteeAckermannLateralCommand::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeAckermannLateralCommand_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeAckermannLateralCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeAckermannLateralCommand>()
{
  return tilde_msg::msg::builder::Init_SteeAckermannLateralCommand_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_
