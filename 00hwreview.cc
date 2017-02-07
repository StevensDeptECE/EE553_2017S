#include <iostream>
#define _USE_CONSTANTS
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

void polar2rect(double r, double theta, double& x, double& y) {
	x = r * cos(theta);
	y = r * sin(theta);
}

int main() {
	int a = 2;
	int b = a;
	a++;
	cout << b << '\n';
	int& s = b;
	s = 5;

	double r = 10, theta = PI / 2;
	double x, y;

	polar2rect(r, theta, x, y);
}
