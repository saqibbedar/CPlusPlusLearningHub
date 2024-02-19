// Write a function to accept an array and then accept values for remove and replacement of numbers in array and then make functions to perform the functionality... 

#include <iostream>
using namespace std;

const int S1 = 2;
const int S2 = 2;

// Read array
void inputArray(int a[S1][S2]) {
    for (int i = 0; i < S1; i++) {
        for (int j = 0; j < S2; j++)
        {
            cin >> a[i][j];
        }
    }
}

// find and remove number from array
void popNum(int a[S1][S2], int &removeNum, int &replaceNum){
        for (int i = 0; i <S1; i++)
        {
            for (int j = 0; j < S2; j++)
            {
                if (removeNum == a[i][j])
                {
                    a[i][j] = replaceNum;
                    break;
                }
            }
        }     
}

// display the updated array
void display(int a[S1][S2]){
    for (int i = 0; i < S1; i++)
    {
        for (int j = 0; j < S2; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int a[S1][S2];

    // Prompt to user
    cout<<"\nEnter values for Array:\n";
    inputArray(a);
    
    // Read Remove and Replace number from user for an array
    int removeNum, replaceNum;
    cout<<"\nEnter number that you want to remove from an array\n";
    cin>>removeNum;
    cout<<"\nEnter number that you want to replace with removed number\n";
    cin>>replaceNum;

    // calling function for removing and replacing values in an array
    popNum(a, removeNum, replaceNum);

    // Display the result of updated array
    cout<<"\nUpdated Array:\n";
    display(a); // display function to print the values
}