// Search number in an array and return result to user 

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

    cout<<"Search a Number: ";
    int n;
    cin>>n;
    int target = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        if (a[i] == n)
        {
            flag = true;
            target = i;
            break;
        }
    }
    
    // cout<<(flag? "found": "not found");

    if (flag)
    {
        cout<<"Found at index = " <<target;
    }
    else{
        cout<<"Not Found";
    } 
}