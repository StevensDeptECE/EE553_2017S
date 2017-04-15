#ifndef STRING_HH_
#define STRING_HH_
#include <iostream>
#include <cstdint>

class String {
private:	
	char* p;
	std::uint32_t len;
  std::uint32_t capacity;
public:
	String(const char s[]);
	String(int initialCapacity, char c);
	String() : p(nullptr), len(0), capacity(0) {}
	~String() {
		delete [] p;
	}
	String(const String& orig);
	String& operator =(const String& orig);
	//	String(String&& orig);
	void set(int i, char c) { p[i] = c; }
	friend std::ostream& operator<<(std::ostream& s, const String& str);
};

String f();
#endif
