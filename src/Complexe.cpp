
#include <iostream>
#include <ostream>
#include <cmath>
#include "complexe.h"

Complexe::Complexe()
{
    re = 0;
    im = 0;
}
Complexe::Complexe(double re, double im)
{
    this->re = re;
    this->im = im;
}
Complexe::Complexe(Complexe& y)
{
    re = y.re;
    im = y.im;
}
double Complexe::getReel()
{
    return re;
}
double Complexe::getIm()
{
    return im;
}
//ρ = |a + bi| = √(a^2+ b^2)
double Complexe::getModule()
{
    double res = 0;
    res = sqrt(pow(re, 2) + pow(im, 2));
    return res;
}
/*
	Argument θ =
	arctan(b/a) si a > 0
 	π + arctan(- b/a) si a > 0
 	π / 2 si a = 0
	*/
double Complexe::getArg()
{
    double arg = 0;
    if (re > 0)
    {
	arg = atan(im / re);
    }
    else if (re < 0)
    {
	arg = M_PI + atan((-1 * im) / re);
    }
    else if (re == 0)
    {
	arg = M_PI / 2;
    }
    return arg;
}
void Complexe::affiche()
{
    std::cout << re << "+i." << im;
}
void Complexe::echange()
{
    double tmp = 0;
    tmp = re;
    re = im;
    im = tmp;
}

Complexe operator+(Complexe x, Complexe y)
{
    Complexe res;
    res.re = x.getReel() + y.getReel();
    res.im = x.getIm() + y.getIm();
    return res;
}
Complexe operator-(Complexe x, Complexe y)
{
    Complexe res;
    res.re = x.getReel() - y.getReel();
    res.im -= x.getIm() - y.getIm();
    return res;
}
Complexe operator*(Complexe x, Complexe y)
{
    Complexe res;
    res.re = (x.getReel() * y.getReel()) - (x.getIm() * y.getIm());
    res.im = (x.getReel() + y.getIm()) + (x.getIm() * y.getReel());
    return res;
}