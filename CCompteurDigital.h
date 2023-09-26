#ifndef CCOMPTEURDIGITAL_H
#define CCOMPTEURDIGITAL_H

/**
 * Permet de gerer automatiquement l'incrementation
 */
class CCompteurDigital {

private:
	/**
	 * La valeur max du compteur
	 */
	unsigned short borneMax;
	unsigned short valCpt;

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
