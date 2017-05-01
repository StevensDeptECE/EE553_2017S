#include <iostream>
using namespace std;


template<typename T>
class GrowArray {
private:
	int capacity;
	int used;
	T* data;
	void checkGrow() {
		if (used < capacity)
			return;
		T* temp = data;
		data = new T[capacity*2+2];
		for (int i = 0; i < capacity; i++)
			data[i] = temp[i];
		delete [] temp;
    capacity = 2*capacity;		
	}
	void* operator new(size_t size, T* dest) {
    return reinterpret_cast<void*>(dest);
	}
public:
	GrowArray() : capacity(0), used(0), data(nullptr) {}
	GrowArray(int initialCapacity) : capacity(initialCapacity), used(0),
						 data(reinterpret_cast<T*>(new char[sizeof(T)*initialCapacity])) {}
	~GrowArray() { delete [] data; }
	GrowArray(const GrowArray& orig) : capacity(orig.capacity), used(orig.used),
																		 data(reinterpret_cast<T*>(new char[orig.capacity])) {
		for (int i = 0; i < used; i++)
			new (data+i) T(orig.data[i]); // operator new, placement syntax
	}
	GrowArray& operator =(GrowArray copy) {
		swap(*this, copy);
		return *this;
	}
	
	void add(int v) {		
		data[used++] = v;
	}
	friend ostream& operator <<(ostream& s, const GrowArray& a) {
		for (int i = 0; i < a.used; i++)
			s << a.data[i] << ' ';
		return s;
	}
};

class A {
private:
	int* p;
public:
	A(int v) : p(new int) { *p = v; }
	~A() { delete p; }
	A(const A& orig) : p(new int) {
		*p = *orig.p;
	}
	A& operator =(const A& orig);
};
	
int main() {
	GrowArray<int> a(10);
	cout << a << "\n";
	for (int i = 0; i < 5; i++)
		a.add(i);
	cout << a << '\n';
	GrowArray<int> b = a;
	GrowArray<int> c(a);
	cout << b << '\n';
	cout << c << '\n';
	b = c; //operator =
	cout << b << '\n';
	GrowArray<A> list;
	for (int i = 0; i < 5; i++)
		list.add(A(i));
	cout << list << "\n";
}
