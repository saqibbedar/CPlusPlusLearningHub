// find table of any number
#include <iostream>
using namespace std;

int main()
{
    int n, c = 1;
    cin>>n;
    while (c <= 10)
    {
        int sum = n * c;
        cout<<n << " * "<< c << " = "<< sum <<endl;
        c++;
    }
    
    // Reverse it
    // int n, c = 10;
    // cin>>n;
    // while (c >= 0)
    // {
    //     int sum = n * c;
    //     cout<<n << " * "<< c << " = "<< sum <<endl;
    //     c--;
    // }
}