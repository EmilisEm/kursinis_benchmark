#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/flow/op/state.hpp"

#include <string>
#include <string_view>

namespace caf::flow::op {

std::string to_string(state x) {
  switch (x) {
    default:
      return "???";
    case state::idle:
      return "idle";
    case state::running:
      return "running";
    case state::completed:
      return "completed";
    case state::aborted:
      return "aborted";
    case state::disposed:
      return "disposed";
  }
}

bool from_string(std::string_view in, state& out) {
  if (in == "idle"
      || in == "caf::flow::op::state::idle") {
    out = state::idle;
    return true;
  }
  if (in == "running"
      || in == "caf::flow::op::state::running") {
    out = state::running;
    return true;
  }
  if (in == "completed"
      || in == "caf::flow::op::state::completed") {
    out = state::completed;
    return true;
  }
  if (in == "aborted"
      || in == "caf::flow::op::state::aborted") {
    out = state::aborted;
    return true;
  }
  if (in == "disposed"
      || in == "caf::flow::op::state::disposed") {
    out = state::disposed;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<state> in,
                  state& out) {
  auto result = static_cast<state>(in);
  switch (result) {
    default:
      return false;
    case state::idle:
    case state::running:
    case state::completed:
    case state::aborted:
    case state::disposed:
      out = result;
      return true;
  }
}

} // namespace caf::flow::op

