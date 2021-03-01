//
//  log.cpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#include "log.hpp"
#include <iostream>
#include "order.h"
using namespace std;

//void printBQ(priority_queue<Order, vector<Order>, PriceCompareDesc> q) {
//    while (!q.empty()) {
//        Order ord = q.top();
//        q.pop();
//        printf("orderID -> %s, price -> %f, time -> %ld, direction -> %d",
//               ord.order_id.c_str(), ord.price, ord.time, ord.direction);
//        cout << endl;
//    }
//}

void Log::setLogLevel(Level logLevel) {
    m_loglevel = logLevel;
}

void Log::info(const char* message) {
    if (m_loglevel <= LevelInfo)
        cout << "[Info] " << message << endl;
}

void Log::warning(const char* message) {
    if (m_loglevel <= LevelWarning)
        cout << "[Warning] " << message << endl;
}

void Log::error(const char* message) {
    if (m_loglevel <= LevelError)
        cout << "[Error] " << message << endl;
}
