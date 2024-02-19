// obtain the volume of a rectangular box
// formula: Volume = Length × Breadth × Height

#include <iostream>
using namespace std;

int main()
{
    int l, b, h; // l = length, b = breath, h = height
    cin>>l >> b >> h;
    int volume = l * b * h;
    cout<<volume;
}