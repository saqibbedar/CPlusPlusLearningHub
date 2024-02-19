// StructureAsParameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Student {
	int roll;
	string name;
};
void readStudent(Student &st1) {
	cout << "Enter Roll Number  ";
	cin >> st1.roll;
	cout << "Enter Name  ";
	cin.ignore();
	getline(cin, st1.name);
}
Student readStudent() {
	Student st1;
	cout << "Enter Roll Number  ";
	cin >> st1.roll;
	cout << "Enter Name  ";
	cin.ignore();
	getline(cin, st1.name);
	return st1;
}
void showStudent(Student st1) {
	cout << " Roll Number  ";
	cout<< st1.roll<<endl;
	cout << " Name  ";
	cout<< st1.name<<endl;
}
void showStudent(Student* st1) {
	cout << " Roll Number  ";
	cout << st1->roll << endl;
	cout << " Name  ";
	cout << st1->name << endl;
}
int main()
{
	const int S = 3;
	Student *s1 = new Student[S];

	Student st[S];
	for (int i = 0; i < S; i++)
		//st[i]=readStudent();
		  readStudent(st[i]);
	for (int i = 0; i < S; i++)
		//showStudent(&st[i]);
		showStudent(st[i]);
}
