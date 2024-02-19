#include <iostream>
#include <string>
using namespace std;

int main(){
    string user;
    cout<<"Enter your name: ";
    // getline(cin, user);
    cin>>user;
    int size = user.length();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<user[k]<<" ";
        }
        cout<<endl;
    }   
}