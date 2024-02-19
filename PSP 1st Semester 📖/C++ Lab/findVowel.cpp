#include <iostream>
using namespace std;

int main()
{
    char _char;
    cin>> _char;

    // using switch statement

    switch (_char)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U': 
        cout<<"Vowel";
        break;
    default:
        cout<<"consonant";
        break;
    }

    // using if and else condition

    if (_char == 'a' || _char == 'e' || _char == 'i' || _char == 'o' || _char == 'u' || _char == 'A' || _char == 'E' || _char == 'I' || _char == 'O' || _char == 'U')
    {
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    
}