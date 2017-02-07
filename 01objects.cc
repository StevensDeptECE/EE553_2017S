#include <iostream>
using namespace std;
// goal: represent numbers like 1/2, 2/3, 5/2, what about? 5/0

class Fraction {
private:
	int num, den;
public:
	//  Fraction(int n, int d) : num(n), den(d) {}
	//  Fraction(int n) : num(n), den(1) {}
	//  Fraction() : num(0), den(1) {}

	

	Fraction(int n = 0, int d = 1) : num(n), den(d) {}

};
/*
	class    object
	methods  messages

	class = specification of an object
	object = instance of a class

	encapsulation: hiding the details of an object internally (private)
*/


int main() {
  Fraction a(1,2); // 1/2
	Fraction b(3);   // 3/1
	Fraction c;      // 1/1   -->   0/1     NOT 1/0
	Fraction d();    // THIS IS NOT AN OBJECT (it's a function prototype)

#if 0
	int x = 3; // initialization

	int y;
	cout << y; // printing out random junk?
	y = 3; // assignment
#endif

}
