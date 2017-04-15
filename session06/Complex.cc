#include <iostream>
using namespace std;

class Complex {

private:
	double r,i;
public:
	Complex(double r, double i) : r(r), i(i) {}
	friend Complex operator +(const Complex& a, const Complex& b) {
		return Complex(a.r + b.r, a.i + b.i);
	}
	friend ostream& operator <<(ostream& s, const Complex& c) {
		s << c.r << " + " << c.i << "i";
		return s;
	}
	
};
int main() {
	Complex a(2.5, 0.5);
	Complex b(1.5, 1.0);
	const Complex c = a + b;


	int a[5];
	int b;
	int c[10];

	// In JAVA ONLY
	int[] b, c; // NO, this isnt' C++
	b = new int[10];
	c = new int[20];
