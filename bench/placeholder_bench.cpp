#include <benchmark/benchmark.h>
#include "placeholder.hpp"

static void BM_Placeholder(benchmark::State& state) {
    for (auto _ : state) {
        placeholder();
    }
}
BENCHMARK(BM_Placeholder);

BENCHMARK_MAIN();