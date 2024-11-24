#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef
{
public:

ItalianChef(const string &newName);


~ItalianChef();


void makePasta();


void printData() override;
};

#endif
