#include "CHorlogeDigitale.h"
#include <time.h>
#include <ctime>

void CHorlogeDigitale::OnTopHorloge() {

  if(ptrminutes->incrementer()==true)
  {
      ptrheure->incrementer();
  }
}

CHorlogeDigitale::CHorlogeDigitale() {

    ptrheure= new CCompteurDigital(24);
    ptrminutes= new CCompteurDigital(60);


}

std::string CHorlogeDigitale::getTime() {
    string affichage;
    string min;
    string heu;
    string deuxp=":";
    //valcpt_string=to_string(valCpt);
    min=(ptrminutes->getValCpt());
    heu=(ptrheure->getValCpt());
    affichage = heu + deuxp + min; //format hh:mm

    return affichage;




}
CHorlogeDigitale::~CHorlogeDigitale(){
    delete ptrheure;
    delete ptrminutes;
}

