#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel(int sz = 0, const string& tp = "");

    int getSize() const;
    void setSize(int sz);

    string getType() const;
    void setType(const string& tp);
};

#endif
