#ifndef TRUCK_HH_
#define TRUCK_HH_

#include "Vehicle.hh"

class Truck : public Vehicle {
private:
	int numPassengers;
	double weight;
	int axles;
public:
	Truck(int speed, double w, int axles) : Vehicle(speed),
																					weight(w), axles(axles) {}
	int payToll() const {
		return 20*axles;
	}

};

#endif
