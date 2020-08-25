#pragma once

#include <string>
#include <iostream>
#include "Arme.h"

class Personnage
{
	public:

		Personnage();
		Personnage(std::string nomArme, int degatsArme, int durabiliteArme);
		void recevoirDegats(int nbDegats);
		void attaquer(Personnage &cible);
		void boirePotionDeVie(int quantitePotion);
		void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme, int durabiliteNouvelleArme);
		void prendreBouclier(int quantiteBouclier);
		void envoyerSorts(std::string sorts, int degatsSorts);
		void afficherEtat() const;
		bool estVivant() const;
		~Personnage();

	private:
		int m_vie;
		int m_mana;
		std::string m_arme;
		Arme* m_arme;
		int m_degatsArme;
		int m_durabiliteArme;
		int tauxBouclier;
};