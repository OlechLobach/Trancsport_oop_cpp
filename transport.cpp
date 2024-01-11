#include "transport.h"
#include <iostream>

Transport::Transport(std::string name) : name(name) {}

void Transport::displayInfo() const {
    std::cout << "Transport: " << name << std::endl;
}