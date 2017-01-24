#include <iostream>
#include <cstdint>
using namespace std;

int x = 0; // global variables are always initialized to binary 0

int main() {
	cout << "hello";
	int a = 1;
	short int b = 2;
	long c; // variables on the stack (auto) are Uninitialized, RANDOM
	long long d;
	unsigned int e = 2;
  char f = 'x';

	for (int32_t i = 0; i < 100000; i++)
		;

	cout << 3 * 4 << '\n';
	cout << 3 + 4 << '\n';
	cout << 3 - 4 << '\n';
	cout << 3 / 4 << '\n';
	cout << 3 % 4 << 4 % 4 << 5 % 4 << 6 % 4 << '\n';
	cout << -3 % 4 << -4 % 4 << -5 % 4 << -6 % 4 << '\n';

	cout << 2 + 3 * 4 << '\n';  // order of operations = 14
	cout << 2 / 3 * 3 + 1 / 2 * 2 << '\n';
	cout << 2 * 3 / 3 + 1 * 2 / 3 << '\n';
	


	
}
