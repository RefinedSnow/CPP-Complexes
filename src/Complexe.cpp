#include<cmath>

class Complexe{
	double re;
	double im;
	public :
	Complexe(){
		re = 0;
		im = 0;
	}
	Complexe(double re, double im){
		this->re = re;
		this->im = im;
	}
	Complexe(Complexe & y){
		Complexe r;
		r.re = y.re;
		r.im = y.im;
		return r;
	}
	double getReel(){
		return re;
	}
	double getIm(){
		return im;
	}
	//ρ = |a + bi| = √(a^2+ b^2)
	double getModule(){
		double res = 0;
		res = sqrt(pow(re,2) + pow(im,2));
		return res;
	}
	/*
	Argument θ =
	arctan(b/a) si a > 0
 	π + arctan(- b/a) si a > 0
 	π / 2 si a = 0
	*/
	double getArg(){
		double arg = 0;
		if(re > 0){
			arg = atan(im/re);
		}
		else if(re < 0){
			arg = m_pi + atan((-1*im)/re);
		}
		else if (re == 0){
			arg = m_pi / 2;
		}
		return arg;
	}
	void affiche(){
		cout << re <<"+i."<<im;
	}
	void echange(){
		double tmp = 0;
		tmp = re;
		re = im;
		im = tmp;
	}
};