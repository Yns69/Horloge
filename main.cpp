#include <iostream>
#include "CHorlogeDigitale.h"

using namespace std;

int main()
{

    CHorlogeDigitale horloge;


    //minutes.getValCptInt();
    //heure.getValCptInt();
    unsigned int cpt =0;
    unsigned int cpt2=0;
    cout << horloge.getTime()<< endl;
    while(cpt<2)
    {
        horloge.OnTopHorloge();
        cout << horloge.getTime()<< endl;
    }





}
