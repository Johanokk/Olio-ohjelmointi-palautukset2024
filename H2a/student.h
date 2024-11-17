#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    Student();
    void setName(const std::string& n);
    void setStudentNumber(int num);
    void setAverage(double avg);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif
