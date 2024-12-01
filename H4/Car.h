#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <vector>
#include <string>
using namespace std;

class Car {
private:
    Engine engine;
    vector<Wheel> wheels;
    string model;
    string brand;

public:
    Car(const string& br, const string& mdl);

    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif
