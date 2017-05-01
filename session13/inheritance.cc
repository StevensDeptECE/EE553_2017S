class Base {
private:
	int x; // only visible to entities declared within this class
protected:
	int y; // visible to this class and all children
public:
	int z; // visible to everybody
	
};

// design rule: data should always be private
// make any methods private that you don't need to make public
// BE STINGY

class Derived : public Base {

	// what was private in the base is... ? invisible to you
	// what was protected in the base is... ? protected to me
	// what was public in the base is.... ? public to you

};

class Airplane {
private:
	double fuel;
protected:
	double getFuel() const { return fuel; }
public:
	void fly();
};

class FighterPlane : public Airplane {


};

FighterPlane p;
p.fly();


class Engine {

};


class Car : private Engine { // everything I can see in engine is now PRIVATE
	// whatever is public or protected in base --> private in me
	// whatever is private in base is INVISIBLE

	
};


// better
class Car {
private:
	Engine e;
};

	




class Base {
private:
	int x; // only visible to entities declared within this class
protected:
	int y; // visible to this class and all children
public:
	int z; // visible to everybody
	
};

// design rule: data should always be private
// make any methods private that you don't need to make public
// BE STINGY

class Derived : protected Base {

	// what was private in the base is... ? INVISIBLE to you
	// what was protected in the base is... ? protected to me
	// what was public in the base is.... ? protected to you

};

//instead:
class Derived {
protected:
	Base b;
};


class Chicken {
public:
	void nutrition();

};
class Beef{
public:
	void nutrition();
};
class Shrimp {
public:
	void nutrition();
};

class Mushu{
public:
	void flavor();
};
class Garlic{
public:
	void flavor();
};

class MushuChicken : public Chicken, public Mushu {

};


class Employee {
private:
	long ssn;
public:
	void pay();
};

class Secretary : public virtual Employee {
public:
	void f();
};

class Professor : public virtual Employee {
public:
	void teach();
};

class Temp : public virtual Employee {
public:
	Temp(long ssn, Date exp) {}
};

class VisitingProfessor : public Temp, public Professor {

};






