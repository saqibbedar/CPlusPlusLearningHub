// write a function to check small and maximum number in an array
#include <iostream>
using namespace std;

const int SIZE = 5;

void inputArray(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }
}

void minNum(int a[SIZE]){

    int min = a[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout<<"Small number in array is: "<<min<<endl;
}

void maxNum(int a[SIZE]){

    int max = a[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout<<"Greater number in array is: "<<max<<endl;
}

int main()
{
    int a[SIZE];
    cout<<"\nPlease enter value for Array: \n";
    inputArray(a);
    minNum(a);
    maxNum(a);
    return 0;
}