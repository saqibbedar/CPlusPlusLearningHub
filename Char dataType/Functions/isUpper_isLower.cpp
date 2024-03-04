#include <iostream>
using namespace std;

// isUpper
bool isUpper(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return false;
    }
    return true;
}

bool isLower(char str[]){
    for(int i= 0; str[i] != '\0'; i++){
        if(!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    }
    return 1;
}

int main()
{
    // isUpper
    char str1[] = "HELLO";
    isUpper(str1) ? cout<<"isUpper? True"<<endl : cout<<"isUpper? False";

    // isLower
    char str2[] = "hello";
    isLower(str2) ? cout<<"isLower? True"<<endl : cout<<"isLower? False"<<endl;

    return 0;
}