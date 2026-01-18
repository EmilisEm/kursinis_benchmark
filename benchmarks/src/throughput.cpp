#include "workload.hpp"

#include <benchmark/benchmark.h>
#include <caf/all.hpp>
#include <caf/init_global_meta_objects.hpp>
#include <rxcpp/rx.hpp>

// Initialize CAF once before any benchmarks run
struct caf_initializer {
  caf_initializer() {
    caf::core::init_global_meta_objects();
  }
};
static caf_initializer g_caf_init;

namespace {

struct summing_state {
  int64_t sum = 0;
  int64_t received = 0;
  int64_t expected = 0;
  caf::actor reply;
};

auto summing_actor(caf::stateful_actor<summing_state>* self, int64_t expected,
                   caf::actor reply) -> caf::behavior {
  self->state.expected = expected;
  self->state.reply = std::move(reply);
  return {
      [self](int64_t value) {
        self->state.sum += value;
        if (++self->state.received >= self->state.expected) {
          self->send(self->state.reply, self->state.sum);
          self->quit();
        }
      }};
}

} // namespace

static void rxcpp_throughput(benchmark::State& state) {
  for (auto _ : state) {
    int64_t sum = 0;
    auto values = reactive_benchmark::generate_sequence(state.range(0));
    rxcpp::from(rxcpp::Iterate(std::move(values)))
        .subscribe([&](int64_t value) { sum += value; });
    benchmark::DoNotOptimize(sum);
  }
}

static void caf_throughput(benchmark::State& state) {
  caf::actor_system_config cfg;
  caf::actor_system system{cfg};
  caf::scoped_actor self{system};

  for (auto _ : state) {
    auto worker = system.spawn(summing_actor, state.range(0),
                               static_cast<caf::actor>(self));
    for (int64_t value = 0; value < state.range(0); ++value) {
      self->send(worker, value);
    }

    int64_t response = 0;
    self->receive([&](int64_t sum) { response = sum; });

    benchmark::DoNotOptimize(response);
  }
}

BENCHMARK(rxcpp_throughput)->Arg(1000)->Arg(10000);
BENCHMARK(caf_throughput)->Arg(1000)->Arg(10000);
