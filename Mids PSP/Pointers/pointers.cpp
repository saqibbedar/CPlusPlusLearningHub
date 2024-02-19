// dynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
	int* a;
	int b = 5;
	a = &b;
	a = new int[2];
	cout << *a << endl;
	*a = 40;
	*(a + 1) = 50;
	cout << a[0]<<"\t"<<a[1] << endl;
}
