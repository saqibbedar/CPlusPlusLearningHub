#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    // Message for user
    string msg = "Area = 22/7(r^2)";

    // Showing user the equation:
    cout<<msg<<endl;

    // declare variables
    double r, p = 3.14, totalArea;

    cout<<"Enter value for r: ";
    cin>>r;

    // Compute the given data:
    totalArea = 3.14 * pow(r, 2); 

    // Print the result
    cout<<"Your answer for equation "<< msg << " is " << totalArea;

}