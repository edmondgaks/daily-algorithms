#include <iostream>
using namespace std;

int main() {
	int arr[5] = {2,3,4,5,6};
	int *p;
	p = arr;
	
	cout << *p << endl;
	cout << *(arr) << endl;
	cout << *(arr+1) << endl;
	cout << *(arr+3) << endl;
	return 0;
}
