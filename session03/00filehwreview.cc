#include <iostream>
#include <fstream>

int main() {
	ifstream f("file.dat");
	int n;
	f >> n;
	int x[n]; // int* x = new int[n];  ... delete [] x;

	for ...

		f >> x[i]
