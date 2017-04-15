#include <iostream>
#include <string>
using namespace std;

template<typename Precision>
//typedef double Precision;
class Complex {
private:
	Precision real, imag;
public:
	Complex(Precision r, Precision i) : real(r), imag(i) {}

	Complex neg() const  {
		return Complex(-real, -imag);
	}

	friend Complex<Precision> operator +(Complex<Precision> a, Complex<Precision> b) {
		return Complex<Precision>(a.real+b.real, a.imag+b.imag);
	}
	friend Complex<Precision> operator -(Complex<Precision> a, Complex<Precision> b) {
		return Complex<Precision>(a.real - b.real, a.imag - b.imag);
	}
	friend ostream& operator <<(ostream& s, const Complex<Precision>& c) {
		return s << "(" << c.real << ", " << c.imag << ")";
	}
};

#if 0
template<typename Precision>
Complex<Precision> operator +(Complex<Precision> a, Complex<Precision> b) {
	return Complex(a.real+b.real, a.imag+b.imag);
}
#endif


class Person {
private:
	string fname, lname;
};

int main() {
	const	Complex<double> c1(1.5,2.0);
	Complex<double> c3 = c1.neg();
	//	Person p1, p2;
	//	Complex<Person> c2(p1,p2);
	Complex<string> c2("a","b");
	//TESTING is HARD!!!!	Complex<string> c4 = c2.neg();

	cout << c1 << '\n';
	cout << c2 << '\n';
	cout << c3 << '\n';

	List<Elephant> elephants;
	List<int> list1;
	// templates are not runtime
	//	cin  >> a;
	//	List<a >
}
