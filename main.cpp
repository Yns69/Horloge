#include <iostream>
#include "CCompteurDigital.h"
#include "CHorlogeDigitale.h"

using namespace std;

int main()
{
    CCompteurDigital minutes (60);
    CCompteurDigital heure (24);
    CHorlogeDigitale horloge;


    //minutes.getValCptInt();
    //heure.getValCptInt();
    unsigned int cpt =0;
    unsigned int cpt2=0;

    while(cpt<60)
    {
        cpt++;
        minutes.incrementer();
    }
    while(cpt2<24)
    {
        cpt2++;
        heure.incrementer();
    }
    cout << horloge.getTime()<< endl;



}
