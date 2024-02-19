#include <iostream>

int main(){
    int n;
    std::cin>>n;

    int *ptr;
    ptr = &n;

    std::cout<<*ptr<<std::endl; // return the value of n because holding its addr
    std::cout<<ptr<<std::endl; // return the address of n

    return 0;
}