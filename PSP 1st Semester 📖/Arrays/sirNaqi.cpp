#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int arrayLength = sizeof(a)/sizeof(int);

    for (int i = 0; i < arrayLength; i++)
    {
        cin>>a[i];
    }

    bool flag = false;

    int n;
    cout<<"Search a Number: ";
    cin>>n;

    for (int i = 0; i < arrayLength; i++)
    {
        if (a[i] == n)
        {
            flag = true;
            break;
        }
    }
    
    if (flag)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    } 
}