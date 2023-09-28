#include <iostream>
#include "CCompteurDigital.h"

using namespace std;

int main()
{
   CCompteurDigital minutes (60);
   CCompteurDigital heure (24);


   //minutes.getValCptInt();
   //heure.getValCptInt();
unsigned int cpt =0;
   while(cpt<60)
   {
       cpt++;
       minutes.incrementer();
   }
}
