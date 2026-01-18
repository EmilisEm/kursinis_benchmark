#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/pec.hpp"

#include <string>
#include <string_view>

namespace caf {

std::string to_string(pec x) {
  switch (x) {
    default:
      return "???";
    case pec::success:
      return "success";
    case pec::trailing_character:
      return "trailing_character";
    case pec::unexpected_eof:
      return "unexpected_eof";
    case pec::unexpected_character:
      return "unexpected_character";
    case pec::timespan_overflow:
      return "timespan_overflow";
    case pec::fractional_timespan:
      return "fractional_timespan";
    case pec::too_many_characters:
      return "too_many_characters";
    case pec::invalid_escape_sequence:
      return "invalid_escape_sequence";
    case pec::unexpected_newline:
      return "unexpected_newline";
    case pec::integer_overflow:
      return "integer_overflow";
    case pec::integer_underflow:
      return "integer_underflow";
    case pec::exponent_underflow:
      return "exponent_underflow";
    case pec::exponent_overflow:
      return "exponent_overflow";
    case pec::type_mismatch:
      return "type_mismatch";
    case pec::not_an_option:
      return "not_an_option";
    case pec::invalid_argument:
      return "invalid_argument";
    case pec::missing_argument:
      return "missing_argument";
    case pec::invalid_category:
      return "invalid_category";
    case pec::invalid_field_name:
      return "invalid_field_name";
    case pec::repeated_field_name:
      return "repeated_field_name";
    case pec::missing_field:
      return "missing_field";
    case pec::invalid_range_expression:
      return "invalid_range_expression";
    case pec::invalid_state:
      return "invalid_state";
    case pec::nested_too_deeply:
      return "nested_too_deeply";
  }
}

bool from_string(std::string_view in, pec& out) {
  if (in == "success"
      || in == "caf::pec::success") {
    out = pec::success;
    return true;
  }
  if (in == "trailing_character"
      || in == "caf::pec::trailing_character") {
    out = pec::trailing_character;
    return true;
  }
  if (in == "unexpected_eof"
      || in == "caf::pec::unexpected_eof") {
    out = pec::unexpected_eof;
    return true;
  }
  if (in == "unexpected_character"
      || in == "caf::pec::unexpected_character") {
    out = pec::unexpected_character;
    return true;
  }
  if (in == "timespan_overflow"
      || in == "caf::pec::timespan_overflow") {
    out = pec::timespan_overflow;
    return true;
  }
  if (in == "fractional_timespan"
      || in == "caf::pec::fractional_timespan") {
    out = pec::fractional_timespan;
    return true;
  }
  if (in == "too_many_characters"
      || in == "caf::pec::too_many_characters") {
    out = pec::too_many_characters;
    return true;
  }
  if (in == "invalid_escape_sequence"
      || in == "caf::pec::invalid_escape_sequence") {
    out = pec::invalid_escape_sequence;
    return true;
  }
  if (in == "unexpected_newline"
      || in == "caf::pec::unexpected_newline") {
    out = pec::unexpected_newline;
    return true;
  }
  if (in == "integer_overflow"
      || in == "caf::pec::integer_overflow") {
    out = pec::integer_overflow;
    return true;
  }
  if (in == "integer_underflow"
      || in == "caf::pec::integer_underflow") {
    out = pec::integer_underflow;
    return true;
  }
  if (in == "exponent_underflow"
      || in == "caf::pec::exponent_underflow") {
    out = pec::exponent_underflow;
    return true;
  }
  if (in == "exponent_overflow"
      || in == "caf::pec::exponent_overflow") {
    out = pec::exponent_overflow;
    return true;
  }
  if (in == "type_mismatch"
      || in == "caf::pec::type_mismatch") {
    out = pec::type_mismatch;
    return true;
  }
  if (in == "not_an_option"
      || in == "caf::pec::not_an_option") {
    out = pec::not_an_option;
    return true;
  }
  if (in == "invalid_argument"
      || in == "caf::pec::invalid_argument") {
    out = pec::invalid_argument;
    return true;
  }
  if (in == "missing_argument"
      || in == "caf::pec::missing_argument") {
    out = pec::missing_argument;
    return true;
  }
  if (in == "invalid_category"
      || in == "caf::pec::invalid_category") {
    out = pec::invalid_category;
    return true;
  }
  if (in == "invalid_field_name"
      || in == "caf::pec::invalid_field_name") {
    out = pec::invalid_field_name;
    return true;
  }
  if (in == "repeated_field_name"
      || in == "caf::pec::repeated_field_name") {
    out = pec::repeated_field_name;
    return true;
  }
  if (in == "missing_field"
      || in == "caf::pec::missing_field") {
    out = pec::missing_field;
    return true;
  }
  if (in == "invalid_range_expression"
      || in == "caf::pec::invalid_range_expression") {
    out = pec::invalid_range_expression;
    return true;
  }
  if (in == "invalid_state"
      || in == "caf::pec::invalid_state") {
    out = pec::invalid_state;
    return true;
  }
  if (in == "nested_too_deeply"
      || in == "caf::pec::nested_too_deeply") {
    out = pec::nested_too_deeply;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<pec> in,
                  pec& out) {
  auto result = static_cast<pec>(in);
  switch (result) {
    default:
      return false;
    case pec::success:
    case pec::trailing_character:
    case pec::unexpected_eof:
    case pec::unexpected_character:
    case pec::timespan_overflow:
    case pec::fractional_timespan:
    case pec::too_many_characters:
    case pec::invalid_escape_sequence:
    case pec::unexpected_newline:
    case pec::integer_overflow:
    case pec::integer_underflow:
    case pec::exponent_underflow:
    case pec::exponent_overflow:
    case pec::type_mismatch:
    case pec::not_an_option:
    case pec::invalid_argument:
    case pec::missing_argument:
    case pec::invalid_category:
    case pec::invalid_field_name:
    case pec::repeated_field_name:
    case pec::missing_field:
    case pec::invalid_range_expression:
    case pec::invalid_state:
    case pec::nested_too_deeply:
      out = result;
      return true;
  }
}

} // namespace caf

