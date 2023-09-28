#include <iostream>
#include "CHorlogeDigitale.h"
//YanisChibane-28/09/2023
using namespace std;

int main()
{

    CHorlogeDigitale horloge;


    //minutes.getValCptInt();
    //heure.getValCptInt();
    unsigned int cpt =0;
    cout << horloge.getTime()<< endl;

    while(cpt<1500)
    {
        horloge.OnTopHorloge();
        cout << horloge.getTime()<< endl;
        cpt++;
    }
}
