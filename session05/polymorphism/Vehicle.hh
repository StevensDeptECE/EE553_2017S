#ifndef VEHICLE_HH_
#define VEHICLE_HH_

// abstract class
class Vehicle {
private:
	int speed;
public:
	Vehicle(int s) : speed(s) {}
	int getSpeed() const {
		return speed;
	}
	virtual int payToll() const = 0; // pure virtual
};

#endif
