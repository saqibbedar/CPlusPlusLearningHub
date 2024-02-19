#include <iostream>
#include <cmath>
using namespace std;

// Question: F = sqrt((3x^2 + 4y - 3xy)/ (x^2 + y^2))

int main(){
    double x, y, f, power = 2;

    cout<< "Give value of x: ";
    cin>> x;

    cout<< "Give value for y: ";
    cin>> y;

    // compute the given data
    f = sqrt((3 * pow(x, power) + (4 * y) - (3 * x * y))) / sqrt(pow(x, power) + pow(y, power));

    cout<< "Your answer is: "<< f;
}