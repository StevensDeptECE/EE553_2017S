#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sum = 0;
	for (float i = 1; i < 100; i++) {
		sum += 1.0/i;
		cout << setprecision(15) << sum << ' ';
	}
	cout << sum << endl;
	return 0;
}
	
