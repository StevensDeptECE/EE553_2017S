#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream f("test.dat");
	for (int i = 0; i < 10000000; i++)
		f << i;

	// to read in...	ifstream

	return 0;
}
