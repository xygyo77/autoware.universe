// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeDetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_detected_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeDetectedObjects_sources
{
public:
  explicit Init_SteeDetectedObjects_sources(::tilde_msg::msg::SteeDetectedObjects & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeDetectedObjects sources(::tilde_msg::msg::SteeDetectedObjects::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeDetectedObjects msg_;
};

class Init_SteeDetectedObjects_body
{
public:
  Init_SteeDetectedObjects_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeDetectedObjects_sources body(::tilde_msg::msg::SteeDetectedObjects::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeDetectedObjects_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeDetectedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeDetectedObjects>()
{
  return tilde_msg::msg::builder::Init_SteeDetectedObjects_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_DETECTED_OBJECTS__BUILDER_HPP_
