#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/net/ssl/errc.hpp"

#include <string>
#include <string_view>

namespace caf::net::ssl {

std::string to_string(errc x) {
  switch (x) {
    default:
      return "???";
    case errc::none:
      return "none";
    case errc::closed:
      return "closed";
    case errc::want_read:
      return "want_read";
    case errc::want_write:
      return "want_write";
    case errc::want_connect:
      return "want_connect";
    case errc::want_accept:
      return "want_accept";
    case errc::want_x509_lookup:
      return "want_x509_lookup";
    case errc::want_async:
      return "want_async";
    case errc::want_async_job:
      return "want_async_job";
    case errc::want_client_hello:
      return "want_client_hello";
    case errc::syscall_failed:
      return "syscall_failed";
    case errc::fatal:
      return "fatal";
    case errc::unspecified:
      return "unspecified";
  }
}

bool from_string(std::string_view in, errc& out) {
  if (in == "none"
      || in == "caf::net::ssl::errc::none") {
    out = errc::none;
    return true;
  }
  if (in == "closed"
      || in == "caf::net::ssl::errc::closed") {
    out = errc::closed;
    return true;
  }
  if (in == "want_read"
      || in == "caf::net::ssl::errc::want_read") {
    out = errc::want_read;
    return true;
  }
  if (in == "want_write"
      || in == "caf::net::ssl::errc::want_write") {
    out = errc::want_write;
    return true;
  }
  if (in == "want_connect"
      || in == "caf::net::ssl::errc::want_connect") {
    out = errc::want_connect;
    return true;
  }
  if (in == "want_accept"
      || in == "caf::net::ssl::errc::want_accept") {
    out = errc::want_accept;
    return true;
  }
  if (in == "want_x509_lookup"
      || in == "caf::net::ssl::errc::want_x509_lookup") {
    out = errc::want_x509_lookup;
    return true;
  }
  if (in == "want_async"
      || in == "caf::net::ssl::errc::want_async") {
    out = errc::want_async;
    return true;
  }
  if (in == "want_async_job"
      || in == "caf::net::ssl::errc::want_async_job") {
    out = errc::want_async_job;
    return true;
  }
  if (in == "want_client_hello"
      || in == "caf::net::ssl::errc::want_client_hello") {
    out = errc::want_client_hello;
    return true;
  }
  if (in == "syscall_failed"
      || in == "caf::net::ssl::errc::syscall_failed") {
    out = errc::syscall_failed;
    return true;
  }
  if (in == "fatal"
      || in == "caf::net::ssl::errc::fatal") {
    out = errc::fatal;
    return true;
  }
  if (in == "unspecified"
      || in == "caf::net::ssl::errc::unspecified") {
    out = errc::unspecified;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<errc> in,
                  errc& out) {
  auto result = static_cast<errc>(in);
  switch (result) {
    default:
      return false;
    case errc::none:
    case errc::closed:
    case errc::want_read:
    case errc::want_write:
    case errc::want_connect:
    case errc::want_accept:
    case errc::want_x509_lookup:
    case errc::want_async:
    case errc::want_async_job:
    case errc::want_client_hello:
    case errc::syscall_failed:
    case errc::fatal:
    case errc::unspecified:
      out = result;
      return true;
  }
}

} // namespace caf::net::ssl

