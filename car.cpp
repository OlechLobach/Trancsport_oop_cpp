#include "car.h"

Car::Car() : Transport("car") {}

double Car::calculateTime(int passengers, int cargo) const {
    return passengers * 0.1 + cargo * 0.05;
}

double Car::calculateCost(int passengers, int cargo) const {
    return passengers * 2.5 + cargo * 1.5;
}