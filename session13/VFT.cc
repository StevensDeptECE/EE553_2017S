class A {
public:
	virtual void f() = 0;  // pure virtual
	virtual void g() = 0;  // pure virtual
};

//ILLEGAL: A a1; // no instantiation
//a1.f();

class B : public A {
public:
	void f() {}
	void g() {}

};

B b1;
b1.f(); // at compile time

A* p = &b1;
p->f(); // (*p).f     DO NOT CONFUSE WITH .* member pointer!!!


// this is why private inheritance is so useless!
class C : private A {
public:
	void f() {}
	void g() {}
};
C c1;
p = &c1;  // NO, the fact that I'm inherited from A is my business
p->f(); // NO! you are not allowed to, it's private





