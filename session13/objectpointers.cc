class Node {
	int v;
	Node* next;
};


class A {
public:
	int x, y, z;
};


void f(A* p, int A::*member) {
  p->*member = 0;
}

void g(A a1, int A::*member) {
  a1.*member = 0;
}

int main() {
	Node* p = new Node();
	(*p).v = 5;
	(*p).next = nullptr;

	p->v = 5;
  p->next = nullptr;

	A a1;
	a1.x = 2;
	a1.y = 3;
	f(&a1, &A::x); // write to the x value in a1
	f(&a1, &A::y); // write to the y value in a1
}
