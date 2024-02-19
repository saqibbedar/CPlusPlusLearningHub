#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Question: F = sqrt((3x^2 + 4x + 5)/(x+y)(x-y))

int main(){
    double x, y, f, power = 2;

    string msg = "F = sqrt((3x^2 + 4x + 5)/(x+y)(x-y))";

    // Show user formula:
    cout<<msg<<endl;

    cout<<"Give value for x: ";
    cin>>x;

    cout<<"Give value for y: ";
    cin>> y;

    // compute the given data
    f = (2 * pow(x, power) + (4 * x + 5))/ ((x + y) * (x - y));

    cout<< "Your answer for equation " << msg << " is = "<< f;

    return 0;
}