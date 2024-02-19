#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void revArray(int *arr, int n){
    for(int i = 0; i < n/2; i++)
     swap(&arr[i], &arr[n-1-i]);
}

int main(){
    int arr[5] = {1, 3, 5, 7, 9};

    revArray(arr, 5);
    for(int i = 0; i<5; ++i)
        cout<<*(arr+i)<<" ";
        
    return 0;
}