#ifndef DIVBYZERO_HH_
#define DIVBYZERO_HH_

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

#endif
