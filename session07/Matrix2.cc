class Matrix {
private:
	double* m; // points to a single vector of double...
public:
	// write constructor, destructor, copy constructor, operator =
	Matrix(int rows, int cols) {
		
	}

	double  operator ()(int i, int j) const {
		return m[_________];
	}
	double&  operator ()(int i, int j) {
		return m[_________];
	}
	Matrix(Matrix&& orig) {
    m = orig.m;
		rows = orig.rows;
		cols = orig.cols;
		orig.m = nullptr;
	}
  friend Matrix operator +(const Matrix& a, const Matrix& b) {
		// test if the two matrices are equal in size!!!
		Matrix ans(....);
		return ans;
	}
				
};

int main() {
	Matrix m1(3, 4); // zeros
	Matrix m2(2, 3, 1.5); // fill with 1.5
  cout << m1 << '\n';
	/*
		0   0   0   0
    0   0   0   0
    0   0   0   0
	*/
	cout << m1(0, 1) << '\n';
	m1(0,1) = 5.5;
  Matrix m3 = m1 + m1;
	Matrix m4 = m3;  //copy constructor
	cout << m4 << '\n';
	m4(1,2) = 11.2;
	m3 = m4; // operator =
}
