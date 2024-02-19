// write a c++ program to find the perfect square number

// A perfect sqrt num is a positive integer that is equal to the sum of its proper divisors, excluding itself.

// Example: 6: 3, 2, 1 and 6 itself but proper divisor are 3, 2 and 1 and if we add them it must return the original number 3+2+1 = 6 hence it is perSqrtNum

#include <iostream>
using namespace std;

int perSqrtNum(int n){
    int store = 0;
    while (n!= 0)
    {
        int r = n/2;
        store += r;
    }
}

int main()
{
    int n;
    cin>>n;
    int store = 0;
    while (n != 0)
    {
        int r = n/2;
        cout<<r<<endl;
        store += r;
        n = n%2;
    }
    cout<<store;
    return 0;
}