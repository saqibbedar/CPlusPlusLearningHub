// write a c++ program to print array values in reverse direction

#include <iostream>
using namespace std;

int main()
{
int a[5], a2[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }

    // Reverse array
    cout<<"         ";
    cout<<"         "<<endl;

    for (int i = 0; i < 5; i++)
    {
        a2[i] = a[4-i];
        cout<<a2[i]<<endl;
    }
    
}