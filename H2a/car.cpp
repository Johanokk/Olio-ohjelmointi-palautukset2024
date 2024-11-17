#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : brand(""), model(""), yearModel(0) {}

void Car::setBrand(const std::string& b) {
    brand = b;
}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
}
