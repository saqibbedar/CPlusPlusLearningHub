#include <iostream>
using namespace std;

/*
    *****
    ****
    ***
    **
    *
*/
void ptr2();

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    ptr2();
}

// another condition can be used to draw the same pattern (int j = 0; j <= 5-i; j++)

void ptr2(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 5-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}