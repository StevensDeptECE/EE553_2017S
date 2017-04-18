#include <iostream>
#include <mutex>
using namespace std;


class AccountMutex {
private:
	long long balance;
	mutex m;
public:
	AccountMutex() {
		balance = 0;
	}

	void deposit(long long amt) {
		m.lock();
		balance += amt;               //READ balance into register add amt write balance
		m.unlock();
	}

	bool withdraw(long long amt) {
		m.lock();
		if (amt < balance) {
			balance -= amt;
			m.unlock();
			return true;
		}
		m.unlock();
		return false;
	}
	friend ostream& operator <<(ostream& s, const AccountMutex& a) {
		return s << "balance = " << a.balance;
	}
};
