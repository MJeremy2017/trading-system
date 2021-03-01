//
//  OrderPool.hpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#ifndef OrderPool_hpp
#define OrderPool_hpp

#include <stdio.h>
#include "order.h"
#include "PriceCompare.hpp"
#include <queue>
#include <ctime>

class OrderPoolBuilder {
public:
    int n_orders = 0;
    // buy order ordered by price descending
    priority_queue<Order*, vector<Order*>, PriceCompareDesc> buy_q;
    // sell order ordered by price
    priority_queue<Order*, vector<Order*>, PriceCompareAsc> sell_q;

    void init_orders(int num, double price_low, double price_high, int quantity_high, bool verbose);
    
    void add_buy_order(Order* ord);
    
    void add_sell_order(Order* ord);
    
    void run_matching(int mod, bool verbose);

};


#endif /* OrderPool_hpp */
