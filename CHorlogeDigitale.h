/**
 * @file CCompteurDigital.h
 * @author Yanis Chibane
 * @version v1.0.0
 * @class CCompteurDigital
 * @brief The CCompteurDigital class
 * @brief permet d'utiliser l'horloge ainsi que les attributs de CCompteurDigital
 * @date 28/09/2023
 */
#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H
#include "CCompteurDigital.h"
class CHorlogeDigitale {

private:
    CCompteurDigital *ptrheure; //!<pointeur sur un objet CCompteur Digitale
    CCompteurDigital *ptrminutes; //!<pointeur sur un objet CCompteur Digitale

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
    ~CHorlogeDigitale();
};

#endif
