#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int originalN = n; // store the original value for comparison
    int reversedN = 0;

    while (n != 0) {
        int r = n % 10;
        reversedN = reversedN * 10 + r;
        n /= 10;
    }

    if (originalN == reversedN) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }

    return 0;
}
