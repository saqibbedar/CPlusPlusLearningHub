#include <iostream>
using namespace std;

int main()
{
    int i, j = 5;
    int arr1[5], arr2[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>arr1[i];
    }

    cout<<"\nThis is reverse of 1st array:\n";

    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[4-i];
        cout<<arr2[i]<<endl;
    }

    // find largest and smallest Number in second array:

    int largestNum = arr2[0];
    int smallestNum = arr2[0]; 

    for (i = 0; i < 5; i++)
    {
        if (arr2[i] > largestNum){
            largestNum = arr2[i];
        }
        if(arr2[i] < smallestNum)
        {
            smallestNum = arr2[i];
        }
    }

    cout<<"\nLargest Number in array2 is: "  <<largestNum;
    cout<<"\nSmallest Number in array2 is: " <<smallestNum;


    // check the number of occurrence of each number in array2: 
    // cout<<"\nThis is reverse of 1st array:\n";
    
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