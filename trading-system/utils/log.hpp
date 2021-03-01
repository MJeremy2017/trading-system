//
//  log.hpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#ifndef log_hpp
#define log_hpp

#include <stdio.h>
#include "order.h"
#include "PriceCompare.hpp"
#include <queue>

//void printBQ(priority_queue<Order, vector<Order>, PriceCompareDesc> q);
class Log {
public:
    // a enum type with restricted values
    enum Level {
        LevelInfo = 0,
        LevelWarning = 1,
        LevelError = 2
    };
private:
    Level m_loglevel = LevelInfo;
public:
    void setLogLevel(Level logLevel);
    
    void info(const char* message);
    
    void warning(const char* message);
    
    void error(const char* message);
};

#endif /* log_hpp */
