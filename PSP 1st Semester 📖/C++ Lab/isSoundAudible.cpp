#include <iostream>
using namespace std;

int main()
{
    int sound;
    cin>>sound;

    if(sound >= 20 && sound <=20000){
        cout<<"Audible";
    }
    else{
        cout<<"Not audible";
    }

    // Convert it into switch

    switch (sound >= 20 && sound <=20000)
    {
    case true:
        cout<<"Audible";
        break;
    default:
        cout<<"Un-audible";
        break;
    }
}