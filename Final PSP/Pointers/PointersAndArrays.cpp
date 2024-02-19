// Read array using pointer and display it 

#include <iostream>

// input values form user
void read(int a[]){
    std::cout<<"Enter values for array\n";
    for (int i = 0; i<5; i++)
        std::cin>>*(a+i); // can write a[i] || *a then a++
}

void displayArray(int a[]){
    std::cout<<"\nYou Entered Values\n";
    for (int i = 0; i<5; i++)
        std::cout<<a[i]<<" ";  // can write a(a+i) || *a then a++
}
int main()
{
    int a[5];
    int *ptr = a; // holds the address of first elem of array

    read(ptr);
    displayArray(ptr);

    return 0;
}