// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tilde_msg:msg/Source.idl
// generated code does not contain a copyright notice

#ifndef TILDE_MSG__MSG__DETAIL__SOURCE__TRAITS_HPP_
#define TILDE_MSG__MSG__DETAIL__SOURCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tilde_msg/msg/detail/source__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'elapsed'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace tilde_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Source & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: elapsed
  {
    out << "elapsed: ";
    to_flow_style_yaml(msg.elapsed, out);
    out << ", ";
  }

  // member: is_overrun
  {
    out << "is_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.is_overrun, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Source & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed:\n";
    to_block_style_yaml(msg.elapsed, out, indentation + 2);
  }

  // member: is_overrun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.is_overrun, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Source & msg, bool use_flow_style = false)
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
  const tilde_msg::msg::Source & msg,
  std::ostream & out, size_t indentation = 0)
{
  tilde_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tilde_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const tilde_msg::msg::Source & msg)
{
  return tilde_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tilde_msg::msg::Source>()
{
  return "tilde_msg::msg::Source";
}

template<>
inline const char * name<tilde_msg::msg::Source>()
{
  return "tilde_msg/msg/Source";
}

template<>
struct has_fixed_size<tilde_msg::msg::Source>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tilde_msg::msg::Source>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tilde_msg::msg::Source>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TILDE_MSG__MSG__DETAIL__SOURCE__TRAITS_HPP_
