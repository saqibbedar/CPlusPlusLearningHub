#include <iostream>
using namespace std;

// read array
void read(int a[][3], int S){
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            cin>>a[i][j];
        }
    }
}

// display array
void display(int a[][3], int S){
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    const int S = 3;
    int a[S][S];

    // read array
    cout<<"Enter values for Array\n";
    read(a, S);

    // Display before printing diagonal
    cout<<"\nArray before diagonal: \n"<<endl;
    display(a, S);

    // Diagonal 
    cout<<"\nDiagonal is: \n"<<endl;
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            if (i == j)
            {
                cout<<a[i][j];
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
