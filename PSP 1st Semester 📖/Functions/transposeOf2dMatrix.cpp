// write a c++ function to calculate transpose of a 2d matrix
/*
    1      2
    3      4

    TransposeArray

    1      3
    2      4
*/
#include <iostream>
using namespace std;

void transpose(int arr1[3][3]){

    int arr2[3][3];

    // Read value from user
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr1[i][j];
        } 
    }

    // Transpose array
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    cout<<"\nTranspose Array\n";
    
    // Print out the result in to console
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
}


int main()
{
    int a[3][3];
    transpose(a);

    return 0;
}