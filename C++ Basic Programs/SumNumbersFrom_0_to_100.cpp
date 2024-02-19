#include <iostream>
using namespace std;

int main()
{
    // Summing the numbers from 1 t0 100;

    int sum, a, n;
    n = 100; // final point
    a = 1; // initial point 
    sum = n*(a + 100)/2; 
    cout<<sum; 
    
    // using for loop but above approach is better
    
    sum = 0;
    for(int i = 1; i<= n; i++){
        sum += i;
    }
    cout<<endl<<sum;


    // int n;
    // cin>>n;

    // switch (n%2 == 0)
    // {
    // case true:
    //     cout<<"Even";
    //     break;
    // case false:
    //     cout<<"Odd";
    //     break;
    // }
}

