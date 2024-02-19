#include <iostream>
#include <string>
using namespace std;

int main(){
    float a = 3.6;
    double b = 3.6;
    if (a == b)
        cout<<"equal\n";
    else
        cout<<"not equal\n"; // not equal is answer

    string n = "s";
    char ch = 'a';

    if (ch)
        cout<<"equal";
    else
        cout<<"not equal";
}