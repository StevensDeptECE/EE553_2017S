#include <iostream>
#include "mystring.hh"
using namespace std;

int main() {
	// Rule 1: Don't use exceptions as some kind of weird goto to break out for normal behavior
	try {
		for (int i = 0; ; i++)
			if (i >= 10000)
				throw "yow!";
	} catch (const char* msg) {
		cout << "this is not a good way to break out of a loop\n";
	}


	//Rule 2: Use exceptions to represent UNEXPECTED problems

	//Rule 3: Resource Allocation is initialization

	mystring s1(100000000000LL, 'q');
}
