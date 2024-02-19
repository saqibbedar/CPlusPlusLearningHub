//Write sum of Diagonal 

#include <iostream>
using namespace std;

// Fixed array size
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

// Sum of the diagonal
void sumofDiagonal(int a[S1][S2], int &sum) {

    for (int i = 0; i < S1; i++) {
        for (int j = 0; j < S2; j++)
        {
            if (a[i] == a[j])
            {
                sum += a[i][j];
            }
        }
    }
}

int main(){
    int a[S1][S2];
    cout<<"\nEnter values for Array\n";
    inputArray(a);
    int sum = 0;
    sumofDiagonal(a, sum);
    cout<<"\nSum of Diagonal is: "<< sum;
}