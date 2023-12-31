/**
 * @file CCompteurDigital.h
 * @author Yanis Chibane
 * @version v1.0.0
 * @class CCompteurDigital
 * @brief Permet de gerer automatiquement l'incrementation
 * @date 28/09/2023
 */


#ifndef CCOMPTEURDIGITAL_H
#define CCOMPTEURDIGITAL_H
#include <iostream>
#include <string>
using namespace std;

/**
 * Permet de gerer automatiquement l'incrementation
 */
/**
 * @brief The CCompteurDigital class
 */
class CCompteurDigital {

private:

    unsigned short borneMax; //!<valeur max du compteur
    int valCpt; //!<incremente la valeure de l'heure et des minutes

public:
	/**
	 * Incremente le cpt de 1.
	 * RAZ automatique sir borne atteinte
	 * 
	 * Retour :
	 * false : pas de RAZ
	 * true : RAZ
     */
	bool incrementer();

	/**
	 * Retourne la valeur courante du compteur sous forme de chaine de caractère
	 */
	std::string getValCpt();

	/**
	 * Retourne la valeur sous forme entiere
	 */
	int getValCptInt();

	CCompteurDigital(/* La valeur max initiale */int pBorneMax);
};

#endif
