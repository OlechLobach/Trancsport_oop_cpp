#include "car.h"
#include "bicycle.h"
#include "cart.h"

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    car.displayInfo();
    cout << "Transport Time: " << car.calculateTime(5, 200) << " hours" << endl;
    cout << "Transport Cost: " << car.calculateCost(5, 200) << " UAH" << endl;

    cout << endl;

    bicycle.displayInfo();
    cout << "Transport Time: " << bicycle.calculateTime(2, 50) << " hours" << endl;
    cout << "Transport Cost: " << bicycle.calculateCost(2, 50) << " UAH" << endl;

    cout << endl;

    cart.displayInfo();
    cout << "Transport Time: " << cart.calculateTime(8, 100) << " hours" << endl;
    cout << "Transport Cost: " << cart.calculateCost(8, 100) << " UAH" << endl;

    return 0;
}