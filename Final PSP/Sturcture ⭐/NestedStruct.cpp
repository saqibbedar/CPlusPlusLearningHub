/*
Question:

Write a C++ program to manage student records using structures. The program should allow the user to input data for a specified number of students, including their roll number, first name, last name, and age. Once the data is entered, the program should display the details for each student. Ensure that your program is dynamically allocating memory for the student records and deallocating it appropriately.

*/

#include <iostream>
#include <string>

struct Student {
    int RollNum;
    struct Name {
        std::string fname;
        std::string lname;
        struct Age {
            int stdAge;
        } age;
    } name;
};

void inputStudentData(Student* student) {
    std::cout << "\nEnter Roll Number: ";
    std::cin >> student->RollNum;
    std::cout << "Enter First Name: ";
    std::cin >> student->name.fname;
    std::cout << "Enter Last Name: ";
    std::cin >> student->name.lname;
    std::cout << "Enter your Age: ";
    std::cin >> student->name.age.stdAge;
}

void outputStudentData(const Student& student) {
    std::cout << "\nRoll Number: " << student.RollNum << "\n";
    std::cout << "Name: " << student.name.fname << " " << student.name.lname << "\n";
    std::cout << "Age: " << student.name.age.stdAge << " years\n";
}

int main() {
    int size;
    std::cout << "Enter Size of Array: ";
    std::cin >> size;

    Student* students = new Student[size];

    // Input Student Data
    for (int i = 0; i < size; i++) {
        inputStudentData(&students[i]);
    }

    // Output Student Data
    for (int i = 0; i < size; i++) {
        outputStudentData(students[i]);
    } 

    delete[] students;
    return 0;
}
