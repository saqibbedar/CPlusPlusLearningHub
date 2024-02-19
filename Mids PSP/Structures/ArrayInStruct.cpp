#include <iostream>
using namespace std;

struct student {
    int rollNo[2];
    int marks[2];
};

int main(){
    student ali;
    for (int i = 0; i < 2; i++)
    {
        cin>>ali.rollNo[i];
        cin>>ali.marks[i];
    }
    cout<<"\nDetails are\n";
    for (int i = 0; i < 2; i++)
    {
        cout<<ali.rollNo[i]<<endl;
        cout<<ali.marks[i]<<endl;
    }
    
    return 0;
}