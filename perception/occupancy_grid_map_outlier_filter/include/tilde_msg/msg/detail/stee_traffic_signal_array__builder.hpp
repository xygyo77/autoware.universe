// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeTrafficSignalArray.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_traffic_signal_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeTrafficSignalArray_sources
{
public:
  explicit Init_SteeTrafficSignalArray_sources(::tilde_msg::msg::SteeTrafficSignalArray & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeTrafficSignalArray sources(::tilde_msg::msg::SteeTrafficSignalArray::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeTrafficSignalArray msg_;
};

class Init_SteeTrafficSignalArray_body
{
public:
  Init_SteeTrafficSignalArray_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeTrafficSignalArray_sources body(::tilde_msg::msg::SteeTrafficSignalArray::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeTrafficSignalArray_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeTrafficSignalArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeTrafficSignalArray>()
{
  return tilde_msg::msg::builder::Init_SteeTrafficSignalArray_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
