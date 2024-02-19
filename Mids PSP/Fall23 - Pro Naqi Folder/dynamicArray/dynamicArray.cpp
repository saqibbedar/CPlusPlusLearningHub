// Dynamic Array using pointers

#include<iostream>
using namespace std;

int main() {
	int x, n;
	cout << "Enter the number of items:" << "\n";
	cin >> n;
	int *arr = new int();
	//int arr[n];
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		//	cin >> *(arr+x); you can also use arr+x it is equivalent to arr[x]
		cin >> arr[x];
	}
	
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		//cout << *(arr+x) << " "; same above case
		cout << arr[x] << " ";
	}
	
	delete arr;
	return 0;
}