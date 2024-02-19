#include <iostream>
#include <iostream>
using namespace std;

struct Student {string name; int rollNum;};

Student read(){
    Student st1;
    cout<<"Enter name: ";
    cin>>st1.name;
    cout<<"Enter rollNum: ";
    cin>>st1.rollNum;
    return st1;
}

void display(Student st1){
    cout<<"Name: "<< st1.name<<endl;
    cout<<"Roll Number: "<< st1.rollNum<<endl;
}

int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;

    Student *ptr = new Student[n];

    for (int i = 0; i < sizeof(ptr); i++)
    {
        ptr[i] = read();
    }
    
    return 0;
}