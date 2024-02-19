/*
    Question: Find 'a' in charater array, accept characters and loop over characters to find whether 'a' exist in array or not.
*/

#include <iostream>
using namespace std;

int main()
{
    char one[20];
    cin>>one;

    bool isFound = false;

    int arrayLength = sizeof(one)/sizeof(one[0]);
    for (int i = 0; i < arrayLength; i++)
    {
    if (one[i] == 'a')
        {
           isFound = true;
           break;
        }
    }

    if (isFound)
    {
        cout<<"'a' found";
    }
    else{
        cout<<"'a' does not found";
    }
    
}