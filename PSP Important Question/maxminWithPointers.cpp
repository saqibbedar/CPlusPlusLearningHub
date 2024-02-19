#include <iostream>
using namespace std;

int *min(int *arr, int size){
    int *minNum = arr;
    for(int i = 0; i<size; i++){
        if(*minNum > *(arr+i))
            minNum = arr + i;
    }
    return minNum;
    
}

int *max(int *arr, int size){
    int *maxNum = arr;
    for(int i = 0; i<size; i++){
        if(*maxNum < *(arr+i))
            maxNum = arr + i;
    }
    return maxNum;
}

int main()
{
    int a[5] = {1, 3, 4, 5, 0};
    int *minNum = min(a, 5);
    cout<<*minNum;
    return 0;
}