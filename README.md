# trading system
---
A simple trading system that is able to match buy and sell orders. 

## Description

- Both long and short orders are organized in separate priority queues, where the queue for short orders has the minimun price on the top and the queue for long orders has the maximum price on the top.

- Each order come with different quantities, orders that are partially filled will not be pushed out from the queue, which reduce the operation complexity to `O(1)`.

## Benchmark

Capacity of 1m orders/s (with orders pre-generated).

```
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
 ```
