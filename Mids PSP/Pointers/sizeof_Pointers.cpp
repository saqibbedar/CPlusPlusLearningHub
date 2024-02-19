#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int *p1;
    double *p2;
    string *p3;

    // all pointers will have same size 
    cout<<sizeof(p1)<<"\n"; // 4
    cout<<sizeof(p2)<<"\n"; // 4
    cout<<sizeof(p3)<<"\n"; // 4

    // Now it will give actual size of datatypes 
    cout<<sizeof(*p1)<<"\n"; // 4
    cout<<sizeof(*p2)<<"\n"; // 8
    cout<<sizeof(*p3)<<"\n"; // 24    
}