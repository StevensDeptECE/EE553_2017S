#ifndef SPORTSCAR_HH_
#define SPORTSCAR_HH_
#include "Car.hh"
//child
// derived class
class SportsCar : public Car { // A SportsCar IS_A kind of Car
private:
	double horsePower; 
public:
	SportsCar(int s, const std::string& c, double h) : Car(s, c), horsePower(h) {}
};
#endif
