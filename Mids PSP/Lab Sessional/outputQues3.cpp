#include <iostream>
using namespace std;

int main()
{
    int x = 6, y = 35;
    if(y/x > 2){
        if(y%2 != 2)
        x+= 2;
        cout<<x<<"\n"<<y; // 8
        cout<<x<<y; // 35835
    }
}