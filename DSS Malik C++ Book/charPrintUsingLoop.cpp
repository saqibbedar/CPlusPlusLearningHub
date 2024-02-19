#include <iostream>
using namespace std;

int main(){
    char ch[12];
    cin>>ch;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout<<ch[i]<<" ";
    }
    
    return 0;
}