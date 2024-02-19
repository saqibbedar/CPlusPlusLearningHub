#include <iostream>
using namespace std;

int main()
{
    struct{
        int pin;
        string userName;
    } myStr;

    // Access structure:
    myStr.pin = 1234;
    myStr.userName = "Saqib Bedar";

    cout<<"Please Enter your 4 digits Pin to proceed!"<<endl;
    cin>>myStr.pin;
    while (true)
    {
        if(myStr.pin == 1234)
        {
            cout<<"Your name is: "<< myStr.userName;
            break;
        }
        else
        {
            cout<<"Incorrect Pin, Please enter correct: ";
            cin>>myStr.pin;

            if(myStr.pin == 1234)
            {
            cout<<"Your name is: "<< myStr.userName;
            break;
            }
        }
    }
}