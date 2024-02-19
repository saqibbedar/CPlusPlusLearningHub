#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) {
        return 1;  
    } else {
        return n * fact(n - 1);  // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int number = 5;  
    cout << "Factorial of " << number << " is: " << fact(number) << endl;
    return 0;
}

/*
fact(5) is called.
Inside the function, it checks if n is less than or equal to 1. Since 5 is not less than or equal to 1, it goes to the else block.
It returns 5 * fact(4).
Now, it needs to calculate fact(4).
Inside the fact(4) call, it checks if n is less than or equal to 1. Since 4 is not less than or equal to 1, it goes to the else block.
It returns 4 * fact(3).
This process continues until fact(1) is reached, and it returns 1.
Now, the recursive calls are resolved backward: 1 * 2 * 3 * 4 * 5.
The final result is 120.
*/