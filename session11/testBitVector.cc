#include "BitVec.hh"

//BitVec<1000000> b2;
//Stack<256> s;
int main() {
	const int n = 1000000;
	BitVec b(n);
	for (int i = 0; i < n; i += 17)
		b.set(i);
	for (int i = 0; i < n; i += 19)
		b.set(i);
	for (int i = 0; i < n; i++)
		b.toggle(i);
	for (int i = 0; i < n; i++)
		if (!b.isSet(i) && i % 4 == 0 && i % 21)
			cout << i << ' ';
	cout << '\n';
}
