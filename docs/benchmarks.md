# Benchmarks

## Environments
### Env A: Lima VM on Macbook (ARM64)
- Host: MacBook Air, M4 chip, 24 GB
- VM: 4 cores, 7.7Gi, 38G, Ubuntu 26.04.1 LTS (Resolute Raccoon), kernel 7.0.0-38-generic
- Compilers: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0, clang++ 21.1.8; CMake 4.2.3
- Caveats: VM, no reliable hardware counters, shared CPU with macOS
- CPU:
  - Architecture:                aarch64
  -   CPU op-mode(s):            64-bit
  -   Byte Order:                Little Endian
  - CPU(s):                      4
  -   On-line CPU(s) list:       0-3
  - Vendor ID:                   Apple
  -   Model name:                -
  -     Model:                   0
  -     Thread(s) per core:      1
  -     Core(s) per cluster:     4
  -     Socket(s):               -
  -     Cluster(s):              1
  -     Stepping:                0x0
  -     BogoMIPS:                48.00
  -     Flags:                   fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 asimddp sha512 asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp flagm2 frint i8mm bf16 bti afp sme smei16i64 smef64f64 smei8i32 smef16f32 smeb16f32 smef32f32 sme2 smei16i32 smebi32i32

## Methodology
- Build presets: relwithdebinfo/release only (only debug ran for initial benchmark test run)
- Dataset: <TBA>
- Command: cmake --preset (relwithdebinfo/release); cmake --build --preset (relwithdebinfo/release); ctest --test-dir build/(relwithdebinfo/release) --output-on-failure
- Warmup / repetitions: <TBA>
- Isolation: <TBA>
- Correctness gate: <TBA>

## Results log
### 2026-10-24: First benchmarks and test runs
- Environment: A | Commit: e6f67abb17a3747fbf26c8052d6f62d9bc267955
- Preset: debug
- Change / Hypothesis: Placeholder tests, verifying the pipeline works
- Conclusion and next steps: Benchmarking for test runs works. Next steps are to begin implementing real order book code and logging benchmark runs in this logbook.