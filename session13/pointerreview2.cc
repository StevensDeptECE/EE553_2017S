int main() {
	int a[] = {1, 3, 5, 7, 9};
	const int b[9] = {5, 4, 3, 1};
	const int c[4] = { 5, 4, 3, 2, 1};
	const int* p1 = a;
	const int* p2 = &a[1];
	int* const p3 = &a[2];
	*p3 = 11; // changes 5 to 11
	const int* const p4 = a + 4;
	//ILLEGAL:	*p4 = 55; // can't write to p4
	//ILLEGAL p4++; // p4 cannot change
	p1 = b + 2;
	// ILLEGAL: p1 is readonly	*p1 = 55;
	p2 = p1 + 1;
	//ILLEGAL: 	p3 = p2 - 1;
	cout << *p1 << '\n';
	cout << *p2 << '\n';
	cout << *p3 << '\n';
}
