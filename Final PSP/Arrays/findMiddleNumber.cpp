#include <iostream>

int middleNumber(int size){
    int mid = size/2;
    return mid;
}

int main()
{
    const int size = 11;
    int a[size] = {1, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
    
    std::cout<<"Middle number in array is: "<<a[middleNumber(size)]; // 12

    return 0;
}