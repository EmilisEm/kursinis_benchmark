#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/io/basp/connection_state.hpp"

#include <string>
#include <string_view>

namespace caf::io::basp {

std::string to_string(connection_state x) {
  switch (x) {
    default:
      return "???";
    case await_header:
      return "await_header";
    case await_payload:
      return "await_payload";
    case close_connection:
      return "close_connection";
    case incompatible_versions:
      return "incompatible_versions";
    case incompatible_application_ids:
      return "incompatible_application_ids";
    case malformed_message:
      return "malformed_message";
    case serializing_basp_payload_failed:
      return "serializing_basp_payload_failed";
    case redundant_connection:
      return "redundant_connection";
    case no_route_to_receiving_node:
      return "no_route_to_receiving_node";
  }
}

bool from_string(std::string_view in, connection_state& out) {
  if (in == "await_header"
      || in == "caf::io::basp::connection_state::await_header") {
    out = await_header;
    return true;
  }
  if (in == "await_payload"
      || in == "caf::io::basp::connection_state::await_payload") {
    out = await_payload;
    return true;
  }
  if (in == "close_connection"
      || in == "caf::io::basp::connection_state::close_connection") {
    out = close_connection;
    return true;
  }
  if (in == "incompatible_versions"
      || in == "caf::io::basp::connection_state::incompatible_versions") {
    out = incompatible_versions;
    return true;
  }
  if (in == "incompatible_application_ids"
      || in == "caf::io::basp::connection_state::incompatible_application_ids") {
    out = incompatible_application_ids;
    return true;
  }
  if (in == "malformed_message"
      || in == "caf::io::basp::connection_state::malformed_message") {
    out = malformed_message;
    return true;
  }
  if (in == "serializing_basp_payload_failed"
      || in == "caf::io::basp::connection_state::serializing_basp_payload_failed") {
    out = serializing_basp_payload_failed;
    return true;
  }
  if (in == "redundant_connection"
      || in == "caf::io::basp::connection_state::redundant_connection") {
    out = redundant_connection;
    return true;
  }
  if (in == "no_route_to_receiving_node"
      || in == "caf::io::basp::connection_state::no_route_to_receiving_node") {
    out = no_route_to_receiving_node;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<connection_state> in,
                  connection_state& out) {
  auto result = static_cast<connection_state>(in);
  switch (result) {
    default:
      return false;
    case await_header:
    case await_payload:
    case close_connection:
    case incompatible_versions:
    case incompatible_application_ids:
    case malformed_message:
    case serializing_basp_payload_failed:
    case redundant_connection:
    case no_route_to_receiving_node:
      out = result;
      return true;
  }
}

} // namespace caf::io::basp

