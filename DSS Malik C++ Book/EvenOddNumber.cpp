#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n%2 == 0)
        cout<<"Even"<<endl;
    else
        cout << "Odd" << endl;

    // using ? operator
    cout<<(n%2 == 0 ? "Even" : "Odd")<<endl;

    (n%2 == 0 ? (cout<<"Even"<<endl, 0): (cout<<"Odd"<<endl, 0));

    return 0;
}