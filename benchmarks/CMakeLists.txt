add_executable(reactive_benchmarks
  src/throughput.cpp
  src/latency.cpp
  src/resource.cpp
)

target_include_directories(reactive_benchmarks PRIVATE include)
target_include_directories(reactive_benchmarks PRIVATE ${RXCPP_INCLUDE_DIRS})

target_link_libraries(reactive_benchmarks PRIVATE
  CAF::core
  CAF::io
  benchmark::benchmark
  benchmark::benchmark_main
)

target_compile_definitions(reactive_benchmarks PRIVATE RXCPP_NO_DEPRECATED=1 CAF_NO_EXCEPTIONS=1)

target_compile_options(reactive_benchmarks PRIVATE -Wall -Wextra -Wpedantic)
