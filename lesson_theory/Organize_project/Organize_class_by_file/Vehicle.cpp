#include "Vehicle.h"
#include <iostream>
#include <string>


std::string Vehicle::getModelName() {
    return modelName;
}

void Vehicle::setModelName(std::string name) {
    modelName = name;
}

void Vehicle::run() {
    std::cout << "Vehicle is running...!\n";
}