#include <iostream>
using namespace std;

/*
     4321
1    321
12   21
123  1
1234 

*/

int main() {
    for (int i = 5; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= 5 - i; ++j) {
            cout << j;
        }

        // Print numbers in ascending order
        for (int k = 1; k <= i; ++k) {
            cout << " ";
        }

        // Print numbers in descending order
        for (int l = i - 1; l >= 1; --l) {
            cout << l;
        }

        cout << std::endl;
    }

    return 0;
}
