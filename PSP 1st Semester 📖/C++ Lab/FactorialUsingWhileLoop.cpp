#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    long  sum = 1, c = 1;

    while (c <= n)
    {
        sum = sum * c;
        cout<<sum<<endl;
        c++;
    }
    
}