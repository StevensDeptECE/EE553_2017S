class Complex {
private:
	double r, i;
	static int count; //--> extern
public:

	static int getCount() { return count; }

};

int Complex::count = 0;


int n = Complex::getCount();


class A {

};

// if the only constructor you have is private and there are no friends or static functions, the class is USELESS
class B : public A {
private:
	int x;
	B() {}
protected:
	int y;
	void f() {}
public:
	int z;
	void g() {}
};

B b1;

class C : public B {
public:
	C(int x) : B() { cout << "test"; }
};
