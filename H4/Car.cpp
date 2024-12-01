#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& br, const string& mdl) : wheels(4), model(mdl), brand(br) {}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (auto& wheel : wheels) {
        wheel.setSize(17);
        wheel.setType("kesarengas");
    }
}

void Car::printDetails() const {
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << engine.getHorsepower() << "hp, "
         << engine.getDisplacement() << " L" << endl;

    for (size_t i = 0; i < wheels.size(); ++i) {
        cout << "Rengas " << (i + 1) << ":" << wheels[i].getSize() << " tuumaa, "
             << wheels[i].getType() << endl;
    }
}
