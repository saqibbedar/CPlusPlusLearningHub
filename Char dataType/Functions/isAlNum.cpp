#include <iostream>
using namespace std;

// toLowerCase
char* toLowerCase(char str[]){

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
    
    return str;
}

// check alphabet
bool isAlpha(char *str){
    toLowerCase(str); // ignore the case
    for(int i = 0; str[i] != '\0'; i++){
        if(!(str[i] >= 'a' && str[i] <= 'z'))
            return false;
    }
    return true;
}

// check digit
bool isDigit(char digit){
    if(digit >= '0' && digit <= '9')
        return true;
    else
        return false;
}

// main function > isAlpha or isDigit
bool isAlNum(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        if(!(isAlpha(&str[i])) && !(isDigit(str[i])))
            return 0;
    }
    return 1;
}

int main()
{
    // isalnum?
    char str[] = "123";
    char str2[] = "hello";
    isAlNum(str) ? cout<<"isAlNum? True"<<endl : cout<<"isAlNum? False"<<endl;
    isAlNum(str2) ? cout<<"isAlNum? True"<<endl : cout<<"isAlNum? False"<<endl;
    return 0;
}