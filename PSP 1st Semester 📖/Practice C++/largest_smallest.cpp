#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    // declare variables
    int num1, num2, num3, num4;

    // prompt the user to give four numbers
    cout<<"Enter four numbers: "<< endl;
    cin>> num1>> num2 >> num3 >> num4;

    // find the largest one
    int largestNumber = max(max(max(num1, num2), num3), num4);
    cout<<"The highest number is " << largestNumber<< endl; // printing the result

    // find the smallest one
    int smallestNumber = min(min(min(num1, num2), num3), num4);
    cout<<"The smallest number is " << smallestNumber<< endl; // printing the result

    return 0;
}