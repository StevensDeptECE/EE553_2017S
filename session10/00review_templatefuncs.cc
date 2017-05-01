#include <iostream>
#include <string>

using namespace std;


template<typename T>
T add(T a, T b) { return a + b; }

int main() {
	cout << add(5.4,4.4) << '\n';
	cout << add(5,4) << '\n';
	const string s1 = "5", s2 = "6";
	//	cout << add("5","4") << '\n';
	cout << add(s1,s2) << '\n';
	//	cout << add(5.5,4) << '\n';
	//	cout << add(4,5.4) << '\n';

}
