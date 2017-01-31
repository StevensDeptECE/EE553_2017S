#include <iostream>
using namespace std;

int main() {
	int x = 0;
	while (x < 10) {
		cout << x << ' ';
		x++;
	}
  cout << x << '\n';
	for (int i = 0; i < 10; i++)
		cout << i << ' ';
	
	cout << '\n' << endl;
	for (int i = 1; i >= 10; i++)
		cout << i << ' ' << flush;
	cout << '\n';
	for (int i = 3; i <= 10; i += 2)
		cout << i << ' ';
	cout << '\n';
	for (int i = 1; i < 100; i += i)
		cout << i << ' ';
	cout << '\n';

	int n;
	do {
		cin >> n;
	}	while (n < 5 || n > 19);
}
