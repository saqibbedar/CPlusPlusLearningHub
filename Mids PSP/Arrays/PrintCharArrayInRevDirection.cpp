#include <iostream>
#include <string>
using namespace std;

// read array
void read(char a[], int S){
    for (int i = 0; i < S; i++)
    {
        cin>>a[i];
    }
}

// display array
void display(char a[], int S){
    for (int i = 0; i < S; i++)
    {
        cout<<a[i]<<"\t";
    }
}

int main(){
    const int S = 5;
    char a[S];

    // read array
    cout<<"Enter values for array"<<endl;
    read(a, S);

    // display array
    cout<<"\nActual Array\n";
    display(a, S);

    // array after reverse
    cout<<"\nReversed Array\n";
    for (int i = S-1; i >= 0; i--)
    {
        cout<<a[i]<<"\t";
    }
    
    return 0;
}