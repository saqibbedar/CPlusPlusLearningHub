#include <iostream>
#include <string>
using namespace std;

// using string
int rev(int n){
    string result;
    while (n != 0)
    {
        int r = n % 10;
        result += to_string(r); // Append the digit to the beginning of the string
        n /= 10;
    }
    int reversed = stoi(result);
    return reversed;
}

// without using string
int rev(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int a = 123;
    cout << rev(a);
    return 0;
}


