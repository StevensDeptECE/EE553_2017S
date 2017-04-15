#include "String3.hh"
using namespace std;

String::String(const char s[]) {
	int count;
	for (count = 0; s[count] != '\0'; ++count)
		;
	p = new char[count];
	for (int i = 0; i < count; ++i)
		p[i] = s[i];
	len = count;
	capacity = count;
}

String::String(int initialCapacity, char c) :
	p(new char[initialCapacity]), len(initialCapacity), capacity(initialCapacity) {
	for (int i = 0; i < len; i++)
		p[i] = c;
}

String::String(const String& orig) :
	p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity) {
	for (int i = 0; i < len; ++i)
		p[i] = orig.p[i];
}

String& String::operator =(const String& orig) {
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

#if 0
String::String(String&& orig) :
	p(orig.p), len(orig.len), capacity(orig.capacity)
{
	orig.p = nullptr;
}
#endif

ostream& operator<<(ostream& s, const String& str) {
	for (int i = 0; i < str.len; ++i)
		s << str.p[i];
	return s;
}

String f() {
	String s1(100000, 'x');
	return s1;
}
