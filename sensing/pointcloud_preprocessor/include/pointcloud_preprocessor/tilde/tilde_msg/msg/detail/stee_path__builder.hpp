// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteePath.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_PATH__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteePath_sources
{
public:
  explicit Init_SteePath_sources(::tilde_msg::msg::SteePath & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteePath sources(::tilde_msg::msg::SteePath::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteePath msg_;
};

class Init_SteePath_body
{
public:
  Init_SteePath_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteePath_sources body(::tilde_msg::msg::SteePath::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteePath_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteePath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteePath>()
{
  return tilde_msg::msg::builder::Init_SteePath_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_PATH__BUILDER_HPP_
