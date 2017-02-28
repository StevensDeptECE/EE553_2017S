class Matrix4 {
private:
	double m[4][4];
public:
	
};

class VariableSizeObject {
private:
	int rows, col;
	int x[1];
public:
	VariableSizeObject(int r, int c) : rows(r), cols(c) {
		for (int i = 0; i < r*c; i++)
			x[i] = 0;
	}
};

//VariableSizeObject a(50,50);


new char[sizeof(VariableSizeObject) + rows * cols*sizeof(int)]
