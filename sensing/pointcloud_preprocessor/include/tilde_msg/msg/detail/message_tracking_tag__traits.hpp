// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tilde_msg:msg/MessageTrackingTag.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__TRAITS_HPP_
#define TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tilde_msg/msg/detail/message_tracking_tag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'output_info'
#include "tilde_msg/msg/detail/pub_topic_time_info__traits.hpp"
// Member 'input_infos'
#include "tilde_msg/msg/detail/sub_topic_time_info__traits.hpp"

namespace tilde_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MessageTrackingTag & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: output_info
  {
    out << "output_info: ";
    to_flow_style_yaml(msg.output_info, out);
    out << ", ";
  }

  // member: input_infos
  {
    if (msg.input_infos.size() == 0) {
      out << "input_infos: []";
    } else {
      out << "input_infos: [";
      size_t pending_items = msg.input_infos.size();
      for (auto item : msg.input_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTrackingTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: output_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_info:\n";
    to_block_style_yaml(msg.output_info, out, indentation + 2);
  }

  // member: input_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_infos.size() == 0) {
      out << "input_infos: []\n";
    } else {
      out << "input_infos:\n";
      for (auto item : msg.input_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTrackingTag & msg, bool use_flow_style = false)
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
  const tilde_msg::msg::MessageTrackingTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  tilde_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tilde_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const tilde_msg::msg::MessageTrackingTag & msg)
{
  return tilde_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tilde_msg::msg::MessageTrackingTag>()
{
  return "tilde_msg::msg::MessageTrackingTag";
}

template<>
inline const char * name<tilde_msg::msg::MessageTrackingTag>()
{
  return "tilde_msg/msg/MessageTrackingTag";
}

template<>
struct has_fixed_size<tilde_msg::msg::MessageTrackingTag>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tilde_msg::msg::MessageTrackingTag>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tilde_msg::msg::MessageTrackingTag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TILDE_MSG__MSG__DETAIL__MESSAGE_TRACKING_TAG__TRAITS_HPP_
