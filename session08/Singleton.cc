class Singleton {
private:
	Singleton() {  }
public:

	static makeMe() {
		if (p == nullptr)
			p = new Singleton();
	}
};

Singleton* p = nullptr;


//Singleton a, b, c;
