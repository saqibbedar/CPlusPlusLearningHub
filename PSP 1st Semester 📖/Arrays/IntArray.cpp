#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {3, 7, 2, 8, 1};
    int sum = 0;
    for (int i = 0; i < 5; i += 2)
    {
        sum = sum + numbers[i];
    }
    cout<<"The number is: "<< sum; // 3+2+1 = 6
}