#include <iostream>
using namespace std;

void hello() {
  cout << "hello";
}

void printDouble(int x) {
	cout << x * 2;
	x++;
}

double f(double x) { return x * x; }

int main() {
	hello();
	hello();
	for (int i = 0; i < 3; i++)
		printDouble(3);
	int sum = 0;
	for (int i = 1; i < 10; i++)
		sum = sum + f(i);
	
	return 0;
}
