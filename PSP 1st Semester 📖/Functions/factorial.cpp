#include <iostream>
using namespace std;

// Find factorial
void fact(int &n){
    for (int i = n-1; i >= 1; i--)
    {
        n*= i;
    }
}


// read number from user
int read(int& n){
    cout<<"Enter a Number: ";
    cin>>n;
}

int main()
{
    int a;
    read(a);
    int c = a;
    fact(a);

    cout<<"factorial of "<< c << " is "<< a;
}