#include "transport.h"
#include <iostream>

Transport::Transport(string name) : name(name) {}

void Transport::displayInfo() const {
    cout << "Transport: " << name << endl;
}