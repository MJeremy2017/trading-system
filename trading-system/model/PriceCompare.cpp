//
//  PriceCompare.cpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#include "PriceCompare.hpp"
#include "order.h"

bool PriceCompareDesc::operator() (Order* ord1, Order* ord2) {
    if (ord1->price != ord2->price) return ord1->price < ord2->price;
    else return ord1->time > ord2->time;
}

bool PriceCompareAsc::operator() (Order* ord1, Order* ord2) {
    if (ord1->price != ord2->price) return ord1->price > ord2->price;
    else return ord1->time > ord2->time;
}

