#include <iostream>
using namespace std;

void bubbleSort (int a[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    
}

int main(){
    int a[5] = {5, 4, 1, 9, 5};
    bubbleSort(a, 5); // array and its size
    
    cout<<"\nSorted Array\n";

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    
}