#ifndef H_COMPLEXE
#define H_COMPLEXE


class Complexe
{
	private:
	double re;
	double im;
    public:
	Complexe();
	Complexe(double re, double im);
	Complexe(Complexe& y);
	~Complexe();
	double getReel() const;
	double getIm() const;
	double getModule() const;
	double getArg() const;
	void affiche();
	void echange();
	friend Complexe operator+(Complexe x, Complexe y);
	friend Complexe operator-(Complexe x, Complexe y);
	friend Complexe operator*(Complexe x, Complexe y);
};


#endif