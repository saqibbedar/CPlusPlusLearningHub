#include <iostream>
#include <cmath>
using namespace std;

// Question: sqrt(x+y)
int main(){
    double num1, num2, sum;

    cout<< "Enter your 1st Number: ";
    cin>> num1;

    cout<< "Enter your 2nd Number: ";
    cin>> num2;

    // Compute the inputs
    
    sum = sqrt((num1 + num2));

    cout<<"Your answer is: "<<sum;
}

// Question: F = sqrt((3x^2 + 4y - 3xy)/ (x^2 + y^2))

