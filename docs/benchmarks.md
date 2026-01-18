# RxCpp vs CAF Benchmark Notes

This repo captures three reactive scenarios (throughput, latency, and resource pressure) implemented with both **RxCpp** and **CAF** so the libraries can be compared side by side.

## Scenarios

- **Throughput**: both frameworks stream a growing sequence of integers, accumulate the sum, and report how many values they can process per second at different scales (`1000` and `10000` elements). RxCpp uses its observable pipelines while CAF relies on an actor that consumes messages in a loop.
- **Latency**: a minimal turn-around measurement where a value is projected through a scheduler/actor and the result is returned immediately. This highlights the fixed overhead of invoking Rx operators versus CAF request/response semantics.
- **Resource allocation**: each sample allocates a small buffer, simulating work that stresses the allocator. The Rx path builds unique pointers in a pipeline while CAF dispatches the allocations through an actor and reports cumulative bytes.

## Building

1. Ensure you have a recent CMake (`>= 3.25`) and a C++20-capable compiler.
2. Configure & build the project:

   ```bash
   cmake -S /home/emilis/notes/kursinis/benchmark -B /home/emilis/notes/kursinis/benchmark/build
   cmake --build /home/emilis/notes/kursinis/benchmark/build
   ```

   The target executable is `reactive_benchmarks`.

## Running the comparison

Run the executable directly or use the helper script to collect CPU/memory snapshots (requires `psutil`).

```bash
pip install psutil
python benchmarks/scripts/collect_metrics.py --build-dir build --binary build/reactive_benchmarks --repetitions 3
```

The script builds the project (if needed), runs the benchmarks, samples CPU/memory every ~200ms, and writes a summary+raw output to `benchmarks/results/last_run.md`.

## Extending the comparison

- Add new benchmark files under `benchmarks/src/` and include them in `benchmarks/CMakeLists.txt`.
- Share helpers for workloads via `benchmarks/include/`.
- You can pass any Google Benchmark flags (e.g., `--benchmark_filter=throughput`) to the binary directly or via the script’s `--binary` argument.
