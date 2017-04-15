class Newton3d {
private:
	static const double G = ....;
	double m;
	Vec3d x;
	double r;



public:
	constructor...

	// compute accleration of one body on another
	void accel(Newton3d other) {

		//		F = ... //
	}

};

/*
	what is its purpose
  @author: Dov Kruger

 */

class System {
private:
	vector<Newton3d> bodies;

public:
	System( ...)

		
	// compute accelerations due to gravity by evryone against
		void accelerations() {

		}

};
