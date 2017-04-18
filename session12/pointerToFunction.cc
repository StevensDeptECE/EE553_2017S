#include <iostream>
using namespace std;

void f() {
	cout << "hello\n";
}

void g() {
	cout << "byte\n";
}

// WRONG: void *ptr();
void (*ptr)();  // ptr is a pointer to functions that take NO parameters, and return nothing

int main() {
	f();
	g();
	void* p = (void*)f;
  cout << p << "\n";

  ptr = f;
	ptr();
	ptr = g;
	ptr();
}
