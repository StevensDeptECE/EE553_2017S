#include <iostream>
#include "SportsCar.hh"
#include "Bus.hh"
#include "Truck.hh"

using namespace std;

/**
	 Simulate a number of different vehicles going through tolls
 */
class TrafficSim {
private:
	vector< vehicle* > vehicles;
public:
	TrafficSim(int numVehicles) {
		default_random_engine generator;
		uniform_int_distribution<int> dist(0,3);


		for (int i = 0; i < numVehicles; i++) {
			int r = dist(generator);
			uniform_int_distribution<int> randSpeed(0,120);
			int speed = randSpeed(generator);
			Vehicle * v;
			switch(r) {
			case 0: v = new Car(speed, "red");
				break;
			case 1: v = new Sportscar(speed, "red", 400.0);
				break;
			case 2: v = new Bus(speed, 14);
			break;
			case 3: v = new Truck(speed, 18000, 5);
				break;
			}
			
			vehicles.push_back(v);
		}
	}

	~TrafficSim() {
		for (auto z : vehicles) {
			delete z;
		}
	}
	void payToll() {
		for (auto z : vehicles) {
			//			cout << (*z).payToll() << '\n';
			cout << z->payToll() << '\n';
		}
	}

}



int main() {
	for (int i = 0; i < 100; i++) {
		TrafficSim sim1(100);
		sim1.payToll();
	}
	//  TrafficSim sim2(100);
	//	TrafficSim sim3 = sim3;
	// calls the destructor of sim2 ... calls destructor of sim3 (deletes teh memory AGAIN
}
