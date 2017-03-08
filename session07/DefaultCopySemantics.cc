class Point{
private:
	double x,y,z;
public:
	Point() {}
	Point(const Point& orig) : x(orig.x), y(orig.y), z(orig.z) {}
};

Point p1(1,2,3);

Point p2 = p1; // 1,2,3
Point p3(p1); //1,2,3
