// write a function for fibonacci series
#include <iostream>
using namespace std;

void fbSeries(int n){
    int a, b, c;
    a = 0; b = 1;

    for (int i = 1; i <= n; i++)
    {
        cout<<a<<"\t";
        c = a+b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cin>>n;
    fbSeries(n);
}