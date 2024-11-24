#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main()
{

Chef chef("Gordon Ramsay");


chef.makeSalad();
chef.makeSoup();


ItalianChef italianChef("Anthony Bourdain");


italianChef.makeSalad();
italianChef.makeSoup();
italianChef.makePasta();
italianChef.printData();

return 0;
}
