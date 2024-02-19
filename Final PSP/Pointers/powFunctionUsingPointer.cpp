#include <iostream>
using namespace std;

int *power(int &power, int &base){
    int *sum = new int (1);
    for (int i = 1; i <= power; i++)
    {
        *sum *= base;
    }
    return sum;
}

int main()
{
    int p, b, sum = 1;
    cin>>p>>b;
    cout<<*(power(p, b));
    return 0;
}