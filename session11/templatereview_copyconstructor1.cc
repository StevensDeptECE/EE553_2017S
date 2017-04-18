template<typename T>
class List {
private:
	unsigned int capacity;
	T* data;
	void copy(const List& orig) {
			capacity = orig.capacity;
			data = new T[orig.capacity];
			for (int i = 0; i < capacity; i++)
				data[i] = orig.data[i];
	}
public:
	List() : capacity(0), data(nullptr) {}
	~List() {
		delete [] data;
	}
	void add(const T& v) {
		T* temp = data;
    data = new T[capacity+1];
		for (int i = 0; i < capacity; i++)
			data[i] = temp[i];
		data[capacity] = v;
		capacity++;
		delete [] temp;
	}
	List(const List& orig) {
		copy(orig);
	}
	List& operator =(const List& orig) {
		if (this != &orig) {
			delete [] data;
			copy(orig);
		}
		return *this;
	}

};

int main() {
	List<int> a;
	List<int> b;

	a = b;
	List<int> c;
	a = b = c;
	//	List<Elephant> d;

}
