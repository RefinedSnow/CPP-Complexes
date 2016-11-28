#include <iostream>
#include <ostream>
#include <cmath>
#include "complexe.h"
#include "complexes.h"
int main(){
	Complexe w(1,1);
	Complexe z(2,2);
	std::cout << "Normalisation de ";
	w.affiche();
	normalise(w);
	std::cout << "Rotation de ";
	w.affiche();
	rotation(w,(2*M_PI)/3); //rotation de 120°
	std::cout << "Plus grand module entre  ";
	w.affiche();
	std::cout << "et  ";
	z.affiche();
	pgModule(w,z).affiche();
	std::cout << "Initialisation du tableau statique  " <<std::endl;
	Complexe tab[10];
	racine(10,tab);

	return 0;
}