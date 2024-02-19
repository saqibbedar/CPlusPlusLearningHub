#include <iostream>
using namespace std;

/* find greater and less than number between two numbers
    1. read a, b
    2. if (a>b)
    3.      print (a>b)
    4. else
    5.      print (a<b) 
*/

// int main()
// {
//     int a, b;

//     cout<< "Enter 1st number: ";
//     cin>>a;
//     cout<< "Enter 1st number: ";
//     cin>>b;

//     if (a>b)
//     {
//         cout<< a << " is greater than " << b;
//     }
//     else{
//         cout<< a << " is less than " << b;
//     }
// }

// int main(){
//     int a, b, c; // find greater number between 3 numbers

//     cout<<"Enter your 1st number: ";
//     cin>>a;
//     cout<<"Enter your 2nd number: ";
//     cin>>b;
//     cout<<"Enter your 3rd number: ";
//     cin>>c;

    // if (a>(b, c))
    // {
    //     cout<<a <<" greater than " << b + "\n" << c;
    // }
    // else if (b>(a, c))
    // {
    //     cout<<b <<" greater than " << a + "\n" << c;
    // }
    // else if (c>(a, b))
    // {
    //     cout<<c <<" greater than " << a + "\n" << b;
    // } 
// }

// Check if number is negative or positive and if -ve then convert it into positive
// int main(){
//     int a;
//     cout<<"Enter a number: "; 
//     cin>>a; 
//     if(a >= 0)
//     {
//         cout<<a <<" is positive number " ;
//     }
//     else
//     { 
//         cout<<  a * (-1) << " is negative number "; // * (-1) TO CONVERT A -VE TO POSITIVE
//     }
// }

int main(){
    int a, b;
    cin>>a>>b;
    switch (a>b)
    {
    case true:
        cout<<a << " > "<< b;
        break;
    default:
        cout<<a << " < "<< b;
        break;
    }
}