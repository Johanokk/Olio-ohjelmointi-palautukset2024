#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>
using namespace std;

class Chef
{
private:
string name; // Kokin nimi

public:

Chef(const string &newName);


string getName() const;


virtual ~Chef();


virtual void makeSalad();
virtual void makeSoup();


virtual void printData();
};

#endif
