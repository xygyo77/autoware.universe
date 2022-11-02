// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tilde_msg:msg/SubTopicTimeInfo.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__TRAITS_HPP_
#define TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tilde_msg/msg/detail/sub_topic_time_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sub_time'
// Member 'sub_time_steady'
// Member 'header_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tilde_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubTopicTimeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: sub_time
  {
    out << "sub_time: ";
    to_flow_style_yaml(msg.sub_time, out);
    out << ", ";
  }

  // member: sub_time_steady
  {
    out << "sub_time_steady: ";
    to_flow_style_yaml(msg.sub_time_steady, out);
    out << ", ";
  }

  // member: has_header_stamp
  {
    out << "has_header_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.has_header_stamp, out);
    out << ", ";
  }

  // member: header_stamp
  {
    out << "header_stamp: ";
    to_flow_style_yaml(msg.header_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubTopicTimeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: sub_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_time:\n";
    to_block_style_yaml(msg.sub_time, out, indentation + 2);
  }

  // member: sub_time_steady
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_time_steady:\n";
    to_block_style_yaml(msg.sub_time_steady, out, indentation + 2);
  }

  // member: has_header_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_header_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.has_header_stamp, out);
    out << "\n";
  }

  // member: header_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_stamp:\n";
    to_block_style_yaml(msg.header_stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubTopicTimeInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tilde_msg

namespace rosidl_generator_traits
{

[[deprecated("use tilde_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tilde_msg::msg::SubTopicTimeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tilde_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tilde_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const tilde_msg::msg::SubTopicTimeInfo & msg)
{
  return tilde_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tilde_msg::msg::SubTopicTimeInfo>()
{
  return "tilde_msg::msg::SubTopicTimeInfo";
}

template<>
inline const char * name<tilde_msg::msg::SubTopicTimeInfo>()
{
  return "tilde_msg/msg/SubTopicTimeInfo";
}

template<>
struct has_fixed_size<tilde_msg::msg::SubTopicTimeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tilde_msg::msg::SubTopicTimeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tilde_msg::msg::SubTopicTimeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TILDE_MSG__MSG__DETAIL__SUB_TOPIC_TIME_INFO__TRAITS_HPP_
