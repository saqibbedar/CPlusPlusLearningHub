// Write a function to find the number of occurrence based on the users targeted value. 

#include <iostream>
using namespace std;

const int S1 = 2;
const int S2 = 2;

void read(int a[S1][S2]){
     for (int i = 0; i < S1; i++)
     {
        for (int j = 0; j < S2; j++)
        {
           cin>>a[i][j];
        }
        
     }
     
}

int frequency(int a[S1][S2], int& target){

    int count = 0;
        for (int i = 0; i < S1; i++)
        {
            for (int j = 0; j < S2; j++)
            {
                if (a[i][j] == target)
                {
                    count++;
                }

            }
            
        }

    return count;

}

int main()
{
    int a[S1][S2];
    cout<<"\nEnter values for array\n";
    read(a);

    int target;
    cout<<"\nEnter target value\n";
    cin>>target;


    int val = frequency(a, target);

    if (val > 0)
    {
        cout<<"Number of occurrence of "<< target <<" is " << val;
    }
    
    return 0;
    
}