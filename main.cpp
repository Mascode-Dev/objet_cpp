// Nom des classes = Majuscules
// Nom des objets = Minuscules

// Compilation : g++ main.cpp -o main
#include <string>
#include <iostream>
#include "Personnage.h"
#include "Arme.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Personnage david, goliath;
    //Création de 2 objets de type Personnage : david et goliath
 
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    
	return 0;
}