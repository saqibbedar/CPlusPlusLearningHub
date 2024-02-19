#include <iostream>
using namespace std;

/*
1            1
12          21
123        321
1234      4321
12345    54321
123456  654321
12345677654321
*/

int main() {
    int n = 7; 

    for (int i = 1; i <= n; ++i) {
        // Print the first part of the pattern
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print spaces
        for (int k = 1; k <= 2 * (n - i); ++k) {
            cout << " ";
        }

        // Print the second part of the pattern
        for (int l = i; l >= 1; --l) {
            cout << l;
        }

            cout << endl;
    }

    return 0;
}
