#include <iostream>
#include <string>
using namespace std;

struct user { string name; int age; };

int main(){
    struct user u[2];

    cout<<"Enter your Name\n";
    for (int i = 0; i < 2; i++)
    {
        cin>>u[i].name;
    }
    cout<<"\nEnter your age\n";
    for (int i = 0; i < 2; i++)
    {
        cin>>u[i].age;
    }
}