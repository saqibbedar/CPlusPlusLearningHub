#include <iostream>
#include <iterator>
using namespace std;

void options(string option[]){
    option[0] = "Zinger Burger";
    option[1] = "Chicken Wings (8)";
    option[2] = "Chicken Tikka";
}

int main()
{
    string option[3];
    options(option);

    for (int i = 0; i < 3; i++)
    {
        cout<<option[i];
    }

    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 5; i++)
    {
       cout<<a[i]<<endl;
    }
    
}