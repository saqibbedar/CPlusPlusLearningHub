/*
Write a C++ program that performs the following operations:

Takes an integer input n as the size of two arrays.
Dynamically allocates memory for two arrays arr1 and arr2, each of size n.
Accepts user inputs for the elements of arr1 and arr2.
Merges the two arrays into a third array arr3.
Implements a sorting algorithm to sort the elements of arr3.
Displays the sorted array arr3.
Properly deallocates the dynamically allocated memory.
Ensure that your program includes functions for input, merging, swapping, sorting, and display as specified in the provided code. Also, handle memory allocation and deallocation appropriately.

Note: You may consider using the bubble sort algorithm for the sorting operation.
*/

#include <iostream>
using namespace std;

void input(int *arr, int n){
    for(int i = 0; i<n; i++){
        cin>>*(arr+i);
    }
}

void mergeArray(int *arr1, int *arr2, int *arr3, int n) {
    int size = n / 2;
    for (int i = 0; i < n; i++) {
        if (i < size)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - size];
    }
}

void swap(int *a1, int *a2){
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

void sortArray(int *arr, int n){  
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    } 
}

void display(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    int *arr3 = new int[n+n];

    cout<<"\nEnter value for arr1\n";
    input(arr1, n);
    cout<<"\nEnter value for arr2\n";
    input(arr2, n);
    mergeArray(arr1, arr2, arr3, n+n);

    sortArray(arr3, n+n);
    
    cout<<"\nArray after merge\n";
    display(arr3, n+n);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}