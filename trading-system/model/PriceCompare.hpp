//
//  PriceCompare.hpp
//  tradingSystem
//
//  Created by Yue Zhang on 13/2/21.
//

#ifndef PriceCompare_hpp
#define PriceCompare_hpp

#include <stdio.h>
#include "order.h"

class PriceCompareDesc {
public:
    bool operator() (Order* ord1, Order* ord2);
};

class PriceCompareAsc {
public:
    bool operator() (Order* ord1, Order* ord2);
};


#endif /* PriceCompare_hpp */
