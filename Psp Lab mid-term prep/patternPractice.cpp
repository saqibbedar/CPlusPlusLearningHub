// output is below the whole code 

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    while (count <= 10)
    {
        if (count%2 != 0)
        {
        cout<<count <<endl << " "  <<endl; // Print odd numbers!
        }
        count++;
    }

    cout<<endl;

        int i = 10;

        while (i >= 1)
        {
            if (i % 2 != 0)
            {
            cout<<i<<endl<<" "<<endl;
            }
            i--;
        }
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;   
    // }

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*" <<" ";
        }
        cout<<endl;
    }

    cout<<"\n This is another version of stars \n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

/*
1

3

5

7

9


9

7

5

3

1

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
* * * * *
 * * * *
  * * *
   * *
    *

 This is another version of stars
****
***
**
*
*/