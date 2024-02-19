#include <iostream>
using namespace std;

int main()
{
    int high{100};
    int low{75};

    const int *ptr = &high;

    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"ptr = "<<ptr<<endl;

    ptr = &low;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"ptr = "<<ptr<<endl;

    cout<<"ptr address: "<<&ptr;

    return 0;
}