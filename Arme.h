#include <string>
#include <iostream>

class Arme
{
	public:

	Arme();
	void changer(std::string nom, int degats);
	void afficher() const;
	int getDegats() const;
	~Arme();

	private:

	std::string m_nom;
	int m_degats;
	int m_durabilite;
};

