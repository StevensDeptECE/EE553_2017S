#include <iostream>
#include <cstdint>
using namespace std;

template<typename T>
class GrowArray {
private:
	T* data;
	uint32_t used;
	uint32_t capacity;
	void grow() {
		capacity = capacity * 2 + 2;
		T* temp = data;
		data = new T[capacity];
		for (int i = 0; i < used; i++)
			data[i] = temp[i];
		delete [] temp;
	}
public:
	GrowArray() : data(nullptr), used(0), capacity(0) {
	}
	~GrowArray() {
		delete [] data;
	}

	GrowArray(const GrowArray& orig) : data(new T[orig.used]), used(orig.used), capacity(orig.used) {
		for (int i = 0; i < used; i++)
			data[i] = orig.data[i];
		//commonly seen, not necessary
		// not necessarily more efficient
		//memcpy(data, used*sizeof(int), orig.data);
	}
	// this operator = uses "copy and swap" to deallocate the destination
	GrowArray& operator =(GrowArray copy) {
		T* temp = data; data = copy.data; copy.data = temp;
	}
	GrowArray(GrowArray&& orig) : data(orig.data), used(orig.used), capacity(orig.capacity) {
		orig.data = nullptr;
	}
	void add(const T& v) {
		if (used >= capacity)
			grow();
		data[used++] = v;
	}

  friend ostream& operator <<(ostream& s, const GrowArray<T>& list) {
		for (int i = 0; i < list.used; i++)
			s << list.data[i] << ' ';
		return s;
	}
};

GrowArray<int> g() {
	GrowArray<int> a;
	for (int i = 0; i < 10; i++)
		a.add(i);
	return a;
}

int main() {
	GrowArray<int> f = g();
	GrowArray<string> a;
	a.add("abc");
	a.add("def");
	auto b = a;
	GrowArray<string> c;
	c = a;
	cout << f << '\n';
	cout << a << '\n';
	a.add("hhhhhh");
	cout << c << '\n';
}
	
