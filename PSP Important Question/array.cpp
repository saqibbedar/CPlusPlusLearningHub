#include <iostream>
using namespace std;

void readArray(int *ptrArray, int size){
    cout<<"\nEnter values for Array\n";
    for(int i= 0; i<size; i++){
        cin>>ptrArray[i];
    }
}
void display(int *ptrArray, int size){
    cout<<"\nValues you entered in array\n";
    for(int i= 0; i<size; i++){
        cout<<ptrArray[i]<<" ";
    }
}
int main()
{
    int n;

    // incase if user enter a -ve number
    do {
        cout << "Enter the size of the array (positive integer): ";
        cin >> n;

        if(n <= 0) {
            cout << "Invalid size. Please enter a positive integer.\n";
        }

    } while(n <= 0);

    int *arr = new int[n];
    readArray(arr, n);
    display(arr, n);

    delete[] arr;
    return 0;
}