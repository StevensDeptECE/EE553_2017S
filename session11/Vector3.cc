
#include "Vector3.hh"

template<typename T>
Vector3<T> operator +(const Vector3<T>& a, const Vector3<T>& b) {
	return Vector3<T>(a.x+b.x, a.y+b.y, a.z+b.z);
}

template<typename T>
std::ostream& operator <<(std::ostream& s, const Vector3<T>& v) {
	return s << "(" << v.x << "," << v.y << "," << v.z << ")";
}

Vector3<double> a;
Vector3<float> b;
