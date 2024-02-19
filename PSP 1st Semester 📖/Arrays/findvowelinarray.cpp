/*
    1. Check if there is any vowel in array or not
    2. Secondly, if it has then remove that vowel from the array
    
*/

#include <iostream>
using namespace std;

int main()
{
    char a1[10];
    char a2[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int arrLength = sizeof(a1) / sizeof(a1[0]);

    // bool isFound = false;

    // cout << "Enter the Characters : ";
    // cin >> a1;
    for (int i = 0; i < arrLength; i++)
    {
        cin>>a1[i];
    }
    
    int i;

    for (i = 0; i < 10; i++)
    {
        bool   isFound = false;
        for (int j = 0; j < 10; j++)
        {
            if (a1[i] == a2[j])
            {
                isFound = true;
                break;
            }
        }
        if (isFound)
            {
            cout<<"Vowel found: "<<a1[i] <<endl;
            }
    }

    }