#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    char mychar = 0; 
    cout<<"Enter character: ";
    cin.get(mychar); // even user enter many numbers but only 1 character would be saved to the char mychar as char only store one charater

    cout<<"Your character is: " << mychar;
}