int a;
int dummy;
int a123;
// ILLEGAL:int 1a;
// ILLEGAL: int a+1;
int asdasfd12412_;
int _abc; // DON'T DO THIS.  VARIABLES BEGINNING WITH _ are reserved to the compiler
int __SYMBOLS__ // Don't do this: reserved to the standard


//__LINE__    // this is the line number in the current file
//__FILE__    // the file name you are in
//__FUNCTION__ ??????

class BadSize {
private:
	int linenum;
	const string filename;
public:
	BadSize(int linenum, const char filename[]) : linenum(linenum), filename(filename) {}
  friend ostream& operator <<(ostream& s, const BadSize& e) {
    return s << e.filename << ": " << linenum << '\n';
	}
};

class Matrix {
private:

public:
	friend Matrix operator +(const Matrix& a, const Matrix& b) {
		if (a.rows != b.rows || a.cols != b.cols)
			throw BadSize();
	}
