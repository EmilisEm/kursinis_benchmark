#include "workload.hpp"

#include <benchmark/benchmark.h>
#include <caf/all.hpp>
#include <caf/init_global_meta_objects.hpp>
#include <memory>
#include <rxcpp/rx.hpp>

// Initialize CAF once before any benchmarks run
struct caf_initializer {
  caf_initializer() {
    caf::core::init_global_meta_objects();
  }
};
static caf_initializer g_caf_init;

namespace {

struct allocator_state {
  int64_t total_bytes = 0;
  int64_t received = 0;
  int64_t expected = 0;
  caf::actor reply;
};

auto allocator_actor(caf::stateful_actor<allocator_state>* self, int64_t expected,
                     caf::actor reply) -> caf::behavior {
  self->state.expected = expected;
  self->state.reply = std::move(reply);
  return {
      [self](int64_t value) {
        auto buffer =
            std::make_unique<std::vector<char>>(static_cast<size_t>(64 + value % 128));
        self->state.total_bytes += static_cast<int64_t>(buffer->size());
        if (++self->state.received >= self->state.expected) {
          self->send(self->state.reply, self->state.total_bytes);
          self->quit();
        }
      }};
}

} // namespace

static void rxcpp_resource(benchmark::State& state) {
  for (auto _ : state) {
    int64_t total = 0;
    auto values = reactive_benchmark::generate_sequence(state.range(0));
    rxcpp::from(rxcpp::Iterate(std::move(values)))
        .select([](int64_t value) {
          // Simulate allocation by returning size
          return static_cast<int64_t>(64 + value % 128);
        })
        .subscribe([&](int64_t size) {
          total += size;
        });
    benchmark::DoNotOptimize(total);
  }
}

static void caf_resource(benchmark::State& state) {
  caf::actor_system_config cfg;
  caf::actor_system system{cfg};
  caf::scoped_actor self{system};

  for (auto _ : state) {
    auto actor = system.spawn(allocator_actor, state.range(0),
                              static_cast<caf::actor>(self));

    for (int64_t value = 0; value < state.range(0); ++value) {
      self->send(actor, value);
    }

    int64_t total_bytes = 0;
    self->receive([&](int64_t sum) { total_bytes = sum; });

    benchmark::DoNotOptimize(total_bytes);
  }
}

BENCHMARK(rxcpp_resource)->Arg(500);
BENCHMARK(caf_resource)->Arg(500);
