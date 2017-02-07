

class Vehicle {
  int speed;
public:
	int payToll();
};

class Car : public Vehicle { // IS_A is a kind of Vehicle
	string color;
};

class Bus : public Vehicle {
	int numPassengers;
};


class Airplane {
public:
	void fly();
};

class PassengerAirplane : public Airplane {
public:
	void serveCoffee();
};

class FighterAirplane : public Airplane {
public:
	void shoot();
};
	
class F22 : public FighterAirplane {

};
