#include <iostream>
using namespace std;

const int SIZE = 5;

void read(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }
}

void display(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void addArray(int a[SIZE], int b[SIZE], int c[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    int a[SIZE], b[SIZE], sum[SIZE];
    
    cout << "Enter elements for array A:" << endl;
    read(a);

    cout << "Enter elements for array B:" << endl;
    read(b);

    addArray(a, b, sum);

    cout << "Sum of arrays A and B:" << endl;
    display(sum);

    return 0;
}
