#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int c = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        c--;
    }
    
}