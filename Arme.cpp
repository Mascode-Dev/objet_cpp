#include <string>
#include <iostream>
#include "Arme.h"

using namespace std;

Arme::Arme(){
	m_durabilite = 30;
	m_degats = 10;
	m_nom = "Épée rouillée";
}

Arme::Arme(string nom, int degats, int durabilite){
	m_nom = nom;
	m_degats = degats;
	m_durabilite = durabilite;
}

void Arme::changer(string nom, int degats, int durabilite){
	m_nom = nom;
	m_degats = degats;
	m_durabilite = durabilite;
}

void Arme::afficher() const{
	cout << "Arme : " << m_nom << "(Dégâts : " << m_degats << ")" << endl;
}

int Arme::getDegats() const{
	return m_degats;
}

Arme::~Arme(){

}