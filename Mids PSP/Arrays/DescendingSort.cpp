#include <iostream>
using namespace std;

void read(int a[], int S){
    for (int i = 0; i < S; i++)
    {
        cin>>a[i];
    }
}

// Descending Order Sorting

void DescendingOrderSort(int a[], int S){
    int temp;
    for (int i = 0; i < S-1; i++)
    {
        for (int j = 0; j < S-i-1; j++)
        {
            if (a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void display(int a[], int S){
    for (int i = 0; i < S; i++)
    {
        cout<<a[i] <<"\t";
    }
    
}

int main(){
    const int S = 5;
    int a[S];

    // read value for array
    cout<<"Enter value for array\n";
    read(a, S);

    // Sort Array
    DescendingOrderSort(a, S);

    // Display Array
    cout<<"\nSorted Array is\n";
    display(a, S);
}