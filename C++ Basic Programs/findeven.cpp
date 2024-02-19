// write a program that finds even numbers only by input form user
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1 >> num2;
    while (num1 <= num2)
    {
        if (num1%2 == 0)
        {
        cout<< num1 << " is Even"<< endl;
        }
        else
        {
        cout<<num1 << " is odd"<<endl;
        }
        num1++;
    }
}