#include <iostream>
#include <string>
using namespace std;

int main() {
    int l1, l2, l3;
    cin>>l1>>l2>>l3;
    if(l1==l2 && l1 == l3){
        cout<<"Three are equal";
    }
    else if (l1 == l2 && l1 != l3 || l1 != l2 && l1 == l3){
        cout<<"two are equal";
    }
    else{
        cout<<"three are different";
    }

    int age;
    cin>>age;

    switch(age){
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
        cout<<"Child";
        break;
        case 14: case 15: case 16: case 17: case 18:
        cout<<"Teenager";
        break;
        default: 
        cout<<"Adult";
        break;
    }
    // else if ((a == b)? true: (a != c)? true: (c==b)? true:false){
    //     cout<<"Two sides are equal";
    // }
    // switch ((a == 5)? 1: (a != 6)? 2:3)
    // {
    // case 1:
    //     cout<<"Hello";
    //     break;
    
    // case 2:
    //     cout<<"Hello 2";
    //     break;
    // case 3:
    //     cout<<"Hello 3";
    //     break;
    // }
    
    // int a, b;

    // while (true) {
    //     cout << "Enter the first integer (a): ";
    //     if (cin >> a) {
    //         break; // If 'a' is a valid integer, exit the loop
    //     }
        
    //     cin.clear(); // Clear any error flags
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any remaining input on the current line
    //     cout << "Invalid input. Please enter a valid integer." << endl;
    // }

    // while (true) {
    //     cout << "Enter the second integer (b): ";
    //     if (cin >> b) {
    //         break; // If 'b' is a valid integer, exit the loop
    //     }

    //     cin.clear(); // Clear any error flags
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any remaining input on the current line
    //     cout << "Invalid input. Please enter a valid integer." << endl;
    // }

    // // Now you can use 'a' and 'b' in your code.
    // cout << "You entered valid integers: a = " << a << " and b = " << b << endl;

    return 0;
}

// In this code:

// We use a while (true) loop to repeatedly ask the user for input.
// We use if (cin >> a) to check if the input can be successfully converted to an integer. If it can, we break out of the loop.
// If the input cannot be converted to an integer, we use cin.clear() to clear any error flags and cin.ignore() to discard any remaining input on the current line.
// We then display an error message and continue prompting the user to enter a valid integer.
// This way, the program continues until the user enters a valid integer, and any non-integer input is handled with an error message.