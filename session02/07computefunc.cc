#include <iostream>
#include <cmath>
using namespace std;

double hypot(double x, double y) {
	return sqrt(x*x + y*y);
}

void quadratic(double A, double B, double C, double& root1, double& root2) {
	double disc = sqrt(B*B - 4* A * C);
	root1 = (-B - disc) / (2*A);
	root2 = (-B + disc) / (2*A);
}

//pass by reference
// r and theta passed in, x and y are changed
void polar2rect(double r, double theta, double& x, double& y) {
	x = r * cos(theta);
	y = r * sin(theta);
}

// x and y passed in, changes r and theta
void rect2polar(double x, double y, double& r, double& theta) {
	r = sqrt(x*x+y*y);
	theta = atan2(y, x);
}



int main() {
	cout << hypot(3,4) << '\n'; // 5
	double root1, root2;
	quadratic(1, 2, 1, root1, root2);
	cout << root1 << ", " << root2 << '\n';
	quadratic(1, 2.00000001, 1, root1, root2);
	cout << root1 << ", " << root2 << '\n';

	//	int root3, root4;
	// cannot write a double& to an int!! the error is fantastically bad
	//	quadratic(1, 2, 1, root3, root4);
	
	double A = 1.0001, B = 2.000001, C = 1;

	double r = 3, theta = 30 * M_PI/180;
	double x, y;
	polar2rect(r, theta, x, y);

	rect2polar(x, y, r, theta);


}
