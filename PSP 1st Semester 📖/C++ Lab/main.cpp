#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    bool validFormat = true;

    do {
        cout << "Enter your 1st number: ";
        if (!(cin >> a)) {
            cout << "Your format is incorrect!" << endl;
            validFormat = false;
            cin.clear();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validFormat = true;
        }
    } while (!validFormat);

    do {
        cout << "Enter your 2nd number: ";
        if (!(cin >> b)) {
            cout << "Your format is incorrect!" << endl;
            validFormat = false;
            cin.clear();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validFormat = true;
        }
    } while (!validFormat);

    int sum = a + 5 * b - c;
    cout << "Your answer is: " << sum;

    return 0;
}

// Explanation:

// We introduce a boolean variable validFormat to keep track of whether the format of input is valid or not.
// We use a do-while loop to repeatedly ask the user to enter the first number until a valid format is provided.
// Inside the loop, we check if the input format is invalid using !(cin >> a). If it's invalid, we display an error message, set validFormat to false, and clear the input buffer to prevent further incorrect inputs.
// We repeat the same process for the second number.
// After both numbers have been successfully inputted, we calculate the sum and display the result.
// With this approach, if the user enters an invalid format, the program will keep asking until a valid format is provided.