#include <iostream>
using namespace std;

// Take two inputs from user and then print it to: sum = a + 5*b - c;
int main(){

    int a, b, c = 0;

    cout<< "enter your 1st number: ";

    if(!(cin >> a)){ // (!(cin>>a)) checks the type of a // either it is int or not? 
        cout<< "Please Enter valid format!"<< endl;
        cin>>a;
    }

    cout<< "enter your 2nd number: ";
    if(!(cin >> b)){
        cout<< "Your format is incorrect!"<< endl;
    }

    int sum = a + 5*b - c;
    
    cout<< "Your answer is: " << sum;
}