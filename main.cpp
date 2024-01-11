#include "car.h"
#include "bicycle.h"
#include "cart.h"

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    car.displayInfo();
    std::cout << "Transport Time: " << car.calculateTime(5, 200) << " hours" << std::endl;
    std::cout << "Transport Cost: " << car.calculateCost(5, 200) << " UAH" << std::endl;

    std::cout << std::endl;

    bicycle.displayInfo();
    std::cout << "Transport Time: " << bicycle.calculateTime(2, 50) << " hours" << std::endl;
    std::cout << "Transport Cost: " << bicycle.calculateCost(2, 50) << " UAH" << std::endl;

    std::cout << std::endl;

    cart.displayInfo();
    std::cout << "Transport Time: " << cart.calculateTime(8, 100) << " hours" << std::endl;
    std::cout << "Transport Cost: " << cart.calculateCost(8, 100) << " UAH" << std::endl;

    return 0;
}