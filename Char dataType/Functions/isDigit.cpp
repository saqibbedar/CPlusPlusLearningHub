#include <iostream>
using namespace std;

// check digit
bool isDigit(char digit){
    if(digit >= '0' && digit <= '9')
        return true;
    else
        return false;
}

int main()
{
    // isDigit
    isDigit('3') ? cout<<"isDigit? True"<<endl : cout<<"isDigit? False"<<endl;

    return 0;
}