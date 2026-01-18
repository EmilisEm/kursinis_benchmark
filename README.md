# RxCpp vs CAF Benchmark Comparison

This repository contains benchmarks comparing **RxCpp** and **CAF** (C++ Actor Framework) across three reactive programming scenarios: throughput, latency, and resource usage.

## Overview

The project implements matched benchmark suites for both libraries to provide a fair comparison of their performance characteristics. All benchmarks use Google Benchmark for measurement and are built with CMake.

## Scenarios

- **Throughput**: Both frameworks stream a sequence of integers, accumulate the sum, and measure how many values they can process per second at different scales (1000 and 10000 elements). RxCpp uses observable pipelines while CAF relies on actors that consume messages.
- **Latency**: A minimal turn-around measurement where a value is transformed and returned immediately. This highlights the fixed overhead of invoking Rx operators versus CAF request/response semantics.
- **Resource Allocation**: Each sample allocates a small buffer, simulating work that stresses the allocator. The Rx path processes values in a pipeline while CAF dispatches allocations through an actor.

## Building

### Prerequisites

- CMake (>= 3.10)
- C++17 compatible compiler (GCC, Clang, or MSVC)
- Python 3 (optional, for metric collection script)

### Build Steps

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

The benchmark executable will be located at `build/benchmarks/reactive_benchmarks`.

## Running Benchmarks

### Direct Execution

```bash
./build/benchmarks/reactive_benchmarks --benchmark_min_time=0.5
```

### With Metric Collection

The project includes a Python script to collect CPU and memory metrics during benchmark execution:

```bash
pip install psutil
python benchmarks/scripts/collect_metrics.py
```

This script will:
- Build the project if needed
- Run all benchmarks
- Collect CPU and memory usage metrics
- Save results to `benchmarks/results/last_run.md`

## Project Structure

```
.
├── CMakeLists.txt              # Root CMake configuration
├── benchmarks/
│   ├── CMakeLists.txt         # Benchmark build configuration
│   ├── include/               # Shared headers
│   ├── src/                   # Benchmark source files
│   │   ├── throughput.cpp    # Throughput benchmarks
│   │   ├── latency.cpp       # Latency benchmarks
│   │   └── resource.cpp      # Resource usage benchmarks
│   ├── scripts/               # Helper scripts
│   └── results/               # Benchmark results
└── docs/                      # Documentation
```

## Dependencies

The project uses CMake's `FetchContent` to automatically download and build:
- **RxCpp**: Reactive Extensions for C++
- **CAF**: C++ Actor Framework (v0.19.6)
- **Google Benchmark**: Microbenchmarking library

## Extending the Benchmarks

- Add new benchmark files under `benchmarks/src/` and include them in `benchmarks/CMakeLists.txt`
- Share common workload helpers via `benchmarks/include/`
- Pass Google Benchmark flags directly to the executable (e.g., `--benchmark_filter=throughput`)

## License

See individual dependency licenses for their respective terms.
