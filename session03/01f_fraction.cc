#include <iostream>
using namespace std;
// goal: represent numbers like 1/2, 2/3, 5/2, what about? 5/0

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	friend ostream& operator <<(ostream& s, Fraction f) {
		s << f.num << "/" << f.den;
		return s;
	}

	friend Fraction  add(Fraction a, Fraction b);
	
	friend Fraction  operator+(Fraction a, Fraction b) {
		return Fraction(a.num * b.den + a.den * b.num, a.den * b.den);
	}

	friend Fraction  operator+(Fraction a) {
		return Fraction(a.num * b.den + a.den * b.num, a.den * b.den);
	}

};

Fraction  add(Fraction a, Fraction b) {
	return Fraction(a.num * b.den + a.den * b.num, a.den * b.den);
}


int main() {
  const Fraction a(1,2); // 1/2
	Fraction b(3);   // 3/1
	Fraction c;      // 1/1   -->   0/1     NOT 1/0
	cout << a << ' ' << b << '\n';
	Fraction d = a.add(b);
	d = add(a,b);
	d = a + b;




	
}
