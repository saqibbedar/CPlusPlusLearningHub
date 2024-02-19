#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Q1:
    // float a = 15, b = 10;
    // cout<<b/a*a<<" "<< b% a*a<<endl;
    // output is: 10  150

    // Q2:
    // int delta = 10;
    // int x = 7;

    // if(x%2){
    //  delta = delta + x;
    // }
    // x = x+1;

    // if (!(x)%2)
    // {
    //     delta = delta + x;
    // }
    // x = x +2;

    // if (!(x%2))
    // {
    //     delta = delta + x;
    // }
    // cout<<"Delta = "<<delta;
    // output is: Delta = 27

    // Q3: 
    // int x = 3;
    // if (x = 5){
    //     if (x = 0)
    //     {
    //         cout<<"Hello from if#2. x = "<<x<<endl;
    //     }
    //     else{
    //         cout<<"Hello from else. x = "<<x<<endl;
    //     }
    // }

    // x was assigned to 5 so now x = 5;

    // if (x < 3)
    // {
    //     if (x = 2)
    //     {
    //         cout<<"Hello from if#4. x ="<<x<<endl;
    //     }
    //     else{
    //         cout<<"Hello from else. x = "<<x<<endl;
    //     }
    // }
    // output:
    // Hello from else. x = 0
    // Hello from if#4. x =2



    // int l = 10; 
    // cout<<l++<<endl; // 10
    // cout<<++++++l<<endl; // 14 
    // cout<<l++<<endl; // 14 because increment is after x is printed, if next line will be printed then answer of l is 15

    // Q4. write the output of the following:
    int g = 2;
    int arr[10]= {55, 45, 35, 25, 15, 5, -15, -35, -45, -55};
    cout<<arr[g++] <<endl; // g = 3
    cout<<++arr[++g]<<endl; // g = 4
    cout<<----arr[++++g]<<endl; // g = 6
    cout<<arr[arr[arr[arr[2*(g-=4)+1]+g]+19*g]-16]<<endl;
    /*
    output:
    35
    16
    -17
    -55
    */
    return 0;
}