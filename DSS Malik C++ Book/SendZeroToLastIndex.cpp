// Send all zeros to last indexes
/*
    if a[] = {0, 1, 0, 3, 5}
    then it should be print like this: 1 3 5 0 0 
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {0, 1, 0, 3, 5};
    for (int i = 0; i < 5-i; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if(a[j] == 0){
                if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}