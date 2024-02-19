#include <iostream>

int main()
{
    int n = 100;

    int *p1 = &n; 
    int *p2 = NULL;

    std::cout<<"*p1 = "<<*p1<<std::endl; // output: *p1 = 100
    std::cout<<"*p2 = "<<*p2<<std::endl; // program will stop here cause assigned with NUll
    std::cout<<"*p1 = "<<*p1<<std::endl; // will not print this 

    return 0;
}