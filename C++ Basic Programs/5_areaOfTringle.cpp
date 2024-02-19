// find area of triangle: Area = 1/2 (B* h)

#include <iostream>
using namespace std;

int main()
{
    int base, height;
    cin>>base >> height;
    double areaOfTriangle = 0.5 * (base * height);
    cout<<areaOfTriangle;
}