#ifndef BICYCLE_H
#define BICYCLE_H
#include<iostream>
#include "transport.h"

class Bicycle : public Transport {
public:
    Bicycle();

    double calculateTime(int passengers, int cargo) const override;
    double calculateCost(int passengers, int cargo) const override;
};

#endif
