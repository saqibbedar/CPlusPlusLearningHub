#include <iostream>
using namespace std;

// check white space
bool isSpace(char space){
    if(space == ' ')
        return true;
    else 
        return false;
}

int main()
{
    // isSpace
    isSpace(' ') ? cout<<"isSpace? True"<<endl : cout<<"isSpace? False"<<endl;
    
    return 0;
}