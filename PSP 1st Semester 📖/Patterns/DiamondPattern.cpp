#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while (true)
    {
        if (n%2 == 0)
        {
            cout<<"invalid input, please enter an odd number";
            cin>>n;
        }
        else{
            // to draw a star declaring variables
            int spa, row, col;
            // loop for rows
            for (row = 1; row <= 4; row++)
            {
                // loop for spaces
                for (spa = 1; spa <= 4-row; spa++){
                    cout<<" ";
                }

                // loop fo printing *
                for (col = 1; col <= row* 2-1; col++)
                {
                    cout<<"*";
                }
                
                cout<<endl;
            }

            // second pattern
            for (row = 3; row >= 3; row--)
            {
                // loop for spaces
                for (spa = 1; spa <= 4-row; spa++)
                {
                    cout<<" ";
                }
                // loop for stars
                for (col = 1; col <= 2*row-1; col++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
            
        }
            break;                     
    }
}