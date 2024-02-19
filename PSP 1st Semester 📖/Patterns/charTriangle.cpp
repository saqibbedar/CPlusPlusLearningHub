// display triangle of characters based on size given by user:
#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int n;
    cin>>n; // for height of outer loop:

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}