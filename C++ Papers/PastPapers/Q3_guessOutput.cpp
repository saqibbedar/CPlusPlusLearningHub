#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 2, c = 3;
    // bool b1 = (a++ != 0) || ((a <= ++b) && (++c < b)); 
    // cin>>a>> b>> c;
    a+= b;
    c = c + a;

    cout<<a <<" "<< b << " "<< c;
}