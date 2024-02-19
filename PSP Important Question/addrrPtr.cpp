#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout<<(&x)<<endl; // give address of variable
    cout<<*(&x)<<endl; // give value cause of pointer 
    return 0;
}