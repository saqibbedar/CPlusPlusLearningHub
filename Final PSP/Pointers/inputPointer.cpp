#include <iostream>
using namespace std;

int main()
{
    int a;
    int b = 20;
    int *ptr = &a;
    ptr = &b;
    cin>>*ptr; // if input is for example 10
    cout<<*ptr<<"\n"; // output 10
    cout<<b; // output 10 
    
    return 0;
}