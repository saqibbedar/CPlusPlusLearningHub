#include <iostream>
using namespace std;

void read(int **arr, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for(int j= 0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
}
void display(int **arr, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for(int j= 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void matrixMul(int **a1, int **a2, int **a3, int rows, int cols){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
                a3[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                a3[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
}

void alloc(int **arr, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
}

void delloc(int **arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        delete[] arr[i];
    }
}

int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int **a1 = new int *[rows];
    alloc(a1, rows, cols);
    int **a2 = new int*[rows];
    alloc(a2, rows, cols);
    int **a3 = new int*[rows];
    alloc(a3, rows, cols);

    read(a1, rows, cols);
    read(a2, rows, cols);
    matrixMul(a1, a2, a3, rows, cols);
    display(a3, rows, cols);

    delloc(a1, rows, cols);
    delloc(a2, rows, cols);
    delloc(a3, rows, cols);

    delete[] a1;
    delete[] a2;
    delete[] a3;
    return 0;
}