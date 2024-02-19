// write a function to check number is prime or composite

#include <iostream>
using namespace std;

int P_OR_C(int n){
    
    int i;
    for (i = 2; i <= n; i++)
    {
        if (n%i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        cout<<n <<" is Prime number";
    }
    else{
        if (n == 1)
        {
            cout<<"1 is Prime Number";
        }else{
            cout<<n <<" is Composite number";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    P_OR_C(n);
}