// These two functions are identical

void f(int* const x) {

}

void g(int x[]) {

}



int main() {
	int a = 2; // best style, always initialize
	int* p = &a; // "address of a"  p points to a
	const int* q = &a; // LEGAL
	// q sez "I promise NOT TO CHANGE a"
	a = 4;
	cout << *q << '\n'; // q is a READONLY pointer
	//	*q = 5; // Constant

	int* const r = &a;
	*r = 19; // change a
	int b = 4;
	//ILLEGAL:	r = &b; // r is not allowed to point to anything else

	int x[10] = {5}; // 5 0 0 0 0 0 0 0 0 0

	x[0] = 11; // you can change what is there
	//ILLEGAL: x = r;  // arrays are constant pointers.  They may not change where they point
	
  const int* const s = x; // What is this?
	// s cannot write to the array x
	// s cannot point to anything else

	const int y[10] = { 2,1,0}; // 2 1 0 0 0 0 0 0 0 0

	// y is also a const int* const pointer
}
