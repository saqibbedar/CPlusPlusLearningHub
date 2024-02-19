#include <iostream>
using namespace std;

int main()
{
    /*
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5- i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }

    /*
    1 2 3 4 5
      1 2 3 4
        1 2 3
          1 2
            1
    */

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
       
}