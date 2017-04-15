#include <iostream>
#include <cstdint>
using namespace std;

class String {
private:	
	char* p; // --> "kjshf kashdf ksj fhksjfh kasjdfh kasjdfh ksa"   0 = 48
	uint32_t len;
  uint32_t capacity;
public:
	String(const char s[]) {
		int count;
    for (count = 0; s[count] != '\0'; ++count)
			;
		p = new char[count];
		for (int i = 0; i < count; ++i)
			p[i] = s[i];
		len = count;
		capacity = count;
	}
	String() : p(nullptr), len(0), capacity(0) {}
	~String() {
		delete [] p;
	}
#if 0
	// NASTY CRASH BUG HERE!  the order of initialization is the ORDER IN MEMORY
	// not the order in which they are listed in the initializer.
	// capacity here is RANDOM....
	String(const String& orig) : len(orig.len), capacity(orig.capacity),
		p(new char[capacity])  {
	}
#endif
	String(const String& orig) :
		p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity)
  {
		for (int i = 0; i < len; ++i)
			p[i] = orig.p[i];
	}

	String& operator =(const String& orig) {
    if (this != &orig) {
			delete [] p;
			p = new char[orig.capacity];
			len = orig.len;
			capacity = orig.capacity;
			for (int i = 0; i < len; ++i)
				p[i] = orig.p[i];
		}
	  return *this;	
	}
	
	void set(int i, char c) { p[i] = c; }
	friend ostream& operator<<(ostream& s, const String& str) {
    for (int i = 0; i < str.len; ++i)
			s << str.p[i];
		return s;
	}
};

const String& f(String x) {
	return String("abc");
}

String g() {
	return String("abc");
}

int main() {
	String s1("This is a test");
	String s2;
	cout << s1 << "\n";

	String s3 = s1;
	String s4 (s1);
  f(s3);
	s1.set(0, 'x');
	cout << s3;
	String s5("Yoho!");
	s3 = s5;
	s3 = s3;
	s2 = s3 = s4;
	int a = 2, b = 3, c = 4;
	a = b = c = 0;

	
}

#if 0
// this is why we use nullptr!
f(int x) { ...}
f(char* x) {...}

f("abc");
f(5);
f(0);
#endif




