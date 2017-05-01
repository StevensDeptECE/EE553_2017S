int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

int main() {
	int z = add(1, 3);
	int y = add(1.5, 2.5);
  int x = add(double(1), 1.5);
  int w = add(1, int(1.5));
}
