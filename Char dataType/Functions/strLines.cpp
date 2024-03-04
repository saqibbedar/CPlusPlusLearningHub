#include <iostream>
using namespace std;

// find strLines
int strLines(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == '\n')
            count++;
    }
    return count;
}

int main()
{
    char text[500];
    cout<<"Enter text : ";
    cin.getline(text, 500, '$'); // read <p>----text-----</p>
    
    int lines = strLines(text); 
    cout<<"Total Lines in text[500] are : "<< lines <<endl; // total Lines

    return 0;
}