#ifndef CART_H
#define CART_H
#include<iostream>
#include "transport.h"

class Cart : public Transport {
public:
    Cart();

    double calculateTime(int passengers, int cargo) const override;
    double calculateCost(int passengers, int cargo) const override;
};

#endif