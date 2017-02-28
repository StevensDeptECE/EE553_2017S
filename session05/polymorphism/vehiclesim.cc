#include <iostream>
#include "SportsCar.hh"
#include "Bus.hh"
#include "Truck.hh"

using namespace std;

int main() {
	Car c1 (100, "Red");
	Bus b(55, 14); // speed, numpassengers
	SportsCar s1(140, "Blue", 400.0);
  Truck t(70, 18000, 5);
	cout << c1.payToll() << '\n';
	cout << b.payToll() << '\n';
	cout << s1.payToll() << '\n';
	cout << t.payToll() << '\n';
	
	Vehicle* p = &c1;
	cout << p->payToll(); // Car::payToll
	p = &b;
	cout << p->payToll() << "\n\n";

	Vehicle* array[5];
	array[0] = &c1;
	array[1] = &b;
	array[2] = &b;
	array[3] = &t;
	array[4] = &s1;

	for (int i = 0; i < 5; i++)
		cout << array[i]->payToll() << '\n';
	
	//	c1.drive();
	//	s1.drive();

	//ILLEGAL	Car* c = p;
	// base class pointer may
}
