// write a c++ program to swap values of between integers

#include <iostream>

int main()
{
    int a,b,temp; // variables declared

    a = 10; 
    b = 20; 

    // Reverse Logic
    
    temp = a; // temp becomes 10
    a = b; // a becomes 20
    b = temp; // b becomes 10 

    std::cout<<"a = "<<a<<std::endl; // 20
    std::cout<<"b = "<<b<<std::endl; // 10

    return 0;
}