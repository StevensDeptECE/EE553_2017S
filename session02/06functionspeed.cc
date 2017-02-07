#include <iostream>
using namespace std;

inline double f(double x) { return x * x; }

int main() {
	const long long n = 100000000LL;
	long long sum = 0;
	for (long long i = 1; i <= n; i++)
		sum = sum + f(i);
	cout << sum;	
	return 0;
}
