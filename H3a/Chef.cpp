#include "Chef.h"


Chef::Chef(const string &newName)
: name(newName)
{
cout << "Chef " << name << " konstruktori" << endl;
}


string Chef::getName() const
{
return name;
}


Chef::~Chef()
{
cout << "Chef " << name << " destruktori" << endl;
}


void Chef::makeSalad()
{
cout << "Chef " << name << " makes salad" << endl;
}


void Chef::makeSoup()
{
cout << "Chef " << name << " makes soup" << endl;
}


void Chef::printData()
{
cout << "name of the Italian Chef is " << name << endl;
}
