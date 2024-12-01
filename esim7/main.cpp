#include "cat.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<cat> catList;
    //luodaan Cat-luokan olioita
    cat objcat_1=cat("Karvinen","oranssi");
    cat objcat_2=cat("Monni","musta");
    cat objcat_3=cat("Miuku","valkoinen");

    //lisätään oliot listaan(vektoriin)
    catList.push_back(objcat_1);
    catList.push_back(objcat_2);
    catList.push_back(objcat_3);

    //tulostetaan listan ensimmäisen kissan tiedot
    catList[0].printData();
    //tulostetaan kaikkien kissojen tiedot
    cout<<"Kaikki kissat"<<endl;
    for(int x=0; x<=2; x++){
        catList[x].printData();
    }
//for-looppi, jos ei tiedetä alkioiden määrää
    cout<<"VERSIO2"<<endl;
    for(const cat& Cat: catList){
        cout<<"nimi="<<Cat.getName()<<" vari="<<Cat.getColor()<<endl;

    }

    return 0;
}
