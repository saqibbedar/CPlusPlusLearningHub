#include <iostream>
using namespace std;

int strWords(char text[]) {
    int count = 0;
    bool isWord = false;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t'){
            if (isWord) {
                count++;
                isWord = false;
            }
        } else {
            isWord = true;
        }
    }
    if (isWord) {
        count++;
    }
    return count;
}

int main()
{
    char text[500];
    cout<<"Enter text : ";
    cin.getline(text, 500, '$'); // read <p>----text-----</p>
    
    int words = strWords(text); 
    cout<<"Words in text[500] are : "<< words <<endl; // total words
    
    return 0;
}