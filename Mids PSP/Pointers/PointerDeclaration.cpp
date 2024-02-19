#include <iostream>
using namespace std;

int main()
{
    // Pointer initialized with NULL
    // Then request memory for the variable

    int *p = NULL; 
    p = new int;   

            // OR

    // Combine declaration of pointer 
    // and their assignment
    int *p = new int; 

    delete p;
}