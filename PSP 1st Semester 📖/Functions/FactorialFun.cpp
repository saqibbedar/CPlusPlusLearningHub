#include <iostream>
using namespace std;

long int fact(int n){

    long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    int result = fact(n);
    cout<<result;
}