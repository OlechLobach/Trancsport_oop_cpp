#include "bicycle.h"

Bicycle::Bicycle() : Transport("Bicycle") {}

double Bicycle::calculateTime(int passengers, int cargo) const {
    return passengers * 0.5;
}

double Bicycle::calculateCost(int passengers, int cargo) const {
    return passengers * 1.0;
}