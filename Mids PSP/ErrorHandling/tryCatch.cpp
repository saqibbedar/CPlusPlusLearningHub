// we can handle the error using try and catch, below is the given example to demonstrate how it works in c++ 

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main(){
    string name;
    cin>>name;

    // if user will enter a number in string name then there won't be any error cause we are using stoi() function which converts string into integer only if string has a integer value otherwise it will not.

    try
    {
        int n = stoi(name); // convert string to integer
        cout << "Integer entered: " << n << endl;
    }
    catch(const exception& error){
        cerr<<"Error: "<< error.what();
    }
}

// what else we can add with catch to find error: types of errors

// try {
    //     int n = stoi(name);
    // cout << "Integer entered: " << n << endl;
    // } 
    // catch (const invalid_argument& e) {
    //     cout << "Invalid argument: Not an integer "<<e.what() << endl;
    // } 
    // catch (const out_of_range& e) {
    //     cout << "Out of range: Integer value too large or too small." << endl;
    // } 
    // catch (...) {
    //     cout << "An unknown error occurred." << endl;
    // }