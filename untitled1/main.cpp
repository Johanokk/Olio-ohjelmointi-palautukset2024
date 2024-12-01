#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define SEPARATOR "#<ab@17943918#@>#"

class MyClass {
private:
    int number1;  // Private jäsenmuuttuja
    int number2;  // Private jäsenmuuttuja

public:
    MyClass();  // Konstruktori
    ~MyClass(); // Destruktori

    int calculateResult() const;  // Public metodi
    void setNumber1(int a);  // Public metodi
    void setNumber2(int a);  // Public metodi
};


myClass::myClass()
{
    setNumber1(2);
    setNumber2(3);
}

int myClass::calculateResult()
{
    result = number1 + number2;
    return result;
}

void myClass::setNumber1(int a)
{
    number1 = a;
}
void myClass::setNumber2(int a)
{
    number2 = a;
}


int main() {
    {
        ;
        myClass object;  // Luokan konstruktori asettaa number1 = 2 ja number2 = 3
        cout<<"lukujen 2 ja 3 summa = "<<object.calculateResult()<<endl;;
    }
    cout << SEPARATOR << endl;   {
        ;
        myClass object;
        cout<<"laskun tulos on muuttujassa result = "<<object.result<<endl;;
    }
    return 0;
}
