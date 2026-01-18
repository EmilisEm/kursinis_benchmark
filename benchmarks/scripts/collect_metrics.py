#!/usr/bin/env python3
"""
Run the benchmark suite, collect CPU/memory samples, and record the output.
"""

from __future__ import annotations

import argparse
import statistics
import subprocess
import sys
import time
from pathlib import Path

import psutil


def configure_and_build(build_dir: Path) -> None:
    build_dir.mkdir(parents=True, exist_ok=True)
    subprocess.run(["cmake", "-S", ".", "-B", str(build_dir)], check=True)
    subprocess.run(["cmake", "--build", str(build_dir)], check=True)


def sample_metrics(process: psutil.Popen) -> list[tuple[float, int]]:
    proc = psutil.Process(process.pid)
    proc.cpu_percent(None)  # prime the sampling
    samples: list[tuple[float, int]] = []
    while process.poll() is None:
        cpu = proc.cpu_percent(interval=0.2)
        mem = proc.memory_info().rss
        samples.append((cpu, mem))
    # capture final state
    samples.append((proc.cpu_percent(interval=0.0), proc.memory_info().rss))
    return samples


def format_bytes(value: int) -> str:
    for unit in ("B", "KiB", "MiB", "GiB"):
        if value < 1024:
            return f"{value:.2f}{unit}"
        value /= 1024
    return f"{value:.2f}TiB"


def summarize(samples: list[tuple[float, int]]) -> dict[str, str]:
    cpus = [cpu for cpu, _ in samples]
    mems = [mem for _, mem in samples]
    return {
        "cpu_avg": f"{statistics.mean(cpus):.2f}%",
        "cpu_peak": f"{max(cpus):.2f}%",
        "memory_avg": format_bytes(int(statistics.mean(mems))),
        "memory_peak": format_bytes(max(mems)),
    }


def run_benchmarks(binary: Path, output: Path, repetitions: int) -> None:
    command = [str(binary), "--benchmark_repetitions", str(repetitions)]
    process = psutil.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    samples = sample_metrics(process)
    stdout, _ = process.communicate()
    metrics = summarize(samples)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(
        "\n".join(
            (
                f"# Benchmark run ({time.strftime('%Y-%m-%d %H:%M:%S')})",
                "",
                "## Command",
                f"`{' '.join(command)}`",
                "",
                "## Metrics",
                "",
                f"- CPU avg: {metrics['cpu_avg']}",
                f"- CPU peak: {metrics['cpu_peak']}",
                f"- Memory avg: {metrics['memory_avg']}",
                f"- Memory peak: {metrics['memory_peak']}",
                "",
                "## Raw output",
                "```",
                stdout.strip(),
                "```",
            )
        )
    )


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Configure, build, and collect metrics from reactive benchmarks."
    )
    parser.add_argument("--build-dir", type=Path, default=Path("build"))
    parser.add_argument("--binary", type=Path, default=Path("build/reactive_benchmarks"))
    parser.add_argument("--repetitions", type=int, default=3)
    parser.add_argument("--output", type=Path, default=Path("benchmarks/results/last_run.md"))

    args = parser.parse_args()
    configure_and_build(args.build_dir)
    run_benchmarks(args.binary, args.output, args.repetitions)


if __name__ == "__main__":
    if not psutil.POSIX:
        print("This script expects a POSIX-compatible runtime.", file=sys.stderr)
        sys.exit(1)
    main()
