// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeImu.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_IMU__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeImu_sources
{
public:
  explicit Init_SteeImu_sources(::tilde_msg::msg::SteeImu & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeImu sources(::tilde_msg::msg::SteeImu::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeImu msg_;
};

class Init_SteeImu_body
{
public:
  Init_SteeImu_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeImu_sources body(::tilde_msg::msg::SteeImu::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeImu_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeImu>()
{
  return tilde_msg::msg::builder::Init_SteeImu_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_IMU__BUILDER_HPP_
