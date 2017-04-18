
#include "Account.hh"

int main() {
	Account a;
	for (int i = 0; i < 1000000; i++)
		a.deposit(1);
	for (int i = 0; i < 500000; i++)
		a.withdraw(1);

	cout << a << '\n';
}
