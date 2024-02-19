#include <iostream>
using namespace std;

int main()
{
    // Take a number and print pass for true and fail for false
    
    bool num1;

    cout<<"Enter a Number 1 or 0: ";
    cin>>num1;

    if (num1)
    {
        cout<<"Pass";
    }
    else{
        cout<<"Fail " <<endl;
    } 

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // bool isEven = (n%2);
    // switch (isEven)
    // {
    // case true:
    //     cout<<"Even";
    //     break;
    // case false:
    //     cout<<"odd";
    //     break;
    // default:
    //     cout<<"Invalid Input";
    //     break;
    // }

    int n1, n2;
    cin>> n1>> n2;

    int a = n1%2;
    int b = n2%2;

    // if (a == 0 && b == 0)
    // {   
    //     cout<<n1<<" "<<n2<<" are "<<"even numbers";
    // }
    // else if (a == 0 && b == 1)
    // {
    //     cout<<n1<<" is even"<<endl;
    //     cout<<n2<<" is odd"<<endl;
    // }
    // else if(a == 1 && b == 0){
    //     cout<<n1<<" is odd"<<endl;
    //     cout<<n2<<" is even"<<endl;
    // }

    // optimized way to do it:
    // if (n1%2 == 0)
    // {
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"odd";
    // }
    // if (n2%2 == 0)
    // {
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }
    
    switch (a == 0)
    {
    case true:
        cout<<"Even";
        break;
    case false:
        cout<<"Odd";
        break;
    }
    switch (b == 0)
    {
    case true:
        cout<<"Even";
        break;
    case false:
        cout<<"Odd";
        break;
    }
}