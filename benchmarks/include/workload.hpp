#pragma once

#include <cstdint>
#include <vector>

namespace reactive_benchmark {

inline std::vector<int64_t> generate_sequence(int64_t count) {
  std::vector<int64_t> items;
  items.reserve(static_cast<size_t>(count));
  for (int64_t i = 0; i < count; ++i) {
    items.push_back(i);
  }
  return items;
}

inline void keep_from_optimizing(int64_t value) {
  asm volatile("" ::"r"(value) : "memory");
}

} // namespace reactive_benchmark
