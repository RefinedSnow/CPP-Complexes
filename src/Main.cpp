#include <iostream>
#include <ostream>
#include "complexe.h"
#include "complexes.h"
int main(){
	Complexe w(1,1);
	std::cout << "Normalisation de ";
	w.affiche();
	normalise(w);
	//n.affiche();
	return 0;
}