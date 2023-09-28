#include "CCompteurDigital.h"

bool CCompteurDigital::incrementer() {

valCpt++;

if (valCpt==borneMax)
{
    valCpt=0;
    return true;
}
return false;

}

std::string CCompteurDigital::getValCpt() {

string valcpt_string;

valcpt_string=to_string(valCpt);

if (valCpt<10) {
           valcpt_string= "0" + valcpt_string; //si un seul zero, ajt un zero
        }
return valcpt_string;
}

int CCompteurDigital::getValCptInt() {

   return valCpt;
}

CCompteurDigital::CCompteurDigital(int pBorneMax) {

    borneMax=pBorneMax;
    this->valCpt=0;


}
