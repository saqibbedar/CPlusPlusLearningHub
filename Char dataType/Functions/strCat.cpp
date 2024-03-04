#include <iostream>
using namespace std;

// strLength
int strLength(char strArray[]){
    int i;
    for(i = 0; strArray[i] != '\0'; i++);
    return i;
}

// combining strings 
char* strCat(char dest[], const char src[]){
    int i, j = strLength(dest);

    for(i = 0; src[i] != '\0'; i++, j++){
        dest[j] = src[i];
    }
        dest[j] = '\0';
        return dest;
}

int main()
{
    char text1[100];
    cout<<"Enter some text: ";
    cin.getline(text1, 100, '$');
    char text2[100];
    
    // combine strings
    cout<<"Combine String: "<<strCat(text1, text2)<<endl;
    
    return 0;
}