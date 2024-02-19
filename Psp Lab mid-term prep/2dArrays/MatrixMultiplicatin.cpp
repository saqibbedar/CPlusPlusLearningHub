#include <iostream>
using namespace std;

int main()
{
    int a[3][2], b[2][3];

    cout<<"\nEnter value of first Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter value of second Matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
    }

    int c[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<"\nResult is:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}