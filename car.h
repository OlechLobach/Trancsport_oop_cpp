#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "transport.h"

class Car : public Transport {
public:
    Car();

    double calculateTime(int passengers, int cargo) const override;
    double calculateCost(int passengers, int cargo) const override;
};

#endif