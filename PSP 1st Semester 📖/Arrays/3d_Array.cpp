#include <iostream>
using namespace std;

const int SIZE1 = 3;
const int SIZE2 = 4;
const int SIZE3 = 2;

int main() {
    // Declare a 3D array with dimensions SIZE1 x SIZE2 x SIZE3
    int threeDArray[SIZE1][SIZE2][SIZE3];

    // Initialize the 3D array with some values
    int value = 1;
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                threeDArray[i][j][k] = value;
                value++;
            }
        }
    }

    // Access and print the elements of the 3D array
    cout << "3D Array Elements:" << endl;
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                cout << "threeDArray[" << i << "][" << j << "][" << k << "] = " << threeDArray[i][j][k] << endl;
            }
        }
    }

    return 0;
}
