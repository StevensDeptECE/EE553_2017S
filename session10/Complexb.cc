#include <iostream>
using namespace std;

template<typename T>
class Complex {
private:
	T real, imag;
public:
	Complex(T r, T i) : real(r), imag(i) {}
  friend Complex operator +(const Complex& a, const Complex& b) {
		return Complex(a.real + b.real, a.imag + b.imag);
	}
	friend ostream& operator <<(ostream& s, const Complex& c) {
		return s << '(' << c.real << "," << c.imag << ')';
	}
};

int main() {
	const Complex<double> c1(1.5, 2.0);
	const Complex<double> c2(2.5, -1.0);
	const Complex<double> c3 = c1 + c2;
	cout << c3 << '\n';
}
