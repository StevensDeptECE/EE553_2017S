#ifndef COMPLEXC_HH_
#define COMPLEXC_HH_

#include <iostream>
using namespace std;

template<typename T>
class Complex {
private:
	T real, imag;
public:
	Complex(T r, T i) : real(r), imag(i) {}
  friend Complex operator +(const Complex& a, const Complex& b);
	friend ostream& operator <<(ostream& s, const Complex<T>& c);
};
#endif

