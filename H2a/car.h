#ifndef CAR_H
#define CAR_H
using namespace std;
#include <string>

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    void setBrand(const string& b);
    void setModel(const string& m);
    void setYearModel(int y);
    void printData() const;
};

#endif
