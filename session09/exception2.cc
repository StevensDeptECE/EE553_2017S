#include <iostream>
using namespace std;

class DivByZero {
private:
	int linenum;
	const string filename;
public:
	DivByZero(int linenum, const char filename[]) : linenum(linenum), filename(filename) {}
  friend ostream& operator <<(ostream& s, const DivByZero& e) {
    return s << "Divide by 0 at " << e.filename << ": " << e.linenum;
	}
};

void g() throw (DivByZero){
	int x = 0, y = 2;
	if (x == 0)
		throw DivByZero(__LINE__, __FILE__);
	y / x;
}

void f() throw (DivByZero) {
	g();
}

int main() throw() {
	try {
		f();


	} catch(const DivByZero& e) {
		cout << e << '\n';
	}
}
