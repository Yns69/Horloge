#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H
#include "CCompteurDigital.h"
class CHorlogeDigitale {

private:
    CCompteurDigital *ptrheure; //pointeur sur un objet CCompteur Digitale
    CCompteurDigital *ptrminutes; //pointeur sur un objet CCompteur Digitale

public:
	/**
	 * Permet de faire évoluer la valeur du temps
	 */
	void OnTopHorloge();

	/**
	 * Recevoir le temps
	 */
	std::string getTime();

	CHorlogeDigitale();
};

#endif
