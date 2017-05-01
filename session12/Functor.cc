#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class F {
public:
	double operator ()(double x) const {
		return x*x;
	}

};



double f(double x);

typedef double  (*FuncOneVar)(double x);

double euler(FuncOneVar f, double a, double b, int n) {
	double sum = 0;
	double h = (b - a) / n;
	int i;
	double x;
	for (i = 0, x = a; i <= n; x += h, i++)
		sum += f(x);
	return sum * h;
}


template<typename Func>
double euler2(Func f, double a, double b, int n) {
	double sum = 0;
	double h = (b - a) / n;
	int i;
	double x;
	for (i = 0, x = a; i <= n; x += h, i++)
		sum += f(x);
	return sum * h;
}


int main() {
	//	cout << setprecision(15) << euler(f, 0, 1, 1000000000) << '\n';
	cout << setprecision(15) << euler2(f, 0, 1, 1000000000) << '\n';
	
}
