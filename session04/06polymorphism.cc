//parent
// base class

// abstract class
class Vehicle {
private:
	int speed;
public:
	Vehicle(int s) : speed(s) {}
};

class Car : public Vehicle {
private:
	string color;
public:
	Car(int s, const string& c) : Vehicle(s), color(c) {}

};

//child
// derived class
class SportCar : public Car { // A SportsCar IS_A kind of Car
private:
	double horsePower; 
public:
	SportsCar(int s, const string& c, double h) : Car(s, c), horsePower(h) {}
};

class Bus : public Vehicle {
	int speed;
	int numPassengers;
	
};

int main() {
	Car c1 ("Red", 100);
	Bus b(55, 14); // speed, numpassengers
	SportsCar s1("Blue", 140, 400.0);
	c1.drive();
	s1.drive();
}
