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

static void rxcpp_latency(benchmark::State& state) {
  for (auto _ : state) {
    int64_t result = 0;
    rxcpp::from(rxcpp::Return(int64_t{1}))
        .select([](int64_t value) { return value * 2; })
        .subscribe([&](int64_t value) { result = value; });
    benchmark::DoNotOptimize(result);
  }
}

static void caf_latency(benchmark::State& state) {
  caf::actor_system_config cfg;
  caf::actor_system system{cfg};
  caf::scoped_actor self{system};

  for (auto _ : state) {
    auto worker = system.spawn([](caf::event_based_actor* self) -> caf::behavior {
      return {
          [](int64_t value) {
            return value * 2;
          }};
    });

    int64_t result = 0;
    self->request(worker, caf::infinite, int64_t{1})
        .receive([&](int64_t value) { result = value; },
                 [&](caf::error&) {
                   // Error handling - just mark as failed
                 });

    benchmark::DoNotOptimize(result);
    self->send_exit(worker, caf::exit_reason::user_shutdown);
  }
}

BENCHMARK(rxcpp_latency);
BENCHMARK(caf_latency);
