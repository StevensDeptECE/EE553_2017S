#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	double d = 5.5 + 2.75;
	cout << d << '\n';
	cout << fixed << setprecision(15) << d << '\n';
	cout << setw(10) << setprecision(8) << d << "\n";

	
	vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << '\n';
	auto x = 5;
	auto y = 5.2;

	for (auto z : a) {
		cout << z;
	}
	cout << '\n';
	
	for (auto& z : a)
		z *= 2;
	
	for (auto z : a) {
		cout << z;
	}
	cout << '\n';

	int perm[] = {1, 2, 3, 4};
	do {
		for (auto p : perm)
			cout << p << ' ';
		cout << '\n';
	} while (std::next_permutation(&perm[0], &perm[4]));

	string s = "123 9876 12345";
	istringstream f(s);
	int r,s,t;
  f >> r >> s >> t;	
}
