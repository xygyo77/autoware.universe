// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeOdometry.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeOdometry_sources
{
public:
  explicit Init_SteeOdometry_sources(::tilde_msg::msg::SteeOdometry & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeOdometry sources(::tilde_msg::msg::SteeOdometry::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeOdometry msg_;
};

class Init_SteeOdometry_body
{
public:
  Init_SteeOdometry_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeOdometry_sources body(::tilde_msg::msg::SteeOdometry::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeOdometry_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeOdometry>()
{
  return tilde_msg::msg::builder::Init_SteeOdometry_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_ODOMETRY__BUILDER_HPP_
