
#include "Account.hh"
#include <thread>
Account a;

void deposits() {
	for (int i = 0; i < 1000000; i++)
		a.deposit(1);
}

void withdrawals() {
	for (int i = 0; i < 500000; i++)
		a.withdraw(1);
}

int main() {
	thread t1(deposits);
	thread t2(withdrawals);
	t1.join();
	t2.join();
	cout << a << '\n';
}
