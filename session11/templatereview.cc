template<typename T>
class List {
private:
	unsigned int capacity;
	T* data;
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
	List(const List& orig) {}
	List& operator =(const List& orig) {
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
