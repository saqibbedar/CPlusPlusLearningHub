// write a c++ function to find max num from 2D array

#include <iostream>
using namespace std;

int maxNum(int a[3][3]){

    int maxNumber = a[0][0];
    
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > maxNumber){
                maxNumber = a[i][j];
            }
        }
    }
    return maxNumber;
}


int main()
{
    // Read Array
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        } 
    }
    
    int maxNumber = maxNum(a);
    cout<<maxNumber;

    return 0;
}