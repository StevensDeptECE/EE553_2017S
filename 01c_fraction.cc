#include <iostream>
using namespace std;
// goal: represent numbers like 1/2, 2/3, 5/2, what about? 5/0

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
  void print() const {
		cout << num << "/" << den;	
	}
};

int main() {
  const Fraction a(1,2); // 1/2
	Fraction b(3);   // 3/1
	Fraction c;      // 1/1   -->   0/1     NOT 1/0
	a.print(); cout << ' ';
	b.print(); cout << ' ';
	c.print();
	cout << '\n';
}
