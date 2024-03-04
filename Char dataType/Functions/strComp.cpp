#include <iostream>
using namespace std;

// compare strings
int strComp(char str1[], char str2[]){
    
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