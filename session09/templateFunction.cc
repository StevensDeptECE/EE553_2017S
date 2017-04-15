#include <iostream>
using namespace std;
//int*const p = ...;


//  8 7 6 5 4 3 2 1
//  7 6 5 4 3 2 1 8



void sort(int* const items, int n) {
	for (int j = 0; j < n-1; j++) {
		for (int i = 0; i < n-1; i++) {
			if (items[i] > items[i+1]) {
				int temp = items[i];
				items[i] = items[i+1];
				items[i+1] = temp;
			//5,6
			//			items[i] = items[i] + items[i+1];  //11           
			//			items[i+1] = items[i] - items[i+1];//5
			//			items[i] = items[i] - items[i+1]; //11-5 = 6
			}
		}
	}
}

void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

int main()  {
	int a[] = { 3, 2, 1};
	sort(a, 3);
  print(a, 3);
	
	int b[] = {5, 2, 4, 1, 6};
	sort(b, sizeof(b)/sizeof(b[0]));
	print (b, sizeof(b)/sizeof(b[0]));
	float c[] = {1.5, 2.5, 0.5};
	sort(c, 3);
}


	
