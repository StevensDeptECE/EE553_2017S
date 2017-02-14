#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int num, int den) : num(num), den(den) {}
	Fraction(int num) : num(num), den(1) {}
	Fraction() : num(0), den(1) {}
	friend ostream& operator <<(ostream& s, const Fraction f) {
		return s << f.num << "/" << f.den;
	}
	friend Fraction operator +(Fraction a, Fraction b) {
    return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
	}

	friend Fraction operator -(Fraction a, Fraction b) {
    return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);
	}

	friend Fraction operator -(Fraction a) {
		return Fraction(-a.num, a.den);
	}
  friend operator ++(Fraction a, double) { // a++

	}
  friend operator ++(Fraction a) { // ++a

	}
	
	void print() const {
		//		cout << this->num << "/" << this->den;
		cout << num << "/" << den;
	}
};

int main() {
	// Overload any operator you want, except for....
	//  a.b    Fraction::     sizeof(int)     ? :        .*
	
	const Fraction x(1,2);
	cout << x; // passed by value, x is not changed
	x.print();
	const Fraction y(1,3);
	Fraction z = x + y;
	Fraction w = x - y;
	Fraction f = -x;

	int a = 5;
	int b = a++; // add 1 to a, but FIRST b = a    b = 5, a = 6
	int c = ++a; // add 1 to a, then c = a     a = 7, c = 7
  a++;
	++a;

	// a = ???? 9
	int d = a++ + a++; // IMPLEMENTATION DEFINED (Don't DO THIS)

	int e = 3 > 4 ? 5 : 6;
}
