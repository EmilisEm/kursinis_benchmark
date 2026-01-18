#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/sec.hpp"

#include <string>
#include <string_view>

namespace caf {

std::string to_string(sec x) {
  switch (x) {
    default:
      return "???";
    case sec::none:
      return "none";
    case sec::unexpected_message:
      return "unexpected_message";
    case sec::unexpected_response:
      return "unexpected_response";
    case sec::request_receiver_down:
      return "request_receiver_down";
    case sec::request_timeout:
      return "request_timeout";
    case sec::no_such_group_module:
      return "no_such_group_module";
    case sec::no_actor_published_at_port:
      return "no_actor_published_at_port";
    case sec::unexpected_actor_messaging_interface:
      return "unexpected_actor_messaging_interface";
    case sec::state_not_serializable:
      return "state_not_serializable";
    case sec::unsupported_sys_key:
      return "unsupported_sys_key";
    case sec::unsupported_sys_message:
      return "unsupported_sys_message";
    case sec::disconnect_during_handshake:
      return "disconnect_during_handshake";
    case sec::cannot_forward_to_invalid_actor:
      return "cannot_forward_to_invalid_actor";
    case sec::no_route_to_receiving_node:
      return "no_route_to_receiving_node";
    case sec::failed_to_assign_scribe_from_handle:
      return "failed_to_assign_scribe_from_handle";
    case sec::failed_to_assign_doorman_from_handle:
      return "failed_to_assign_doorman_from_handle";
    case sec::cannot_close_invalid_port:
      return "cannot_close_invalid_port";
    case sec::cannot_connect_to_node:
      return "cannot_connect_to_node";
    case sec::cannot_open_port:
      return "cannot_open_port";
    case sec::network_syscall_failed:
      return "network_syscall_failed";
    case sec::invalid_argument:
      return "invalid_argument";
    case sec::invalid_protocol_family:
      return "invalid_protocol_family";
    case sec::cannot_publish_invalid_actor:
      return "cannot_publish_invalid_actor";
    case sec::cannot_spawn_actor_from_arguments:
      return "cannot_spawn_actor_from_arguments";
    case sec::end_of_stream:
      return "end_of_stream";
    case sec::no_context:
      return "no_context";
    case sec::unknown_type:
      return "unknown_type";
    case sec::no_proxy_registry:
      return "no_proxy_registry";
    case sec::runtime_error:
      return "runtime_error";
    case sec::remote_linking_failed:
      return "remote_linking_failed";
    case sec::invalid_stream:
      return "invalid_stream";
    case sec::cannot_resubscribe_stream:
      return "cannot_resubscribe_stream";
    case sec::stream_aborted:
      return "stream_aborted";
    case sec::bad_function_call:
      return "bad_function_call";
    case sec::feature_disabled:
      return "feature_disabled";
    case sec::cannot_open_file:
      return "cannot_open_file";
    case sec::socket_invalid:
      return "socket_invalid";
    case sec::socket_disconnected:
      return "socket_disconnected";
    case sec::socket_operation_failed:
      return "socket_operation_failed";
    case sec::unavailable_or_would_block:
      return "unavailable_or_would_block";
    case sec::incompatible_versions:
      return "incompatible_versions";
    case sec::incompatible_application_ids:
      return "incompatible_application_ids";
    case sec::malformed_message:
      return "malformed_message";
    case sec::serializing_basp_payload_failed:
      return "serializing_basp_payload_failed";
    case sec::redundant_connection:
      return "redundant_connection";
    case sec::remote_lookup_failed:
      return "remote_lookup_failed";
    case sec::no_tracing_context:
      return "no_tracing_context";
    case sec::all_requests_failed:
      return "all_requests_failed";
    case sec::field_invariant_check_failed:
      return "field_invariant_check_failed";
    case sec::field_value_synchronization_failed:
      return "field_value_synchronization_failed";
    case sec::invalid_field_type:
      return "invalid_field_type";
    case sec::unsafe_type:
      return "unsafe_type";
    case sec::save_callback_failed:
      return "save_callback_failed";
    case sec::load_callback_failed:
      return "load_callback_failed";
    case sec::conversion_failed:
      return "conversion_failed";
    case sec::connection_closed:
      return "connection_closed";
    case sec::type_clash:
      return "type_clash";
    case sec::unsupported_operation:
      return "unsupported_operation";
    case sec::no_such_key:
      return "no_such_key";
    case sec::broken_promise:
      return "broken_promise";
    case sec::connection_timeout:
      return "connection_timeout";
    case sec::action_reschedule_failed:
      return "action_reschedule_failed";
    case sec::invalid_observable:
      return "invalid_observable";
    case sec::too_many_observers:
      return "too_many_observers";
    case sec::disposed:
      return "disposed";
    case sec::cannot_open_resource:
      return "cannot_open_resource";
    case sec::protocol_error:
      return "protocol_error";
    case sec::logic_error:
      return "logic_error";
  }
}

bool from_string(std::string_view in, sec& out) {
  if (in == "none"
      || in == "caf::sec::none") {
    out = sec::none;
    return true;
  }
  if (in == "unexpected_message"
      || in == "caf::sec::unexpected_message") {
    out = sec::unexpected_message;
    return true;
  }
  if (in == "unexpected_response"
      || in == "caf::sec::unexpected_response") {
    out = sec::unexpected_response;
    return true;
  }
  if (in == "request_receiver_down"
      || in == "caf::sec::request_receiver_down") {
    out = sec::request_receiver_down;
    return true;
  }
  if (in == "request_timeout"
      || in == "caf::sec::request_timeout") {
    out = sec::request_timeout;
    return true;
  }
  if (in == "no_such_group_module"
      || in == "caf::sec::no_such_group_module") {
    out = sec::no_such_group_module;
    return true;
  }
  if (in == "no_actor_published_at_port"
      || in == "caf::sec::no_actor_published_at_port") {
    out = sec::no_actor_published_at_port;
    return true;
  }
  if (in == "unexpected_actor_messaging_interface"
      || in == "caf::sec::unexpected_actor_messaging_interface") {
    out = sec::unexpected_actor_messaging_interface;
    return true;
  }
  if (in == "state_not_serializable"
      || in == "caf::sec::state_not_serializable") {
    out = sec::state_not_serializable;
    return true;
  }
  if (in == "unsupported_sys_key"
      || in == "caf::sec::unsupported_sys_key") {
    out = sec::unsupported_sys_key;
    return true;
  }
  if (in == "unsupported_sys_message"
      || in == "caf::sec::unsupported_sys_message") {
    out = sec::unsupported_sys_message;
    return true;
  }
  if (in == "disconnect_during_handshake"
      || in == "caf::sec::disconnect_during_handshake") {
    out = sec::disconnect_during_handshake;
    return true;
  }
  if (in == "cannot_forward_to_invalid_actor"
      || in == "caf::sec::cannot_forward_to_invalid_actor") {
    out = sec::cannot_forward_to_invalid_actor;
    return true;
  }
  if (in == "no_route_to_receiving_node"
      || in == "caf::sec::no_route_to_receiving_node") {
    out = sec::no_route_to_receiving_node;
    return true;
  }
  if (in == "failed_to_assign_scribe_from_handle"
      || in == "caf::sec::failed_to_assign_scribe_from_handle") {
    out = sec::failed_to_assign_scribe_from_handle;
    return true;
  }
  if (in == "failed_to_assign_doorman_from_handle"
      || in == "caf::sec::failed_to_assign_doorman_from_handle") {
    out = sec::failed_to_assign_doorman_from_handle;
    return true;
  }
  if (in == "cannot_close_invalid_port"
      || in == "caf::sec::cannot_close_invalid_port") {
    out = sec::cannot_close_invalid_port;
    return true;
  }
  if (in == "cannot_connect_to_node"
      || in == "caf::sec::cannot_connect_to_node") {
    out = sec::cannot_connect_to_node;
    return true;
  }
  if (in == "cannot_open_port"
      || in == "caf::sec::cannot_open_port") {
    out = sec::cannot_open_port;
    return true;
  }
  if (in == "network_syscall_failed"
      || in == "caf::sec::network_syscall_failed") {
    out = sec::network_syscall_failed;
    return true;
  }
  if (in == "invalid_argument"
      || in == "caf::sec::invalid_argument") {
    out = sec::invalid_argument;
    return true;
  }
  if (in == "invalid_protocol_family"
      || in == "caf::sec::invalid_protocol_family") {
    out = sec::invalid_protocol_family;
    return true;
  }
  if (in == "cannot_publish_invalid_actor"
      || in == "caf::sec::cannot_publish_invalid_actor") {
    out = sec::cannot_publish_invalid_actor;
    return true;
  }
  if (in == "cannot_spawn_actor_from_arguments"
      || in == "caf::sec::cannot_spawn_actor_from_arguments") {
    out = sec::cannot_spawn_actor_from_arguments;
    return true;
  }
  if (in == "end_of_stream"
      || in == "caf::sec::end_of_stream") {
    out = sec::end_of_stream;
    return true;
  }
  if (in == "no_context"
      || in == "caf::sec::no_context") {
    out = sec::no_context;
    return true;
  }
  if (in == "unknown_type"
      || in == "caf::sec::unknown_type") {
    out = sec::unknown_type;
    return true;
  }
  if (in == "no_proxy_registry"
      || in == "caf::sec::no_proxy_registry") {
    out = sec::no_proxy_registry;
    return true;
  }
  if (in == "runtime_error"
      || in == "caf::sec::runtime_error") {
    out = sec::runtime_error;
    return true;
  }
  if (in == "remote_linking_failed"
      || in == "caf::sec::remote_linking_failed") {
    out = sec::remote_linking_failed;
    return true;
  }
  if (in == "invalid_stream"
      || in == "caf::sec::invalid_stream") {
    out = sec::invalid_stream;
    return true;
  }
  if (in == "cannot_resubscribe_stream"
      || in == "caf::sec::cannot_resubscribe_stream") {
    out = sec::cannot_resubscribe_stream;
    return true;
  }
  if (in == "stream_aborted"
      || in == "caf::sec::stream_aborted") {
    out = sec::stream_aborted;
    return true;
  }
  if (in == "bad_function_call"
      || in == "caf::sec::bad_function_call") {
    out = sec::bad_function_call;
    return true;
  }
  if (in == "feature_disabled"
      || in == "caf::sec::feature_disabled") {
    out = sec::feature_disabled;
    return true;
  }
  if (in == "cannot_open_file"
      || in == "caf::sec::cannot_open_file") {
    out = sec::cannot_open_file;
    return true;
  }
  if (in == "socket_invalid"
      || in == "caf::sec::socket_invalid") {
    out = sec::socket_invalid;
    return true;
  }
  if (in == "socket_disconnected"
      || in == "caf::sec::socket_disconnected") {
    out = sec::socket_disconnected;
    return true;
  }
  if (in == "socket_operation_failed"
      || in == "caf::sec::socket_operation_failed") {
    out = sec::socket_operation_failed;
    return true;
  }
  if (in == "unavailable_or_would_block"
      || in == "caf::sec::unavailable_or_would_block") {
    out = sec::unavailable_or_would_block;
    return true;
  }
  if (in == "incompatible_versions"
      || in == "caf::sec::incompatible_versions") {
    out = sec::incompatible_versions;
    return true;
  }
  if (in == "incompatible_application_ids"
      || in == "caf::sec::incompatible_application_ids") {
    out = sec::incompatible_application_ids;
    return true;
  }
  if (in == "malformed_message"
      || in == "caf::sec::malformed_message") {
    out = sec::malformed_message;
    return true;
  }
  if (in == "serializing_basp_payload_failed"
      || in == "caf::sec::serializing_basp_payload_failed") {
    out = sec::serializing_basp_payload_failed;
    return true;
  }
  if (in == "redundant_connection"
      || in == "caf::sec::redundant_connection") {
    out = sec::redundant_connection;
    return true;
  }
  if (in == "remote_lookup_failed"
      || in == "caf::sec::remote_lookup_failed") {
    out = sec::remote_lookup_failed;
    return true;
  }
  if (in == "no_tracing_context"
      || in == "caf::sec::no_tracing_context") {
    out = sec::no_tracing_context;
    return true;
  }
  if (in == "all_requests_failed"
      || in == "caf::sec::all_requests_failed") {
    out = sec::all_requests_failed;
    return true;
  }
  if (in == "field_invariant_check_failed"
      || in == "caf::sec::field_invariant_check_failed") {
    out = sec::field_invariant_check_failed;
    return true;
  }
  if (in == "field_value_synchronization_failed"
      || in == "caf::sec::field_value_synchronization_failed") {
    out = sec::field_value_synchronization_failed;
    return true;
  }
  if (in == "invalid_field_type"
      || in == "caf::sec::invalid_field_type") {
    out = sec::invalid_field_type;
    return true;
  }
  if (in == "unsafe_type"
      || in == "caf::sec::unsafe_type") {
    out = sec::unsafe_type;
    return true;
  }
  if (in == "save_callback_failed"
      || in == "caf::sec::save_callback_failed") {
    out = sec::save_callback_failed;
    return true;
  }
  if (in == "load_callback_failed"
      || in == "caf::sec::load_callback_failed") {
    out = sec::load_callback_failed;
    return true;
  }
  if (in == "conversion_failed"
      || in == "caf::sec::conversion_failed") {
    out = sec::conversion_failed;
    return true;
  }
  if (in == "connection_closed"
      || in == "caf::sec::connection_closed") {
    out = sec::connection_closed;
    return true;
  }
  if (in == "type_clash"
      || in == "caf::sec::type_clash") {
    out = sec::type_clash;
    return true;
  }
  if (in == "unsupported_operation"
      || in == "caf::sec::unsupported_operation") {
    out = sec::unsupported_operation;
    return true;
  }
  if (in == "no_such_key"
      || in == "caf::sec::no_such_key") {
    out = sec::no_such_key;
    return true;
  }
  if (in == "broken_promise"
      || in == "caf::sec::broken_promise") {
    out = sec::broken_promise;
    return true;
  }
  if (in == "connection_timeout"
      || in == "caf::sec::connection_timeout") {
    out = sec::connection_timeout;
    return true;
  }
  if (in == "action_reschedule_failed"
      || in == "caf::sec::action_reschedule_failed") {
    out = sec::action_reschedule_failed;
    return true;
  }
  if (in == "invalid_observable"
      || in == "caf::sec::invalid_observable") {
    out = sec::invalid_observable;
    return true;
  }
  if (in == "too_many_observers"
      || in == "caf::sec::too_many_observers") {
    out = sec::too_many_observers;
    return true;
  }
  if (in == "disposed"
      || in == "caf::sec::disposed") {
    out = sec::disposed;
    return true;
  }
  if (in == "cannot_open_resource"
      || in == "caf::sec::cannot_open_resource") {
    out = sec::cannot_open_resource;
    return true;
  }
  if (in == "protocol_error"
      || in == "caf::sec::protocol_error") {
    out = sec::protocol_error;
    return true;
  }
  if (in == "logic_error"
      || in == "caf::sec::logic_error") {
    out = sec::logic_error;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<sec> in,
                  sec& out) {
  auto result = static_cast<sec>(in);
  switch (result) {
    default:
      return false;
    case sec::none:
    case sec::unexpected_message:
    case sec::unexpected_response:
    case sec::request_receiver_down:
    case sec::request_timeout:
    case sec::no_such_group_module:
    case sec::no_actor_published_at_port:
    case sec::unexpected_actor_messaging_interface:
    case sec::state_not_serializable:
    case sec::unsupported_sys_key:
    case sec::unsupported_sys_message:
    case sec::disconnect_during_handshake:
    case sec::cannot_forward_to_invalid_actor:
    case sec::no_route_to_receiving_node:
    case sec::failed_to_assign_scribe_from_handle:
    case sec::failed_to_assign_doorman_from_handle:
    case sec::cannot_close_invalid_port:
    case sec::cannot_connect_to_node:
    case sec::cannot_open_port:
    case sec::network_syscall_failed:
    case sec::invalid_argument:
    case sec::invalid_protocol_family:
    case sec::cannot_publish_invalid_actor:
    case sec::cannot_spawn_actor_from_arguments:
    case sec::end_of_stream:
    case sec::no_context:
    case sec::unknown_type:
    case sec::no_proxy_registry:
    case sec::runtime_error:
    case sec::remote_linking_failed:
    case sec::invalid_stream:
    case sec::cannot_resubscribe_stream:
    case sec::stream_aborted:
    case sec::bad_function_call:
    case sec::feature_disabled:
    case sec::cannot_open_file:
    case sec::socket_invalid:
    case sec::socket_disconnected:
    case sec::socket_operation_failed:
    case sec::unavailable_or_would_block:
    case sec::incompatible_versions:
    case sec::incompatible_application_ids:
    case sec::malformed_message:
    case sec::serializing_basp_payload_failed:
    case sec::redundant_connection:
    case sec::remote_lookup_failed:
    case sec::no_tracing_context:
    case sec::all_requests_failed:
    case sec::field_invariant_check_failed:
    case sec::field_value_synchronization_failed:
    case sec::invalid_field_type:
    case sec::unsafe_type:
    case sec::save_callback_failed:
    case sec::load_callback_failed:
    case sec::conversion_failed:
    case sec::connection_closed:
    case sec::type_clash:
    case sec::unsupported_operation:
    case sec::no_such_key:
    case sec::broken_promise:
    case sec::connection_timeout:
    case sec::action_reschedule_failed:
    case sec::invalid_observable:
    case sec::too_many_observers:
    case sec::disposed:
    case sec::cannot_open_resource:
    case sec::protocol_error:
    case sec::logic_error:
      out = result;
      return true;
  }
}

} // namespace caf

