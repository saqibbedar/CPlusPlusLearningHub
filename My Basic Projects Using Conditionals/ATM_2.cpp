#include <iostream>
#include <string>
using namespace std;

const string username = "Saqib Bedar";
const double initialBalance = 50000.0;
const int correctPin = 123;
const double minTransactionAmount = 500.0;

int main() {
    double balance = initialBalance;
    int pin;
    char option;

    cout << "Hi " << username << ", Please Enter your Password to proceed: ";
    cin >> pin;

    if (pin == correctPin) {
        while (true) {
            cout << "Choose options below for further proceedings:" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Make a Transaction" << endl;
            cout << "3. Add Amount" << endl;
            cout << "4. Close" << endl;
            cin >> option;

            if (option == '1') {
                cout << "Your Current Balance is: " << balance << " PKR" << endl;
            } else if (option == '2') {
                cout << "Enter the amount for the transaction: ";
                double transactionAmount;
                cin >> transactionAmount;

                if (transactionAmount < minTransactionAmount || transactionAmount > balance) {
                    cout << "Invalid transaction amount. Please enter a valid amount." << endl;
                } else {
                    balance -= transactionAmount;
                    cout << "Transaction successful. Your remaining balance is: " << balance << " PKR" << endl;
                }
            } else if (option == '3') {
                cout << "Enter the amount to add: ";
                double addAmount;
                cin >> addAmount;
                balance += addAmount;
                cout << "Amount added successfully. Your new balance is: " << balance << " PKR" << endl;
            } else if (option == '4') {
                cout << "Thank you for using our ATM." << endl;
                break;  // Exit the loop and end the program
            } else {
                cout << "Invalid option. Please choose a valid option." << endl;
            }
        }
    } else {
        cout << "Invalid PIN. Access denied." << endl;
    }

    return 0;
}
