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
public:
	GrowArray(int initialCapacity) : capacity(initialCapacity), used(0),
																	 data(new T[initialCapacity]) {}
	~GrowArray() { delete [] data; }
	GrowArray(const GrowArray& orig) : capacity(orig.capacity), used(orig.used),
																		 data(new T[orig.capacity]) {
		for (int i = 0; i < used; i++)
			data[i] = orig.data[i];
	}
	GrowArray& operator =(const GrowArray& orig) {
		if (this != &orig) {
      delete [] data;			
			capacity = orig.capacity;
			used = orig.used;
			data = new T[orig.capacity];
			for (int i = 0; i < used; i++)
				data[i] = orig.data[i];
		}
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
}
