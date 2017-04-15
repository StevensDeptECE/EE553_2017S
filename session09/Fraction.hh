#ifndef FRACTION_HH_
#define FRACTION_HH_

#include "DivByZero.hh"
#include <iostream>

class Fraction {
private:
	int num, den;
public:
	Fraction(int n, int d) throw (DivByZero) : num(n), den(d) {
		if (d == 0)
			throw DivByZero(__LINE__, __FILE__);
	}

	friend Fraction operator +(Fraction a, Fraction b) {
		return Fraction(a.num*b.den + b.num*a.den, a.den*b.den);
	}

	friend Fraction operator *(Fraction a, Fraction b) {
		return Fraction(a.num*b.num, a.den*b.den);
	}

	friend std::ostream& operator <<(std::ostream& s, Fraction f) {
		return s << f.num << '/' << f.den;
	}


};

#endif
