//
//  order.cpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#pragma once
#include <iostream>
using namespace std;

struct Order {
    string order_id;
    double price;
    int quantity;
    long time;
    int direction;  // buy = 1, sell = 0
};
