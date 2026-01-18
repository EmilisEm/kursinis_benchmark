#include "caf/config.hpp"

CAF_PUSH_DEPRECATED_WARNING

#include "caf/test/block_type.hpp"

#include <string>
#include <string_view>

namespace caf::test {

std::string to_string(block_type x) {
  switch (x) {
    default:
      return "???";
    case block_type::test:
      return "test";
    case block_type::section:
      return "section";
    case block_type::scenario:
      return "scenario";
    case block_type::given:
      return "given";
    case block_type::and_given:
      return "and_given";
    case block_type::when:
      return "when";
    case block_type::and_when:
      return "and_when";
    case block_type::then:
      return "then";
    case block_type::and_then:
      return "and_then";
    case block_type::but:
      return "but";
  }
}

bool from_string(std::string_view in, block_type& out) {
  if (in == "test"
      || in == "caf::test::block_type::test") {
    out = block_type::test;
    return true;
  }
  if (in == "section"
      || in == "caf::test::block_type::section") {
    out = block_type::section;
    return true;
  }
  if (in == "scenario"
      || in == "caf::test::block_type::scenario") {
    out = block_type::scenario;
    return true;
  }
  if (in == "given"
      || in == "caf::test::block_type::given") {
    out = block_type::given;
    return true;
  }
  if (in == "and_given"
      || in == "caf::test::block_type::and_given") {
    out = block_type::and_given;
    return true;
  }
  if (in == "when"
      || in == "caf::test::block_type::when") {
    out = block_type::when;
    return true;
  }
  if (in == "and_when"
      || in == "caf::test::block_type::and_when") {
    out = block_type::and_when;
    return true;
  }
  if (in == "then"
      || in == "caf::test::block_type::then") {
    out = block_type::then;
    return true;
  }
  if (in == "and_then"
      || in == "caf::test::block_type::and_then") {
    out = block_type::and_then;
    return true;
  }
  if (in == "but"
      || in == "caf::test::block_type::but") {
    out = block_type::but;
    return true;
  }
  return false;
}

bool from_integer(std::underlying_type_t<block_type> in,
                  block_type& out) {
  auto result = static_cast<block_type>(in);
  switch (result) {
    default:
      return false;
    case block_type::test:
    case block_type::section:
    case block_type::scenario:
    case block_type::given:
    case block_type::and_given:
    case block_type::when:
    case block_type::and_when:
    case block_type::then:
    case block_type::and_then:
    case block_type::but:
      out = result;
      return true;
  }
}

} // namespace caf::test

