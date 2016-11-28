#include <iostream>
#include <ostream>
#include <cmath>
#include "complexe.h"
#include "complexes.h"

//znorm = (a / √ a2+ b2) + (b / √ a2+ b2)i 
Complexe normalise(const Complexe x){
	double a  = x.getReel() / x.getModule();
	double b = x.getIm() / x.getModule();
	Complexe res(a,b);
	return res;
}
Complexe rotation(Complexe & x, double angle){
	double arg = x.getArg() + angle;
	double a = x.getModule() * cos(arg);
	double b = x.getModule() * sin(arg);
	Complexe res(a,b);
	return res;
}

Complexe & pgModule(Complexe & x, Complexe & y){
	if(x.getModule() < y.getModule()){
		return y;
	}
	return x;
}
//void racine(int nbElem, Complexe tab[]);
