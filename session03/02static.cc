#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
	static int count;// in this context, static means class shared
public:
	Person(string n, int a):name(n), age(a) {
		count++;
	}

	~Person()
		count--;
	}

	string getName() {
		return name;
	}
	
	int getMemberCount() {
		return count;
	}
	static int getCount() {
		return count;
	}

	friend ostream&  operator <<(ostream& s, const Person& p) {
    return s << p.name << " " << p.age;
	}
};

int Person::count = 0;

void f() {
	Person p3("Maria", 32);
}

int main() {
	cout << Person::getCount();
	f();
	Person p1("Dov", 50);
	cout << p1.getName() << '\n';
	
	Person p2("Yu-Dong", 45);
	cout << p1 << '\n';
	cout << p2.getMemberCount();
}
