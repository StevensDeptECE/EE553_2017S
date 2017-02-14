class Bitmap {
private:
	int m[1024][1024];
public:
	operator +(const Bitmap& a, const Bitmap& b) {
