#ifndef CAR_HH_
#define CAR_HH_

#include "Vehicle.hh"
#include <string>

class Car : public Vehicle {
private:
	std::string color;
public:
	Car(int s, const std::string& c) : Vehicle(s), color(c) {}
  int payToll() const {
		return 12;
	}
};
#endif
