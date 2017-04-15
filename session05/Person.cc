#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
using namespace std;

class Person {
private:
	string fName, lName;
	uint64_t phone;
public:
  Person(const string& fName, const string& lName, uint64_t phone) :
		fName(fName), lName(lName), phone(phone) {}

	friend ostream& operator<<(ostream& s, const Person& p) {
		return s << p.fName << " " << p.lName << " " << p.phone;
	}
	
};

void f() {
	cout << "Hello";
}

int main() {
	int x;
	int y = 5;
	ofstream f("phonebook.txt");
	Person p("Dov", "Kruger", 2012165605);
  f << p;
}
