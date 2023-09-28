#include "CHorlogeDigitale.h"

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
    min=to_string(ptrminutes->getValCptInt());
    heu=to_string(ptrheure->getValCptInt());
    affichage=heu+=deuxp+=min;

    return affichage;
}
CHorlogeDigitale::~CHorlogeDigitale(){
    delete ptrheure;
    delete ptrminutes;
}

