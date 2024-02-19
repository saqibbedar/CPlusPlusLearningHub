#include <iostream>
using namespace std;

int main()
{
    int x = 13, y = 20;
    while(x != y){
        if (x>y)
        {
            x-=y;
        }
        else{
            y-=x;
        }
    }
    cout<<x; // 1
}