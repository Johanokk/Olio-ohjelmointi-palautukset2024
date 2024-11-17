#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() const {
        cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << yearModel << endl;
    }
};

int main() {
    unique_ptr<vector<Car>> carList = make_unique<vector<Car>>();

    Car car1("Toyota", "Corolla", 2019);
    Car car2("Audi", "RS6", 2016);
    Car car3("Mercedes-Benz", "s63", 2024);

    carList->push_back(car1);
    carList->push_back(car2);
    carList->push_back(car3);

    for (const auto& car : *carList) {
        car.printData();
        cout << endl;
    }

    return 0;
}
