#ifndef H_COMPLEXES
#define H_COMPLEXES

Complexe normalise(const Complexe x);
Complexe rotation(Complexe & x, double angle);
Complexe & pgModule(Complexe & x, Complexe & y);
void racine(int nbElem, Complexe tab[]);

#endif