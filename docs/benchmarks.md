# Benchmarks

## Environments
### Env A: Lima VM on Macbook (ARM64)
- Host: MacBook Air, M4 chip, 24 GB
- VM: 4 vCPUs, 7.7GiB RAM, 38 GB disk, Ubuntu 26.04.1 LTS (Resolute Raccoon), kernel 7.0.0-38-generic
- Compilers: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0, clang++ 21.1.8; CMake 4.2.3
- Caveats: VM, no reliable hardware counters, shared CPU with macOS
- CPU: Apple M4, aarch64, 4vCPUs, 7.7 GiB RAM, 38 GB disk, 1 thread/core

## Methodology
- Build presets: relwithdebinfo/release only (only debug ran for initial benchmark test run)
- Dataset: <TBA>
- Command: ./build/<preset>/bench/orderbook_bench --benchmark_repetitions=N --benchmark_format=json
- Warmup / repetitions: <TBA>
- Isolation: <TBA>
- Correctness gate: <TBA>

## Results log
### 2026-10-24: First benchmarks and test runs
- Environment: A | Commit: e6f67abb17a3747fbf26c8052d6f62d9bc267955
- Preset: debug
- Change / Hypothesis: Placeholder tests, verifying the pipeline works
- Conclusion and next steps: Benchmarking for test runs works. Next steps are to begin implementing real order book code and logging benchmark runs in this logbook.