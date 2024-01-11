#include "cart.h"

Cart::Cart() : Transport("cart") {}

double Cart::calculateTime(int passengers, int cargo) const {
    return passengers * 0.2 + cargo * 0.1;
}

double Cart::calculateCost(int passengers, int cargo) const {
    return passengers * 1.8 + cargo * 2.0;
}