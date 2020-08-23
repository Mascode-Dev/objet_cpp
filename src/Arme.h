#pragma once

#include <string>
#include <iostream>

class Arme
{
	public:

	Arme();
	Arme(std::string nom, int degats, int durabilite);
	void changer(std::string nom, int degats, int durabilite);
	void afficher() const;
	int getDegats() const;
	~Arme();

	private:

	std::string m_nom;
	int m_degats;
	int m_durabilite;
};

