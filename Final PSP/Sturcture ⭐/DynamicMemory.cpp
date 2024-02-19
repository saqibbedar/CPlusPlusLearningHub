/*
Question:

Compose a C++ program that dynamically manages student records using structures. The program should prompt the user to input data for a specified number of students, including their roll number, first name, and last name. The program is then required to display the details for each student. Utilize dynamic memory allocation for storing an array of student structures.

*/
#include <iostream>
#include <string>

struct Name {
    std::string fname;
    std::string lname;
};

struct Student {
    int RollNum;
    Name stdName;
};

// Input data
void input(Student *s1){
    int size = sizeof(s1)/sizeof(*s1);
    for (int i = 0; i < size; i++){
        std::cout<<"Enter details for Student #"<< i+1<<" :\n";
        std::cout<<"Enter Roll Number: ";
        std::cin>>s1[i].RollNum;
        std::cout<<"Enter First Name: ";
        std::cin>>s1[i].stdName.fname;
        std::cout<<"Enter Last Name: ";
        std::cin>>s1[i].stdName.lname;
    }
}
void display(Student *st[], int size){
    for (int i = 0; i < size; i++){
        std::cout << "\nDetails for student #" << i + 1 << ":\n\n";
        std::cout << "Roll Number: " << st[i]->RollNum << std::endl;
        std::cout << "Name: " << st[i]->stdName.fname << " " << st[i]->stdName.lname << std::endl;
    }
}

int main(){
    int size;
    std::cout<<"Enter size of array: ";
    std::cin>>size;

    Student* st = new Student[size];

    input(st);
    display(&st, size);

    delete[] st;
    return 0;
}

// Iterate over the array and get input from the user
    // for (int i = 0; i < size; ++i) {
    //     cout << "Enter details for student #" << i + 1 << ":" << endl;
        
    //     // Get RollNum
    //     cout << "Roll Number: ";
    //     cin >> st[i].RollNum;

    //     // Get Name
    //     cout << "First Name: ";
    //     cin >> st[i].stdName.fname;

    //     cout << "Last Name: ";
    //     cin >> st[i].stdName.lname;
    // }

    // Display the information
    // for (int i = 0; i < size; ++i) {
    //     cout << "\nDetails for student #" << i + 1 << ":\n\n";
    //     cout << "Roll Number: " << st[i].RollNum << endl;
    //     cout << "Name: " << st[i].stdName.fname << " " << st[i].stdName.lname << endl;
    // }