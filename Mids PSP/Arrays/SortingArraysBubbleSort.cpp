#include <iostream>
using namespace std;

// read array
void read(int a[], int S);

// Ascending Order Sorting
void AscendingOrderSort(int a[], int S);

// display array
void display(int a[], int S);

int main(){
    const int S = 5;
    int a[S];

    // read value for array
    cout<<"Enter value for array\n";
    read(a, S);

    // Sort Array
    AscendingOrderSort(a, S);

    // Display Array
    cout<<"\nSorted Array is\n";
    display(a, S);

    return 0;
}

// read array
void read(int a[], int S){
    for (int i = 0; i < S; i++)
    {
        cin>>a[i];
    }
}

// bubble sort
void AscendingOrderSort(int a[], int S){
    int temp;
    for (int i = 0; i < S-1; i++)
    {
        for (int j = 0; j < S-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

// display array
void display(int a[], int S){
    for (int i = 0; i < S; i++)
    {
        cout<<a[i] <<"\t";
    }
}