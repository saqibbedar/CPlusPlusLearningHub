#include <iostream>
using namespace std;

void rev(int& n); // function to reverse value by reference

int main()
{
    // reverse a number and print it's sum
    // int n,r, sum = 0;
    // cin>>n;
    // while(n > 0){
    // r = n%10;
    // cout<<r<<endl;
    // n = n/10;
    // sum = sum + r;
    // }
    // cout<<sum<<endl;

    // Reverse a number and print it's value
    int n;
    cin>>n;

    while (n > 0)
    {
        int r = n%10;
        cout<<r<<endl;
        n/=10;
    } 
}


// function pass by reference
void rev(int& n){

    while (n != 0)
    {
        int r = n%10;
        cout<<r;
        n/=10;
    }
}