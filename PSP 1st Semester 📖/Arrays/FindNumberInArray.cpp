/*
    Question: Write a program to accept five number and store them into array and prompt user to Search a number and check if entered is existing in array or not and display the dedicated message to user.
*/

#include <iostream>
using namespace std;
int main() 
{
    int a[5];
    int arrayLength = sizeof(a)/sizeof(int); 

    for (int i = 0; i < arrayLength; i++)
    {
        cin>>a[i]; // input
    }

    bool flag = false;
    int foundNumber = -1;
    int index = -1;

    cout<<"Search a Number: "; // prompt
    int n;
    cin>>n;

    for (int i = 0; i < arrayLength; i++)
    {
        if (a[i] == n)
        {
            flag = true;
            foundNumber = a[i];
            index = i;
            break;
        }
    } 
    if (flag)
    {
        cout<<foundNumber<< " exist in array at index: " <<index; // dedicated message
    }
    else{
        cout<<"Not Found";
    }  
}