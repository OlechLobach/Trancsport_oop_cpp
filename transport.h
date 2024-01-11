#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<iostream>
#include <string>

class Transport {
public:
    Transport(std::string name);

    virtual double calculateTime(int passengers, int cargo) const = 0;
    virtual double calculateCost(int passengers, int cargo) const = 0;

    void displayInfo() const;

protected:
    std::string name;
};

#endif