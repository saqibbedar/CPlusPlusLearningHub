// Quadratic equation;

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // double a, b, c, x, y, z;
    // cin>> a>> b>> c;
    // x = b * b - 4 * a * c;
    // y = (-b - sqrt(x))/ (2 * a);
    // z = (-b + sqrt(x))/ (2 * a);
    // cout<<y<<endl;
    // cout<< z<<endl;

    int n;
    cin>>n;
    int fact = 1; //c = 1;
    // while (c<= n)
    // {
    //     fact = fact * c;
    //     c = c + 1;
    // }
    // cout<<fact;
    // return 0;

    for (int c = 1; c<=n; c++){
        fact = fact * c;
    }
    cout<<fact;
}