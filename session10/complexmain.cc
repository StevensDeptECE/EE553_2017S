#include "Complexc.hh"

int main() {
	const Complex<double> c1(1.5, 2.0);
	const Complex<double> c2(2.5, -1.0);
	const Complex<double> c3 = c1 + c2;
	cout << c3 << '\n';
}
