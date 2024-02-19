// Write a program for Online Food Store that has some items and allow user to choose options and then pay the money online or cash on delivery.

#include <iostream>
#include <string>
using namespace std;

string const username;

int main()
{
    string newUser = username, shopName;
    shopName = "FoodHuts";
    double pin, price;
    char option;

    cout<<"Welcome to "<<shopName<< endl;
    cout<<"Please Enter your name to Proceed: ";
    getline(cin, newUser);
    cout<<"" <<endl; // space


    while (true){
        bool isNewUser = !newUser.empty(); // check if the new user is empty

        if (isNewUser){
                cout<<"*** Please Choose an option to proceed ***"<<endl;
                cout<<"1.  Fast Food" << endl;
                cout<<"2.  Fresh Juice" << endl;
                cout<<"3.  Desi Food" << endl;
                cout<<"4.  Explore more" << endl;
                cin>>option;
            
            // Fast Food
            if (option == '1'){
                cout<<"Welcome to "<< "***"<<shopName + " FastFood Corner*** "<<endl;
                cout<<"Enter a option"<<endl;
                cout<<"1. check Menu" <<endl;
                cout<<"2. Go Back"<<endl;
                cin>>option;

            // Menu
            if (option == '1'){
                int zingerDeal = price;
                zingerDeal = 1450.0;
                int newDiscount = 90.0;
                newDiscount -= zingerDeal;

                cout<<"***Fast Food Menu***"<< endl;
                cout<<"1. Zinger Deal" << endl;
                cout<<"2. Zinger Family Deal" << endl;
                cout<<"3. Hot Night Meal" << endl;
                cout<<"4. Go Back" << endl;
                cin>>option;

            if (option == '1'){
                int amount = 2;
                cout<<"***Zinger Deal***" << endl;
                cout<<"Zinger Burger (" << amount <<")" << endl;
                amount = 8;
                cout<<"Chicken Wings (" << amount <<")" << endl;
                amount = 1;
                cout<<"Regular Drink (" << amount <<")" << endl;
                cout<<"Press 1 to place order: ";
                cin>>option;

            // Payment Method Options
            if (option == '1'){
                cout<<"***Your order for Zinger Burger Deal is Pending, Please confirm your payment to proceed.***"<<endl;
                cout<<"1. EasyPaisa" <<endl;
                cout<<"2. Cash on Delivery" <<endl;
                cin>>option;
                
            // Cash on Delivery
            if (option == '2'){
                cout<<"***Your order is confirmed***"<<endl;
                cout<<"Thanks for choosing us, our rider will contact you soon."<< endl;
                break;
                }

            // Online Payment via EasyPaisa
            else if (option == '1')
            {
                    int easyPaisa;
                    cout<<"Enter your EasyPaisa Account Number: ";
                    cin>>easyPaisa;
                    
                    string easyPaisaString = to_string(easyPaisa);

                    if (easyPaisaString.length() != 11){
                        cout<<"**Please Enter your valid EasyPaisa Number**" <<endl;
                        cout<<"Enter your EasyPaisa Account Number: ";
                        cin>>easyPaisa;
                        
                    }
                    else{
                        // Generating False static OTP for testing:
                        cout<<"An OTP send to ***" << easyPaisa << "***"<< endl;
                        int otpNum, otp;
                        otpNum = 3245;
                        cout<<"Your OTP is: "<< otpNum<< " Please Enter it to Proceed!"<<endl;
                        cin>>otp;
                    if (otp == 3245){
                        cout<<"***Payment Successful!***"<<endl;
                        cout<<" Your order has been confirmed successfully! Our rider will contact you very soon" << endl;
                        cout<<"Thankyou for choosing "<< shopName;
                        break;
                    }
                    }
                }            
            }
                    
        }
    }
        
    }
        }
        else{
            cout<<"Please Enter your name to Proceed: ";
            getline(cin, newUser);
            cout<<"" <<endl;
        }
    }
}