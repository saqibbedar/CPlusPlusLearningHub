// prime numbers from 1 to 100
#include "iostream"
using namespace std;
int main(){
    int i, j;
    for (i = 0; i <= 100; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout<<i <<endl;
        }
    }
}