/*
Question:

Develop a C++ program to manage student records using structures. The program should dynamically allocate memory to store an array of students. Each student record consists of a roll number and a name (first name and last name). The program should prompt the user to input data for a specified number of students, and then display the details for each student.
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

void readRecord(Student& s1){
    std::cout << "Enter Roll Number: ";
    std::cin >> s1.RollNum;
    std::cout << "Enter First Name: ";
    std::cin >> s1.stdName.fname;
    std::cout << "Enter Last Name: ";
    std::cin >> s1.stdName.lname;
};

void displayRecord(Student& s1){
    std::cout << "Roll Number: " << s1.RollNum << std::endl;
    std::cout << "Name: " << s1.stdName.fname << " " << s1.stdName.lname << "\n\n";
};

int main() {
    int size;
    std::cout << "Enter the number of students: ";
    std::cin >> size;

    Student* arr = new Student[size];

    for (int i = 0; i < size; i++) {
        readRecord(arr[i]);
    }

    std::cout << "\nStudent Records:\n";
    for (int i = 0; i < size; i++) {
        displayRecord(arr[i]);
    }

    delete[] arr;

    return 0;
}