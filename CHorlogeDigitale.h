#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H
#include "CCompteurDigital.h"
class CHorlogeDigitale {

private:
	CCompteurDigital heure;
	CCompteurDigital minutes;

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
