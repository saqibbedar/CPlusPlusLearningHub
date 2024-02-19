#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 1;
    while (i <= 4)
    {
        j = 1;
        while (j <= 6)
        {
            if ((!(i + j) % 2))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            break;
        }
        break;
    }  
}