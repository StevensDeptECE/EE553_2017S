#ifndef BUS_HH_
#define BUS_HH_

#include "Vehicle.hh"

class Bus : public Vehicle {
private:
	int numPassengers;
public:
	Bus(int speed, int numPassengers) : Vehicle(speed), numPassengers(numPassengers) {}
	int payToll() const {
		return 3;
	}

};

#endif
