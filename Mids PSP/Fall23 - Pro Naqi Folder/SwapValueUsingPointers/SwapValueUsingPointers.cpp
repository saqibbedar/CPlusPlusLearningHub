#include <iostream>
using namespace std;
// Function to swap two numbers using pointers
void swapNumbers(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1 = 5, num2 = 10;

	cout << "Before swapping - num1: " << num1 << ", num2: " << num2 << endl;

	// Pass the addresses of num1 and num2 to swapNumbers
	swapNumbers(&num1, &num2);

	cout << "After swapping - num1: " << num1 << ", num2: " << num2 <<endl;

	return 0;
}