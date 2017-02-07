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

	// this->num  this->den    b.num  b.den     
	Fraction  add(const Fraction b) const {
		Fraction ans(this->num * b.den + this->den * b.num, this->den * b.den);
		return ans;
	}

	Fraction  add2(const Fraction b) const {
		Fraction ans(num * b.den + den * b.num, den * b.den);
		return ans;
	}

	Fraction  add3(const Fraction b) const {
		return Fraction(num * b.den + den * b.num, den * b.den);
	}

};



int main() {
  const Fraction a(1,2); // 1/2
	Fraction b(3);   // 3/1
	Fraction c;      // 1/1   -->   0/1     NOT 1/0
	cout << a << ' ' << b << '\n';
	Fraction d = a.add(b);
	//	Fraction d = a + b;




	
}
