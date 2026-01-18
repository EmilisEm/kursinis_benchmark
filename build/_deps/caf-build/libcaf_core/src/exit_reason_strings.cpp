#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/exit_reason.hpp"

#include <string>
#include <string_view>

namespace caf {

std::string to_string(exit_reason x) {
  switch (x) {
    default:
      return "???";
    case exit_reason::normal:
      return "normal";
    case exit_reason::unknown:
      return "unknown";
    case exit_reason::out_of_workers:
      return "out_of_workers";
    case exit_reason::user_shutdown:
      return "user_shutdown";
    case exit_reason::kill:
      return "kill";
    case exit_reason::remote_link_unreachable:
      return "remote_link_unreachable";
    case exit_reason::unreachable:
      return "unreachable";
  }
}

bool from_string(std::string_view in, exit_reason& out) {
  if (in == "normal"
      || in == "caf::exit_reason::normal") {
    out = exit_reason::normal;
    return true;
  }
  if (in == "unknown"
      || in == "caf::exit_reason::unknown") {
    out = exit_reason::unknown;
    return true;
  }
  if (in == "out_of_workers"
      || in == "caf::exit_reason::out_of_workers") {
    out = exit_reason::out_of_workers;
    return true;
  }
  if (in == "user_shutdown"
      || in == "caf::exit_reason::user_shutdown") {
    out = exit_reason::user_shutdown;
    return true;
  }
  if (in == "kill"
      || in == "caf::exit_reason::kill") {
    out = exit_reason::kill;
    return true;
  }
  if (in == "remote_link_unreachable"
      || in == "caf::exit_reason::remote_link_unreachable") {
    out = exit_reason::remote_link_unreachable;
    return true;
  }
  if (in == "unreachable"
      || in == "caf::exit_reason::unreachable") {
    out = exit_reason::unreachable;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<exit_reason> in,
                  exit_reason& out) {
  auto result = static_cast<exit_reason>(in);
  switch (result) {
    default:
      return false;
    case exit_reason::normal:
    case exit_reason::unknown:
    case exit_reason::out_of_workers:
    case exit_reason::user_shutdown:
    case exit_reason::kill:
    case exit_reason::remote_link_unreachable:
    case exit_reason::unreachable:
      out = result;
      return true;
  }
}

} // namespace caf

