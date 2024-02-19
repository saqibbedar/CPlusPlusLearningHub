#include <iostream>
#include <string>
using namespace std;

int options(){
    cout<<"Choose options below for further proceedings: " <<endl;
    cout<<"1. Make a transcation" <<endl;
    cout<<"2. Add amount" <<endl;
    cout<<"3. Close" <<endl;
}
string const username = "Saqib Bedar";
int const correctPin = 123;

int main()
{
    double totalBalance, makeTranscation, sum, addAmount;
    int pin;
    char option;

    totalBalance = 50000.0; // totalBalance

    cout<<"Hi "<<username<< ", Please Enter your Pin to proceed: ";
    cin>> pin;

    if (pin == correctPin)
    {
        cout<< username << " Your Current Balance is: "<< totalBalance<< " PKR" <<endl;

        int opt = options(); // calling function - options()

        cin>>option;

        if (option == '1')
        {
            cout<<"Enter your amount: ";
            cin>>makeTranscation;
            if (makeTranscation > totalBalance || makeTranscation < 500.0)
            {
            cout<<"Incorrect Amount, Please add correct amount: ";
            cin>> makeTranscation;
            sum = totalBalance - makeTranscation;
            cout<<"Transaction successful, your remaining amount is: " << sum;
            } 
            else{
            sum = totalBalance - makeTranscation;
            cout<<"Transaction successful, your remaining amount is: " << sum;
            }
        }
        else if (option == '2')
        {
            cout<<"Enter your amount: ";
            cin>>addAmount;
            sum = addAmount + totalBalance;
            totalBalance = sum;
            cout<<"Amount added successfully, your new amount is: " << totalBalance;
        }
        else if (option == '3')
        {
            cout<<"Thankyou for using our ATM";
        }
        
    }
    else{
        cout<<"Invalid Pin";
    }
}