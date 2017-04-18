#ifndef VECTOR3_HH_
#define VECTOR3_HH_

#include <iostream>

template<typename T>
class Vector3 {
private:
	T x,y,z;
public:
	Vector3(T x = 0, T y = 0, T z = 0)  : x(x), y(y), z(z) {}

	friend Vector3<T> operator +(const Vector3<T>& a, const Vector3<T>& b);
	friend std::ostream& operator <<(std::ostream& s, const Vector3<T>& v);

};
#endif
 
