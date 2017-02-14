class Fraction {
private:
	int num, den;
public:
	Fraction(int num, int den) : num(num), den(den) {}
	Fraction(int num) : num(num), den(1) {}
	Fraction() : num(0), den(1) {}
};

int main() {
	Fraction x(1,2);
	Fraction y(3);
	Fraction z();
	Fraction w;
	// Illegal: num is private	w.num = 5;
	z.num = 9;
}
