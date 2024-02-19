#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2 == 0){
        cout<<n <<" is even number "<<endl;
    }
    else{
        cout<<n <<" is odd number " <<endl;
    }
    }
}

