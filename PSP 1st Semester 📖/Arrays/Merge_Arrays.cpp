/*
    write a program that will take two arrays of size N as input where N is a constant, then elements both arrays will be merged into third array of size 2N by placing the elements of both arrays in alternative position.

    Example: 

    arr1 is {1 , 3, 8, 10}
    arr2 is {2, 4, 5, 6, }
    after merge:
    arr3 is {1, 2, 3, 4, 5, 6, 8, 10} 
*/

#include <iostream>
using namespace std;

int main()
{
    const int N = 4;
 
    int arr1[N] = {1, 3, 8, 10};
    int arr2[N] = {2, 4, 5, 6};
    int result[8];
 
    int increment1 = 0;
    int increment2 = 1;

    int arrLength = sizeof(result) / sizeof(int);

    for (int i = 0; i < N; i++)
    {
        result[increment1] = arr1[i];
        increment1 += 2;
        result[increment2] = arr2[i];
        increment2 += 2;
    }

    // Output the merged array
    for (int i = 0; i < arrLength; i++)
    {
        cout << result[i] << " ";
    }
}
