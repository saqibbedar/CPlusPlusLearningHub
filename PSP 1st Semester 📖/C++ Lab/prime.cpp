#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 2;
    while (count <= n-1)
    {
        if (n%count == 0)
        {
            break;
        }
        count++;
    }
    if (n == count)
    {
        cout<<"Number is Prime";
    }
    else
    {
        cout<<"Number is not Prime, it is a Composite";
    }    
}