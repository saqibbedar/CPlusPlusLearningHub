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

int main()
{
    char str[] = "Hello3";
    // isAlpha
    isAlpha(str) ? cout<<"isAlpha? True"<<endl : cout<<"isAlpha? False"<<endl;
    char str2[] = "hello ";
    isAlpha(str2) ? cout<<"isAlpha? True"<<endl : cout<<"isAlpha? False"<<endl;

    return 0;
}