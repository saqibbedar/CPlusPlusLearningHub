#include <iostream>
#include <string>
using namespace std;

struct Name {string fname; string lname;};

struct Student{int roll; Name name;};

int main()
{
    Student st;
    cout<<"Enter Roll Number: ";
    cin>>st.roll;
    cout<<"Enter First Name: ";
    cin.ignore();
    getline(cin, st.name.fname); 

    cout<<"Enter Last Name: ";
    getline(cin, st.name.lname);

    cout<<"Name: "<<st.name.fname<<" "<<st.name.lname<<"\n";
    cout<<"Roll Number: "<<st.roll;

}