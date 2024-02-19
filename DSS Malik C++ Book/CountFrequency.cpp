#include <iostream>
using namespace std;

int main(){

    int a[3] = {0};

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        cin>>a[i];
    }

    int length = sizeof(a)/sizeof(a[0]);
    int c = 0; // count frequency

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        
        (c > 1 ? (cout << a[i] << " occurs " << c++ << " times" << endl, 0) : 0);


        c=0;
    }

    return 0;
}