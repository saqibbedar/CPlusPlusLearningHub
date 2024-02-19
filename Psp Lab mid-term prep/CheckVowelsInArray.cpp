#include <iostream>
using namespace std;

int main()
{
    char a[5];
    char a1[5] = {'a', 'e', 'i', 'o', 'u'};
    bool isFound = false;
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == a1[i])
        {
            isFound = true;
        }
    }
    if (isFound)
    {
        cout<<"Vowel exist";
    }
    else{
        cout<<"Does not exist";
    }   
}