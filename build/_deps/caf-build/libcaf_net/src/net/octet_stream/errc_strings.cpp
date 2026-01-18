#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/net/octet_stream/errc.hpp"

#include <string>
#include <string_view>

namespace caf::net::octet_stream {

std::string to_string(errc x) {
  switch (x) {
    default:
      return "???";
    case errc::temporary:
      return "temporary";
    case errc::want_read:
      return "want_read";
    case errc::want_write:
      return "want_write";
    case errc::permanent:
      return "permanent";
  }
}

bool from_string(std::string_view in, errc& out) {
  if (in == "temporary"
      || in == "caf::net::octet_stream::errc::temporary") {
    out = errc::temporary;
    return true;
  }
  if (in == "want_read"
      || in == "caf::net::octet_stream::errc::want_read") {
    out = errc::want_read;
    return true;
  }
  if (in == "want_write"
      || in == "caf::net::octet_stream::errc::want_write") {
    out = errc::want_write;
    return true;
  }
  if (in == "permanent"
      || in == "caf::net::octet_stream::errc::permanent") {
    out = errc::permanent;
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
    case errc::temporary:
    case errc::want_read:
    case errc::want_write:
    case errc::permanent:
      out = result;
      return true;
  }
}

} // namespace caf::net::octet_stream

