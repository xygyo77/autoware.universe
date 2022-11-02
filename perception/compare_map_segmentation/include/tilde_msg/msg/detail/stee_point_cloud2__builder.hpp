// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteePointCloud2.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_point_cloud2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteePointCloud2_sources
{
public:
  explicit Init_SteePointCloud2_sources(::tilde_msg::msg::SteePointCloud2 & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteePointCloud2 sources(::tilde_msg::msg::SteePointCloud2::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteePointCloud2 msg_;
};

class Init_SteePointCloud2_body
{
public:
  Init_SteePointCloud2_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteePointCloud2_sources body(::tilde_msg::msg::SteePointCloud2::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteePointCloud2_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteePointCloud2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteePointCloud2>()
{
  return tilde_msg::msg::builder::Init_SteePointCloud2_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_POINT_CLOUD2__BUILDER_HPP_
