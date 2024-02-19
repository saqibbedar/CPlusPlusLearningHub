#include <iostream>
using namespace std;

int main()
{
    int *a = new int(10);
    cout<<*a<<endl;
    double b[] = {1.0, 2.0};
    cout<<sizeof(b)<<endl; // 16
    double *ptr = b;
    cout<<sizeof(ptr); // 4
    delete a;
    return 0;
}