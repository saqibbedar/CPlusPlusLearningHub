#include <iostream>
using namespace std;

int *add(int a, int b){
    int *result = new int;
    *result = a+b;
    return result;
}

int main()
{
    int a = 10;
    int b = 20;
    int *result = add(a, b);
    cout<<*result;
    
    delete result;
    return 0;
}