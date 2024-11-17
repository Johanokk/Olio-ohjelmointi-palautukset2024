#include "student.h"
using namespace std;
Student::Student() : name(""), studentNumber(0), average(0.0) {}

void Student::setName(const std::string& n) {
    name = n;
}

void Student::setStudentNumber(int num) {
    studentNumber = num;
}

void Student::setAverage(double avg) {
    average = avg;
}

string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}
