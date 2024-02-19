#include <iostream>
using namespace std;

int main()
{
    int x;
    int *ptr;

    cout<<"Enter value for Pointer: ";
    ptr = new int; // allocate memory to pointers
    cin>>*ptr;
    
    x = *ptr; // assigning x pointers value

    cout<<"\n"<<x<<"\n"; 

    cout<<&x<<"\n";

    cout<<ptr;

    delete ptr; // delete allocated memory

    return 0;
}