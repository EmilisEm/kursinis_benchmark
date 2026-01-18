#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/term.hpp"

#include <string>
#include <string_view>

namespace caf {

std::string to_string(term x) {
  switch (x) {
    default:
      return "???";
    case term::reset:
      return "reset";
    case term::reset_endl:
      return "reset_endl";
    case term::black:
      return "black";
    case term::red:
      return "red";
    case term::green:
      return "green";
    case term::yellow:
      return "yellow";
    case term::blue:
      return "blue";
    case term::magenta:
      return "magenta";
    case term::cyan:
      return "cyan";
    case term::white:
      return "white";
    case term::bold_black:
      return "bold_black";
    case term::bold_red:
      return "bold_red";
    case term::bold_green:
      return "bold_green";
    case term::bold_yellow:
      return "bold_yellow";
    case term::bold_blue:
      return "bold_blue";
    case term::bold_magenta:
      return "bold_magenta";
    case term::bold_cyan:
      return "bold_cyan";
    case term::bold_white:
      return "bold_white";
  }
}

bool from_string(std::string_view in, term& out) {
  if (in == "reset"
      || in == "caf::term::reset") {
    out = term::reset;
    return true;
  }
  if (in == "reset_endl"
      || in == "caf::term::reset_endl") {
    out = term::reset_endl;
    return true;
  }
  if (in == "black"
      || in == "caf::term::black") {
    out = term::black;
    return true;
  }
  if (in == "red"
      || in == "caf::term::red") {
    out = term::red;
    return true;
  }
  if (in == "green"
      || in == "caf::term::green") {
    out = term::green;
    return true;
  }
  if (in == "yellow"
      || in == "caf::term::yellow") {
    out = term::yellow;
    return true;
  }
  if (in == "blue"
      || in == "caf::term::blue") {
    out = term::blue;
    return true;
  }
  if (in == "magenta"
      || in == "caf::term::magenta") {
    out = term::magenta;
    return true;
  }
  if (in == "cyan"
      || in == "caf::term::cyan") {
    out = term::cyan;
    return true;
  }
  if (in == "white"
      || in == "caf::term::white") {
    out = term::white;
    return true;
  }
  if (in == "bold_black"
      || in == "caf::term::bold_black") {
    out = term::bold_black;
    return true;
  }
  if (in == "bold_red"
      || in == "caf::term::bold_red") {
    out = term::bold_red;
    return true;
  }
  if (in == "bold_green"
      || in == "caf::term::bold_green") {
    out = term::bold_green;
    return true;
  }
  if (in == "bold_yellow"
      || in == "caf::term::bold_yellow") {
    out = term::bold_yellow;
    return true;
  }
  if (in == "bold_blue"
      || in == "caf::term::bold_blue") {
    out = term::bold_blue;
    return true;
  }
  if (in == "bold_magenta"
      || in == "caf::term::bold_magenta") {
    out = term::bold_magenta;
    return true;
  }
  if (in == "bold_cyan"
      || in == "caf::term::bold_cyan") {
    out = term::bold_cyan;
    return true;
  }
  if (in == "bold_white"
      || in == "caf::term::bold_white") {
    out = term::bold_white;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<term> in,
                  term& out) {
  auto result = static_cast<term>(in);
  switch (result) {
    default:
      return false;
    case term::reset:
    case term::reset_endl:
    case term::black:
    case term::red:
    case term::green:
    case term::yellow:
    case term::blue:
    case term::magenta:
    case term::cyan:
    case term::white:
    case term::bold_black:
    case term::bold_red:
    case term::bold_green:
    case term::bold_yellow:
    case term::bold_blue:
    case term::bold_magenta:
    case term::bold_cyan:
    case term::bold_white:
      out = result;
      return true;
  }
}

} // namespace caf

