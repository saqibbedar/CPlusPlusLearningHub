#include <iostream>
#include <string>

using namespace std;

struct user {
    string username;
    int pin;
};

int main() {
    const int numUsers = 10;
    user users[numUsers], user2;

    // Input data for each user
    for (int i = 0; i < numUsers; ++i) {
        cout << "Enter username for user " << i + 1 << ": ";
        cin >> users[i].username;

        cout << "Enter pin for user " << i + 1 << ": ";
        cin >> users[i].pin;
    }

    // Output data for each user
    for (int i = 0; i < numUsers; ++i) {
        cout << "User " << i + 1 << ":\n";
        cout << "Username: " << users[i].username << "\n";
        cout << "PIN: " << users[i].pin << "\n\n";
    }

    return 0;
}
