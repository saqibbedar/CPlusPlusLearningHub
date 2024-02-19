#include <iostream>
using namespace std;

int main()
{
    int found = 1, count = 10;
    if (!found || --count == 0)
        cout<<"danger"<<endl;
        cout<<"count = "<<count<<endl; // count = 9
}