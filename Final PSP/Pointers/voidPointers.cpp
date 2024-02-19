// testing void pointers

#include <iostream>

int main(){
    int n = 10;
    float f = 10.5;
    char c = 'a';

    void *ptr; // void pointer to be fit on any datatype

    ptr = &n;
    std::cout<<"*ptr ="<<*((int*)ptr)<<std::endl; // *ptr =10
    std::cout<<"ptr ="<<ptr<<std::endl; // ptr = any addr like this 0x61ff08

    ptr = &f;
    std::cout<<"*ptr ="<<*((float*)ptr)<<std::endl; // *ptr =10.5
    std::cout<<"ptr ="<<ptr<<std::endl; // *ptr =addr

    ptr = &c;
    std::cout<<"*ptr ="<<*((char*)ptr)<<std::endl; // *ptr =a
    std::cout<<"ptr ="<<ptr<<std::endl; // *ptr =addr

    return 0;
}