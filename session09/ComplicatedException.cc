#include <new>
using namespace std;

class ComplicatedException {
private:
	int* a;
	int* b;
public:
	ComplicateException() {
		a = new int[100];
		try {
			b = new int[100000000000000LL];
		} catch (bad_alloc e) {
			delete [] a;
			throw ; // rethrow
		}
	}
	~ComplicatedException() {
		delete [] a;
		delete [] b;
	}
