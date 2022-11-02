// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tilde_msg:msg/SubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__BUILDER_HPP_
#define TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tilde_msg/msg/detail/sub_topic_time_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tilde_msg
{

namespace msg
{

namespace builder
{

class Init_SubTopicTimeInfo_header_stamp
{
public:
  explicit Init_SubTopicTimeInfo_header_stamp(::tilde_msg::msg::SubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  ::tilde_msg::msg::SubTopicTimeInfo header_stamp(::tilde_msg::msg::SubTopicTimeInfo::_header_stamp_type arg)
  {
    msg_.header_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tilde_msg::msg::SubTopicTimeInfo msg_;
};

class Init_SubTopicTimeInfo_has_header_stamp
{
public:
  explicit Init_SubTopicTimeInfo_has_header_stamp(::tilde_msg::msg::SubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_SubTopicTimeInfo_header_stamp has_header_stamp(::tilde_msg::msg::SubTopicTimeInfo::_has_header_stamp_type arg)
  {
    msg_.has_header_stamp = std::move(arg);
    return Init_SubTopicTimeInfo_header_stamp(msg_);
  }

private:
  ::tilde_msg::msg::SubTopicTimeInfo msg_;
};

class Init_SubTopicTimeInfo_sub_time_steady
{
public:
  explicit Init_SubTopicTimeInfo_sub_time_steady(::tilde_msg::msg::SubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_SubTopicTimeInfo_has_header_stamp sub_time_steady(::tilde_msg::msg::SubTopicTimeInfo::_sub_time_steady_type arg)
  {
    msg_.sub_time_steady = std::move(arg);
    return Init_SubTopicTimeInfo_has_header_stamp(msg_);
  }

private:
  ::tilde_msg::msg::SubTopicTimeInfo msg_;
};

class Init_SubTopicTimeInfo_sub_time
{
public:
  explicit Init_SubTopicTimeInfo_sub_time(::tilde_msg::msg::SubTopicTimeInfo & msg)
  : msg_(msg)
  {}
  Init_SubTopicTimeInfo_sub_time_steady sub_time(::tilde_msg::msg::SubTopicTimeInfo::_sub_time_type arg)
  {
    msg_.sub_time = std::move(arg);
    return Init_SubTopicTimeInfo_sub_time_steady(msg_);
  }

private:
  ::tilde_msg::msg::SubTopicTimeInfo msg_;
};

class Init_SubTopicTimeInfo_topic_name
{
public:
  Init_SubTopicTimeInfo_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubTopicTimeInfo_sub_time topic_name(::tilde_msg::msg::SubTopicTimeInfo::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_SubTopicTimeInfo_sub_time(msg_);
  }

private:
  ::tilde_msg::msg::SubTopicTimeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tilde_msg::msg::SubTopicTimeInfo>()
{
  return tilde_msg::msg::builder::Init_SubTopicTimeInfo_topic_name();
}

}  // namespace tilde_msg

#endif  // TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__BUILDER_HPP_
