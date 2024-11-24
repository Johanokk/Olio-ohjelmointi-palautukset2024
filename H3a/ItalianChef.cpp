#include "ItalianChef.h"


ItalianChef::ItalianChef(const string &newName)
: Chef(newName)
{
cout << "ItalianChef " << newName << " konstruktori" << endl;
}


ItalianChef::~ItalianChef()
{
cout << "ItalianChef " << getName() << " destruktori" << endl;
}


void ItalianChef::makePasta()
{
cout << "Italian Chef " << getName() << " makes pasta" << endl;
}


void ItalianChef::printData()
{
cout << "name of the Italian Chef is " << getName() << endl;
}
