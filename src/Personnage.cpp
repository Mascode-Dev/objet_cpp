#include <string>
#include "Personnage.h"

using namespace std;
	
	Personnage::Personnage(){
		m_vie = 100;
		m_mana = 100;
		m_nomArme = "Épée rouillé";
		tauxBouclier = 100;

		m_arme = new Arme(m_nomArme, m_degatsArme, m_durabiliteArme);
	}

	Personnage::Personnage(std::string nomArme, int degatsArme, int durabiliteArme) {
		m_vie = 100;
		m_mana = 100;
		this->m_nomArme = nomArme;
		this->m_degatsArme = degatsArme;
		this->m_durabiliteArme = durabiliteArme;
		m_arme = new Arme(m_nomArme, m_degatsArme, m_durabiliteArme);
		tauxBouclier = 100;
	}

	void Personnage::recevoirDegats(int nbDegats){
		m_vie -= nbDegats; // On enlève le nombre de dégats reçus à la vie du personnage

		if (m_vie < 0){

			m_vie = 0;
		}
	}

	void Personnage::attaquer(Personnage &cible){
		cible.recevoirDegats(m_arme->getDegats());
		// On inflige à la cible les dégats que cause l'arme
	}

	void Personnage::boirePotionDeVie(int quantitePotion){
		m_vie += quantitePotion;

		if (m_vie > 100){

			m_vie = 100;
		}
	}

	void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme, int durabiliteNouvelleArme){
		m_arme->changer(nomNouvelleArme, degatsNouvelleArme, durabiliteNouvelleArme);
	}

	void Personnage::prendreBouclier(int quantiteBouclier){
		tauxBouclier += quantiteBouclier;

		if (tauxBouclier > 100){

			tauxBouclier = 100;
		}
	}

	void Personnage::afficherEtat() const{
		cout << "Vie : " << m_vie << endl;
		cout << "Mana : " << m_mana << endl;
		m_arme->afficher();
	}

	bool Personnage::estVivant() const{
		
		return m_vie > 0;
	}

	Personnage::~Personnage() {
		delete m_arme;
	}