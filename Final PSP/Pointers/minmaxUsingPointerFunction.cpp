// 1D dynamic array
#include <iostream>
using namespace std;

void input(int a[], int size){
    cout<<"Enter values for Array\n";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}

void findMin(int a[], int size){
    int *min = &a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
    cout<<*min;
}

void findMax(int a[], int size){
    int *max = a;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
    cout<<*max;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int *arr = new int[size]; // pointers
    input(arr, size);

    cout<<"\nMax Number in array is: ";
    findMax(arr, size);
    cout<<"\nMin Number in array is: ";
    findMin(arr, size);

    delete[] arr;
    return 0;
}