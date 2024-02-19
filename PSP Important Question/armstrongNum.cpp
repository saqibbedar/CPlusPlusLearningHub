// write a c++ program for armstrong number

// armstrong is a number that is sum of its own digits each raised to the power of 3

#include <iostream>
using namespace std;

int cube(int n){
    return n*n*n;
}

int armStrong(int n){
    int store = 0;
    while (n!= 0)
    {
        int r = n%10;
        store += cube(r);
        n/=10;
    }
    
    return store;
}

int main()
{
    int n;
    cin>>n;
    string result = (n == armStrong(n))? "armStrong":"Not armStrong";
    cout<<result;
    return 0;
}