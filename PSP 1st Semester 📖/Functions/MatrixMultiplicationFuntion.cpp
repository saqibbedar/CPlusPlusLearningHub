// write a function for matrix multiplication

#include <iostream>
using namespace std;

// read array function
void readArray(int a[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin>>a[i][j];
        }
    }
    
}

int matrixMulti(int a[3][3], int b[3][3]){
    int c[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

    return c[2][2];
}

int main()
{
    // read values from user 
    int a[3][3];
    cout<<"\nEnter Value of first array\n";
    readArray(a);

    int b[3][3];
    cout<<"\nEnter Value of Second array\n";
    readArray(b);

    // Matrix for storing values
    matrixMulti(a, b);
}