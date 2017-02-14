extern int x;  // declares that somewhere, x exists
extern int x;  // declares that somewhere, x exists
extern int x;  // declares that somewhere, x exists
int x = 3; // defines x as a variable

int main() {
	int x = 4;
	if (2 < 3) {
		int x = 5;
		cout << x;
	}
	cout << x;
	cout << ::x;
}
