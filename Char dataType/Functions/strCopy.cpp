#include <iostream>
using namespace std;

char* strCopy(char dest[], const char src[]) // dest: destination, src: source
{
    int i;
    for(i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0'; // - OR dest[i] = src[i];

    return dest;
}

int main()
{
    char text1[100];
    cout<<"Enter some text: ";
    cin.getline(text1, 100, '$');
    char text2[100];
    strCopy(text2, text1);
    cout<<"text1: "<<text1<<endl;
    cout<<"text2: "<<text2<<endl;

    return 0;
}
