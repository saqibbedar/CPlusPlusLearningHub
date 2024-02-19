#include <iostream>
using namespace std;

int main()
{
int n, i = 1, pre = 0, cur = 1, sum  = 0;
cin>>n;

    while (i <= n)
    {
        sum = pre + cur;
        pre = cur;
        cur = sum;
        i++; 
    }
}