//
//  Timer.hpp
//  tradingSystem
//
//  Created by Yue Zhang on 17/2/21.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <chrono>
#include <iostream>
using namespace std;

class Timer {
private:
    chrono::time_point<chrono::system_clock> start_timepoint;
public:
    Timer();
    ~Timer();
};


#endif /* Timer_hpp */
