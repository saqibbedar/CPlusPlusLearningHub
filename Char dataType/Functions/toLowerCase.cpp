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

int main()
{
    char str1[] = "HELLO";
    cout<<"str[] = "<<toLowerCase(str1);
    return 0;
}