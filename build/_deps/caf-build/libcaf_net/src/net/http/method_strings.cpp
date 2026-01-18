#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/net/http/method.hpp"

#include <string>
#include <string_view>

namespace caf::net::http {

std::string to_string(method x) {
  switch (x) {
    default:
      return "???";
    case method::get:
      return "get";
    case method::head:
      return "head";
    case method::post:
      return "post";
    case method::put:
      return "put";
    case method::del:
      return "del";
    case method::connect:
      return "connect";
    case method::options:
      return "options";
    case method::trace:
      return "trace";
  }
}

bool from_string(std::string_view in, method& out) {
  if (in == "get"
      || in == "caf::net::http::method::get") {
    out = method::get;
    return true;
  }
  if (in == "head"
      || in == "caf::net::http::method::head") {
    out = method::head;
    return true;
  }
  if (in == "post"
      || in == "caf::net::http::method::post") {
    out = method::post;
    return true;
  }
  if (in == "put"
      || in == "caf::net::http::method::put") {
    out = method::put;
    return true;
  }
  if (in == "del"
      || in == "caf::net::http::method::del") {
    out = method::del;
    return true;
  }
  if (in == "connect"
      || in == "caf::net::http::method::connect") {
    out = method::connect;
    return true;
  }
  if (in == "options"
      || in == "caf::net::http::method::options") {
    out = method::options;
    return true;
  }
  if (in == "trace"
      || in == "caf::net::http::method::trace") {
    out = method::trace;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<method> in,
                  method& out) {
  auto result = static_cast<method>(in);
  switch (result) {
    default:
      return false;
    case method::get:
    case method::head:
    case method::post:
    case method::put:
    case method::del:
    case method::connect:
    case method::options:
    case method::trace:
      out = result;
      return true;
  }
}

} // namespace caf::net::http

