#include <iostream>
using namespace std;

int main()
{
    for (int  i = 1; i <= 5; i++)
    {
        for (int j = i; j > 1; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k < 5 + 1 - i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    
}