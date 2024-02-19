#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 5, 2, 2, 1};

    int arrayLength = sizeof(a)/ sizeof(int);

    int count = 1;
    for (int i = 0; i < arrayLength; i++)
    {
       for (int j = 1; j < arrayLength; j++)
        {
            if(a[i] == a[j]){
                count++;
            }
        }
        cout<<"frequency of "<<a[i]<<" is: "<<count <<endl;
        count = 0;
    }
}