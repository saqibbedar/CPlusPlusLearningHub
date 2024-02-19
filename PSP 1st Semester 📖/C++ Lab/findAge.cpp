#include <iostream>
using namespace std;

int main(){
    // declare variables for storing users data:
    int birthYear, age;

    // prompt user to input the data:
    cout<<"Enter your Birth year: ";
    cin>>birthYear;

    // compute the given data
    age = 2023 - birthYear;

    // console the result
    cout<<"Your are " <<age << " years old!";
}