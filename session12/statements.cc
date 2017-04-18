#include <iostream>
using namespace std;

static int seed;

unsigned int rand() {
	return seed = seed * 31097 + 37031;
}

bool isPrime(unsigned long long n) {
	for (long long i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

unsigned int countPrimes(unsigned long long N) {
	unsigned int count = 0;
	for (long long n = 2; n < N; n++) {
		for (long long i = 2; i < n; i++) {
			if (n % i == 0)
				goto notPrime;
		}
		count++;
	notPrime: ;
	}
  return count;
}


int main() {
	for (int i = 0; i < 10; i++)
		cout << i;

	for (; ;) {
		// infinite loop
	}

	for (int i = 0; ;i++)
		cout << i;

	for (int i = 1; i != 0; i++)
		cout << i;

	
	while (true) {
	}

	while (1) {}

	int r;
	do {
		cin >> r;
	} while (r <0 && r >2*M_PI);

	for (int i = 0; i < 10; i++)
		if (i % 5 == 4)
			break;
		else
			cout << i;

	for (int i = 0; i < 10; i++)
		if (i % 5 == 4)
			continue;
		else
			cout << i;   //01235678
	for (int i = 0; i < 10; i++)
		if (i % 5 != 4)
			cout << i;   //01235678

	
	
	isPrime(1510101);


	
	
