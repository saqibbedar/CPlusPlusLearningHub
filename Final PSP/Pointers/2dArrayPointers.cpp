/*
Question:

Create a C++ program that dynamically manages a 2D array and uses a function to display its elements. The program should prompt the user to enter the number of rows and columns for the 2D array, allocate memory for it, initialize the array with unique values, and then display the elements using a separate function. Ensure proper deallocation of memory to prevent memory leaks.

*/

#include <iostream>

// Function to display a 2D array
void display2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example 2D array
    int rows = 3;
    int cols = 4;

    // Allocate memory for the 2D array
    int** myArray = new int*[rows];
    for (int i = 0; i < rows; i++) {
        myArray[i] = new int[cols];
    }

    // Initialize the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            myArray[i][j] = i * cols + j;
        }
    }

    // Pass the 2D array to the function
    display2DArray(myArray, rows, cols);

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; i++) {
        delete[] myArray[i];
    }

    delete[] myArray;

    return 0;
}
