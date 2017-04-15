#include <iostream>
#include <cstdint>
using namespace std;

class String {
private:	
	char* p;
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
	String(const String& orig) :
		p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity) {
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

int main() {
	String s1("This is a test");
	String s2;
	cout << s1 << "\n";

	String s3 = s1;
	String s4 (s1);
	s1.set(0, 'x');
	cout << s3;
	String s5("Yoho!");
	s3 = s5;
	s3 = s3;
	s2 = s3 = s4;
}
