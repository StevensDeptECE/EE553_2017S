class Fraction {
private:
	const int num, den;
public:
	// initializer list syntax is preferred
	// in this case, it is the only one that works
	Fraction(int num, int den) : num(num), den(den) {}

	// this would not work because num must already be set, it's const
	Fraction(int num, int den) {
		this->num = num;
		this->den = den;
	}

};

int main() {
	Fraction x(1,2);
	int a;
	a = 5;
	int b = 5;

	//const initialization vs. assignment
	const int c = 5;
	const int d;
	d = 5;
}
