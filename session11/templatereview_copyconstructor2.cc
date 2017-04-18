#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
class List {
private:
	unsigned int capacity;
	T* data;
	void swap(List& orig) {
    unsigned int temp = capacity; capacity = orig.capacity; orig.capacity = temp;
		T*temp2 = data; data = orig.data; orig.data = temp2;
	}
public:
	List() : capacity(0), data(nullptr) {}
	~List() {
		delete [] data;
	}
	void add(const T& v) {
		T* temp = data;
    data = new T[capacity+1]; // intrinsically calls T()
		for (int i = 0; i < capacity; i++)
			data[i] = temp[i];
		data[capacity] = v;
		capacity++;
		delete [] temp;
	}
	List(const List& orig) : capacity(orig.capacity), data(new T[orig.capacity]) {
		for (int i = 0; i < capacity; i++)
			data[i] = orig.data[i];
	}
	
	List& operator =(List orig) {
		swap(orig);
		return *this;
	}
	friend ostream& operator <<(ostream& s, const List& list) {
		for (int i = 0; i < list.capacity; i++)
			s << list.data[i];
		return s;
	}
};

class Elephant {
private:
	char* name;
public:
	Elephant() : name(nullptr) {
	}
	Elephant(const char* name) : name(new char[strlen(name)+1]){
		// '\0' is the NUL character
		int i;
		for (i = 0; name[i] != '\0'; i++)
			this->name[i] = name[i];
		this->name[i] = '\0';    
	}

	// H E N R Y '\0'
	Elephant(const Elephant& orig) : name(new char[strlen(orig.name)+1]){
		int i;
    for (i = 0; orig.name[i] != '\0'; i++)
			name[i] = orig.name[i];
		name[i] = '\0';
	}
	Elephant& operator =(Elephant orig) {
		swap(name, orig.name);
    return *this;
	}
	~Elephant() {
		delete [] name;
	}
};

int main() {
	List<int> a;
	a.add(5);
	a.add(1);
	List<int> b;

	b = a;
	cout << a << '\n';
	cout << b << '\n';
	List<int> c;
	a = b = c;
	List<Elephant> d;
	Elephant x("Fred");
	d.add(x);
  cout << d << '\n';  
}
