#include <iostream>
using namespace std;

int main(){
    const int S = 5;
    int a[S];

    cout<<"\nEnter array value: \n";
    for (int i = 0; i < S; i++)
    {
        cin>>a[i];
    }

    cout<<"\nActual Array: \n";
    for (int i = 0; i < S; i++)
    {
        cout<<a[i]<<"\t";
    }

    cout<<"\nReversed Array: \n";
    for (int i = S - 1; i >= 0; i--)
    {
        cout << a[i] << "\t";
    }
}