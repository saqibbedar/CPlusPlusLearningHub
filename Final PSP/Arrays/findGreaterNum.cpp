// write a c++ program to find greater number in array

#include <iostream>

int max(int a[]){
    int maxNum = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > maxNum)
        {
            maxNum = a[i];
        }
    }
    return maxNum;
}

int main()
{
    int a[5] = {1, 3, 5, 7, 9};

    int maxNum = max(a); // max() will return max number in array named a
    std::cout<<maxNum; 

    return 0;
}