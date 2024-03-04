#include <iostream>
using namespace std;

// toUpperCase
char* toUpperCase(char str[]) {

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
    }
    }

    return str;
}

int main()
{
    char str1[] = "hello";
    cout<<"str[] = "<<toUpperCase(str1);
    return 0;
}