#include <iostream>
using namespace std;

/*
Original Array
1       2
3       4

Transpose Array: 
1       3
2       4
*/

int main(){
    const int S = 2;
    int a[S][S];

    // read values from user
    cout<<"Enter array values: "<<endl;
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nOriginal Array\n";
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    // transpose array
    // for (int i = 0; i < S; i++)
    // {
    //     for (int j = 0; j < S; j++)
    //     {
    //         a[j][i] = a[i][j];
    //     }
    // }
    
    // print values
    cout<<"\nTranspose Array: \n";
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    
}