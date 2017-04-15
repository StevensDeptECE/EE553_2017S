//parent
// base class

class Car {
private:
	string color;
	int speed;
public:
	Car(const string& c, int s) : color(c), speed(s) {}

};

//child
// derived class
class SportCar : public Car { // A SportsCar IS_A kind of Car
private:
	double horsePower; 
public:
	SportsCar(const string& c, int s, double h) : Car(c, s), horsePower(h) {}
};

int main() {
	Car c1 ("Red", 100);
	SportsCar s1("Blue", 140, 400.0);
	c1.drive();
	s1.drive();
}
