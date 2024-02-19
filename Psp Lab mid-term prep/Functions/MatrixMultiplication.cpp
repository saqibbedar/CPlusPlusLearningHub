#include <iostream>
using namespace std;

int inputArray(int a[][2]){
    cout<<"\nEnter value for Matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
}

int matrixMul(int a[][2], int b[][2], int c[][2]){

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int displayArray(int a[][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    const int S1 = 2; // S represent the size    
    const int S2 = 2;

    int a[S1][S2], b[S1][S2], c[S1][S2] = {0};

    // Read array from user
    inputArray(a);
    inputArray(b);

    // display the result

    // Matrix Multiplication
    matrixMul(a, b, c);

    cout<<"\nResult is:\n";
    displayArray(c);
    
}