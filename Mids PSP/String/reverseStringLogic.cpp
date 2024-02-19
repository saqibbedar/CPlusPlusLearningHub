#include <iostream>
#include <string>
using namespace std;

int main() {
    string user = "Saqib";

    // Get the length of the string
    int length = user.length();

    // Swap characters from the beginning and end towards the middle
    
    for (int i = 0; i < length / 2; ++i) {
        char temp = user[i];
        user[i] = user[length - i - 1];
        user[length - i - 1] = temp;
    }

    cout << user;

    return 0;
}
