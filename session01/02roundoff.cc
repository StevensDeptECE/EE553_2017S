#include <iostream>
using namespace std;

int x = 0; // global variables are always initialized to binary 0

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << i;
	}
	cout << '\n';
	for (float x = 0.0; x <= 10.0f; x += .1f)
		cout << x << ' ';
	cout << '\n';

	float x; // x is visible after the loop is over
	for (x = 0.0; x <= 100000.0; x += .1f)  // x + y != x
		;
	cout << x << '\n';
	cout << '\n';

	double y;
	for (y = 0.0; y <= 10000000.0; y += .1)  // x + y != x
		;
	cout << y << '\n';
	cout << '\n';


	/*
    1/2 = 0.5
    1/4  = .25
		1/10 = 0.1
		1/3 = .3333333

		for a computer, stored in base 2  2^-1, 2^-2, 2^-3, 1/2, 1/4, 1/8, ...
		1/10 = 1/16 + 1/64 + 1/256 + ....

		in binary 1/10 = 0.0001010101010101010101.....

		




	 */


	
}
