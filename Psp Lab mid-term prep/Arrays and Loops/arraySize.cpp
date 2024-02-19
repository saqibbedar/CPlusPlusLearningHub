// Use sizeof() function to find the size of an array

#include <iostream>
using namespace std;

int main()
{
	int arr[5];

    int arrayLength = sizeof(arr)/sizeof(int);
    
    std::cout<<arrayLength<<std::endl;

    for (int i = 0; i < arrayLength; i++)
    {
        cout<<"Enter a number";
        cin>>arr[i];
        cout<<"You entered "<<arr[i]<<endl;
    }
}
    
