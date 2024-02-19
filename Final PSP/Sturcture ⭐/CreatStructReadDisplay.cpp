#include <iostream>
#include <string>

// Structure to read First and Last Name of Student
struct Name{
    std::string fname;
    std::string lname;
};

struct Student {
    Name stdName; // calling structure in structure
    int RollNum;
};

// Read Structure
void ReadRecord(Student* s1){
    std::cout<<"Enter your First Name: ";
    std::cin>>s1->stdName.fname;
    std::cout<<"Enter your Last Name: ";
    std::cin>>s1->stdName.lname;
    std::cout<<"Enter your Roll Number: ";
    std::cin>>s1->RollNum;
}

// Display Structure
void displayRecord(Student* s1){
    std::cout<<"Your Roll Number is: "<<s1->RollNum<<std::endl;
    std::cout<<"Your Name is: "<<s1->stdName.fname<<" "<< s1->stdName.lname<<std::endl;
}

int main(){
    Student s1; // Create a S1-(student 1) variable with student dataType
    ReadRecord(&s1); // Read Record
    displayRecord(&s1); // Display Record
    
    return 0;
}