#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main() {
  mt19937 rnd(0); // always test with random number generator seeded to a specific value
  // random numbers will always be the same in every run, which is boring!
  // when code works, remove the zero and it will seed with the time
  normal_distribution<> normal(0,1); // mean 0, var 1
  int hist[100] = {0};
  for (int i = 0; i < 400; i++) {
  	double x = normal(rnd);
//  	cout << x << '\t';
  	hist[int(round(x*10)+50)]++; 	
  }
  const int n =  sizeof(hist)/sizeof(int);
  int first, last;
  for (int i = 0; i < n; i++)
  	if (hist[i] != 0) {
  		first = i;
  		break;
  	}
  for (int j = n-1; j >= 0; j--)
  	if (hist[j] != 0) {
  		last = j;
  		break;
  	}
  double x = -50 + first;
  for (int i = first; i <= last; i++, x ++) {
  	cout << setw(4) << setprecision(2) << x/10 << ": ";
  	for (int j = 0; j < hist[i]; j++)
  		cout << '*';
  	cout << '\n';
  }
}
	
