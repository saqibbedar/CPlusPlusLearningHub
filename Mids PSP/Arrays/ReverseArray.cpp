#include <iostream>
using namespace std;

const int rows = 3;
const int col = 3;

// void rev(int a[rows][col], int rows, int col){
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = col; j > 0; j--)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

void rev(int a[][3], int rows, int col) {
    for (int i = 0; i < rows; i++) {
        for (int j = col - 1; j >= 0; j--) {
            cout << a[i][col - j - 1] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[rows][col];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"\nBefor Reverse\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nAfter Reverse\n";
    rev(a, rows, col);

}