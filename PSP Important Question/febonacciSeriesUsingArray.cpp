#include <iostream>
using namespace std;

int fibonacciSeries(int *arr, int n){
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i< n ; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    fibonacciSeries(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    
    delete[] arr;
    return 0;
}