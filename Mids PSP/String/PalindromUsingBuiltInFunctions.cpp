#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string name = "mom";
    string reversedName = string(name.rbegin(), name.rend());

    if (name == reversedName) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    cout << endl;

    return 0;
}
