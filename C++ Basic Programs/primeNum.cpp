// find prime numbers
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n){
    bool flag = false;
    int i;
    for (i = 2; i <= n-1; i++){
        if (n%i == 0)
            break;
    }    
    flag = (n==i)? 1: 0;
    return flag;
}

int main()
{
    int n;
    cin>>n;
    string ans = (isPrime(n))? "Prime" : "Not Prime";
    cout<<ans;
    // if (isPrime(n))
    //     cout<<"Prime";
    // else
    //     cout<<"not prime";
}