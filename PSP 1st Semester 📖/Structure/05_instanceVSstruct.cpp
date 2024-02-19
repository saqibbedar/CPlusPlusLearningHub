#include <iostream>
using namespace std;

// Unnamed struct (single instance)
struct {
    string username;
    int pin;
} user;

// Named struct (reusable type)
struct User {
    string username;
    int pin;
};

int main() {
    User user1;
    User user2;
    // ...

    return 0;
}
