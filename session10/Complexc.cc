#include "Complexc.hh"

template<typename T>
Complex operator +(const Complex<T>& a, const Complex& b) {
	return Complex(a.real + b.real, a.imag + b.imag);
}

template<typename T>
ostream& operator <<(ostream& s, const Complex& c) {
	return s << '(' << c.real << "," << c.imag << ')';
}

//this is an old way to manually force generation of three types
// does not work any more!
//Complex<double>;
//Complex<float>;
//Complex<long double>;
