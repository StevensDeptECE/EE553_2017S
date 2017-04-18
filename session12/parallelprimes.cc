#include <iostream>
#include <thread>
#include <unistd.h>
#include <cmath>
using namespace std;
// count primes up to n=1000,000,000

int countPrimesBad(long long n) {
	int count = 0;
	for (long long i = 2; i < n; i ++) {
		for (long long j = 2; j < i; j ++) // 0 + 1 + 2 + ... + n = n(n+1)/2 
			if (i % j == 0)
				goto notPrime;
		count++;
	notPrime: ;
	}
	return count;
}


//   28 =  2*14   4*7
// O(n * sqrt(n))
int countPrimes(long long n) {
	int count = 1; //2
	for (long long i = 3; i < n; i += 2) {
		for (long long j = 3; j <= sqrt(i); j += 2) // 0 + 1 + 2 + ... + n = n(n+1)/2 
			if (i % j == 0)
				goto notPrime;
		count++;
	notPrime: ;
	}
	return count;
}

int parallelPrimeCount = 1; //2

void isPrime(long long n) {
  for (long long i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return;
	parallelPrimeCount++;
}


int countPrimesParallel(long long n) {
	for (long long i = 3; i < n; i += 4) {
		thread t1(isPrime, i);
		thread t2(isPrime, i+2);
		t1.join();
		t2.join();
	}
	return parallelPrimeCount;
}

int main() {
	//	cout << countPrimesBad(100000) << '\n';
	//	cout << countPrimes(1000000) << '\n';
	cout << countPrimesParallel(1000000) << '\n';
}
