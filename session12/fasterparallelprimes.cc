#include <iostream>
#include <thread>
#include <unistd.h>
#include <cmath>
#include <future>

using namespace std;

bool isPrime(long long n) {
  for (long long i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return false;
	return true;
}


void countPrimes(promise<int> && p, long long min, long long max) {
	int count = 0;
	for (long long i = min; i < max; i += 2) {
		if (isPrime(i))
			count++;
	}
  p.set_value(count);	
}

unsigned long long  parallelPrimes(long long n) {
	long long unitOfWork = n / 10;
	long long count = 1;
	for (long long i = 3; i < n; i += 2*unitOfWork) {
		promise<int> p;
		promise<int> p2;
		auto f = p.get_future();
		auto f2 = p2.get_future();
		thread t1(countPrimes, p, i, i + unitOfWork);
		thread t2(countPrimes, p2, i+unitOfWork, i + 2*unitOfWork);
	  t1.join();
		t2.join();
		count += f.get();
		count += f2.get();
	}
	return count;
}

int main() {
	//	cout << countPrimesBad(100000) << '\n';
	//	cout << countPrimes(1000000) << '\n';
	cout << parallelPrimes(1000000) << '\n';
}
