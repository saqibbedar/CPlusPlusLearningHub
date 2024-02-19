#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 4444;
    string num = to_string(n);

    if (num.length() == 4)
    cout<<"hello";
    else
    cout<<"not equal to four";
    

    return 0;
}