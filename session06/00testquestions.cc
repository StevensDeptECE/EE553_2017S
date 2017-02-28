#include <iostream>
using namespace std;

void g(int& x) {
	cout << x;
	x--;
}
void h(int x) {
	x += 2;
	cout << x;
}

int main() {
	int x = 2;
	g(x);
	cout << x;
	for (int i = 1; i <=4; i++)
		h(x);
}
