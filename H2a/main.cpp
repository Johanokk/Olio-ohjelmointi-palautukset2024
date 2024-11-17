#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Vaihe 1: Car-luokka
    Car myCar; // Pinomuisti
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);
    cout << "Car details:" << endl;
    myCar.printData();

    // Vaihe 2: Rectangle-luokka
    Rectangle* myRectangle = new Rectangle();
    myRectangle->setWidth(5.0);
    myRectangle->setHeight(3.0);
    cout << "\nRectangle details:" << endl;
    cout << "Area: " << myRectangle->getArea() << endl;
    cout << "Circumference: " << myRectangle->getCircum() << endl;
    delete myRectangle;

    // Vaihe 3: Student-luokka
    shared_ptr<Student> student = make_shared<Student>(); // Smart pointer
    student->setName("Teppo Testi");
    student->setStudentNumber(1007);
    student->setAverage(8.8);
    cout << "\nStudent details:" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Student Number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
