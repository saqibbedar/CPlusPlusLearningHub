// write a power function
#include <iostream>
using namespace std;

int power(int x, int n)
{
    int p, b;
    cin>>p>>b;

    for (int i = 1; i <= p; i++)
    {
        b*= i;
    }
    return b;
}
int main()
{
    int a, b;
    int r = power(a, b);
    cout<<r;
}