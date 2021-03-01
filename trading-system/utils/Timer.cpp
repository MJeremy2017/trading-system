//
//  Timer.cpp
//  tradingSystem
//
//  Created by Yue Zhang on 17/2/21.
//

#include "Timer.hpp"

Timer::Timer() {
    start_timepoint = chrono::system_clock::now();
}

Timer::~Timer() {
    auto end_timepoint = chrono::system_clock::now();
    
    auto end_time = chrono::time_point_cast<chrono::milliseconds>(end_timepoint).time_since_epoch().count();
    auto start_time = chrono::time_point_cast<chrono::milliseconds>(start_timepoint).time_since_epoch().count();
    
    float duration = end_time - start_time;
    cout << "duration: " << duration << " ms" << endl;
}
