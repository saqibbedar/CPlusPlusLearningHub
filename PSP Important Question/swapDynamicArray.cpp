#include <iostream>
using namespace std;

void swap(int *p1,int *p2){
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

void input(int *ptr, int n){
    for(int i = 0; i<n; i++){
        cin>>ptr[i];
    }
}

void display(int *ptr, int n){
    for(int i = 0; i<n; i++){
        cout<<ptr[i]<<" ";
    }
}

void revArray(int *ptr, int n){
    for(int i = 0; i<n/2; i++){
        swap(&ptr[i], &ptr[n - 1 - i]);
    }
}

int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr = new int[n];

    cout<<"Enter values for array\n";
    input(arr, n);

    cout<<"Array values before swap\n";
    display(arr, n);

    revArray(arr, n);
    cout<<"\nArray values after Reverse\n";
    display(arr, n);

    delete[] arr;
    return 0;
}