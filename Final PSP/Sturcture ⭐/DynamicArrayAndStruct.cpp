/*
Question:

Develop a C++ program to manage student records using structures. The program should dynamically allocate memory to store an array of students. Each student record consists of a roll number and a name (first name and last name). The program should prompt the user to input data for a specified number of students, and then display the details for each student.
*/

#include <iostream>
#include <string>
using namespace std;

// Structure to represent the name of a student
struct Name {
    string fname; // First name
    string lname; // Last name
};

// Structure to represent a student
struct Student {
    int RollNum;   // Roll number
    Name stdName;  // Student name
};

// Function to read input for a student record
void readRecord(Student& s1);

// Function to display a student record
void displayRecord(const Student& s1);

int main() {
    int size;
    
    // Prompt the user to enter the number of students
    cout << "Enter the number of students: ";
    cin >> size;

    // Dynamically allocate memory for an array of students
    Student* arr = new Student[size];

    // Input data for each student
    for (int i = 0; i < size; i++) {
        readRecord(arr[i]);
    }

    // Display details for each student
    cout << "\nStudent Records:\n";
    for (int i = 0; i < size; i++) {
        displayRecord(arr[i]);
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}

// Function to read input for a student record
void readRecord(Student& s1) {
    cout << "Enter Roll Number: ";
    cin >> s1.RollNum;
    cout << "Enter First Name: ";
    cin >> s1.stdName.fname;
    cout << "Enter Last Name: ";
    cin >> s1.stdName.lname;
}

// Function to display a student record
void displayRecord(const Student& s1) {
    cout << "Roll Number: " << s1.RollNum << endl;
    cout << "Name: " << s1.stdName.fname << " " << s1.stdName.lname << "\n\n";
}