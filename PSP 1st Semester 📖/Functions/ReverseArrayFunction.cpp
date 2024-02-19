// write a function to reverse an array
#include <iostream>
using namespace std;

const int SIZE = 5;

void inputArray(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }
}

void reverseArray(int a[SIZE]) {
    int b[SIZE];
    int j = SIZE - 1;

    for (int i = 0; i < SIZE; i++) {
        b[i] = a[j];
        j--;
    }

    // Copy the reversed array back to the original array
    for (int i = 0; i < SIZE; i++) {
        a[i] = b[i];
    }
}

void printArray(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    int a[SIZE];
    cout << "\nPlease enter values for the array: \n";
    inputArray(a);

    // Reverse Array
    reverseArray(a);

    // Print the reversed array
    cout << "\nReversed Array: \n";
    printArray(a);

    return 0;
}
