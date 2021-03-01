//
//  main.cpp
//  tradingSystem
//
//  Created by Yue Zhang on 7/2/21.
//

#include <iostream>
#include <vector>
#include <queue>
#include "OrderPool.hpp"
#include "log.hpp"
#include <ctime>
#include <benchmark/benchmark.h>
#include "Timer.hpp"
using namespace std;
#define LOG(x) cout << x << endl;

/*
 Run on (12 X 2600 MHz CPU s)
 CPU Caches:
   L1 Data 32 KiB (x6)
   L1 Instruction 32 KiB (x6)
   L2 Unified 256 KiB (x6)
   L3 Unified 12288 KiB (x1)
 Load Average: 1.56, 1.49, 1.44
 ------------------------------------------------------
 Benchmark            Time             CPU   Iterations
 ------------------------------------------------------
 BM_Matching 1017918253 ns   1016586000 ns            1
 */

static void BM_Matching(benchmark::State& state) {
    OrderPoolBuilder order_pool;
    for (auto _: state) {
        state.PauseTiming();
//        order_pool.init_orders((int)state.range(1000000), 22.9, 23.3, 100, false);
        order_pool.init_orders(1000000, 22.9, 23.3, 100, false);
        state.ResumeTiming();
        order_pool.run_matching(100000, false);
    }
}

//BENCHMARK(BM_Matching)->Arg(1)->Arg(10)->Complexity();
BENCHMARK(BM_Matching);
BENCHMARK_MAIN();
