#include "CCompteurDigital.h"

bool CCompteurDigital::incrementer() {

valCpt++;

if (valCpt==borneMax)
{
    valCpt=0;
    return true;
}
cout<< valCpt << endl;
return false;

}

std::string CCompteurDigital::getValCpt() {

string valcpt_string;

valcpt_string=to_string(valCpt);
return valcpt_string;
}

int CCompteurDigital::getValCptInt() {

   return valCpt;
}

CCompteurDigital::CCompteurDigital(int pBorneMax) {

    borneMax=pBorneMax;
    this->valCpt=0;


}
