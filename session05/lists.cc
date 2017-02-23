#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);

	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << '\n';
	vector<double> b;
	for (int i = 0; i < 100; i++)
		b.push_back(i+.5);
	cout << b[1050] << '\n';

	map<string, double> prices;
	prices["AAPL"] = 137.11;
	prices["IBM"] = 181.15;

	cout << prices["AAPL"] << '\n';
	//  cout << prices["X"] << "\n";

	for (auto x : a) {
		cout << x;
	}
	cout << '\n';
	for (auto& x : a) {
		x *= 2;
	}
	for (auto x : a) {
		cout << x;
	}



	
}
