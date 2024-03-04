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

// compare strings
int strComp(char str1[], char str2[]){

    // ignore cases
    toLowerCase(str1);
    toLowerCase(str2);
    
    for(int i = 0; str1[i] != '\0' ; i++){
        if(str1[i] > str2[i])
            return 1;
        else if(str1[i] < str2[i])
            return -1;
        else
            continue;
    }
    return 0;
}

int main()
{
    char str1[] = "hello";
    char str2[] = "asdlk";

    // compare strings
    cout<<strComp(str1,str2);

    return 0;
}