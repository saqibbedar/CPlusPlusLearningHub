#include <iostream>
using namespace std;

void reverseNum(int n){
    cin>>n;
    while (n!= 0)
    {
        int result = n%10;
        cout<<result;
        n/= 10;
    }
}

int main()
{
    int n;
    reverseNum(n);
}