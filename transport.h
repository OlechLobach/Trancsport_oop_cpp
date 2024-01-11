#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<iostream>
#include <string>
using namespace std;


class Transport {
public:
    Transport(string name);

    virtual double calculateTime(int passengers, int cargo) const = 0;
    virtual double calculateCost(int passengers, int cargo) const = 0;

    void displayInfo() const;

protected:
    string name;
};

#endif