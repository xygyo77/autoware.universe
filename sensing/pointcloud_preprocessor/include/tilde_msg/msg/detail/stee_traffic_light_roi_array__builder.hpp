// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SteeTrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/stee_traffic_light_roi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SteeTrafficLightRoiArray_sources
{
public:
  explicit Init_SteeTrafficLightRoiArray_sources(::tilde_msg::msg::SteeTrafficLightRoiArray & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SteeTrafficLightRoiArray sources(::tilde_msg::msg::SteeTrafficLightRoiArray::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SteeTrafficLightRoiArray msg_;
};

class Init_SteeTrafficLightRoiArray_body
{
public:
  Init_SteeTrafficLightRoiArray_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeTrafficLightRoiArray_sources body(::tilde_msg::msg::SteeTrafficLightRoiArray::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SteeTrafficLightRoiArray_sources(msg_);
  }

private:
  ::tilde_msg::msg::SteeTrafficLightRoiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SteeTrafficLightRoiArray>()
{
  return tilde_msg::msg::builder::Init_SteeTrafficLightRoiArray_body();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__STEE_TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_
