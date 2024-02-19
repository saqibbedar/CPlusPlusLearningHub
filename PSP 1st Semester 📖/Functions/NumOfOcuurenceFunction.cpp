#include <iostream>
using namespace std;

const int SIZE = 5;

void inputArray(int a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }
}

void numFrequency(int a[SIZE]){
    int count = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            cout<<a[i]<<" repeated "<<count <<" times"<<endl;
            count = 0;
        }
    }

int main()
{
    int a[SIZE];
    inputArray(a);
    numFrequency(a);
}