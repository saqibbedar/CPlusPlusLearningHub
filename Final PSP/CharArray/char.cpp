#include <iostream>

int main() 
{ 
	// Integer array 
	int a[] = { 1, 2, 3 }; 

	// Character array 
	char ch[3] = {'a', 'b', 'c'}; // size is three
    char c[] = "abc"; // size is four

	// Print the value of a 
	std::cout <<"a = "<< a << std::endl; // return the address of 0 index

	std::cout << sizeof(ch) << std::endl; // size is 3
	std::cout << sizeof(c) << std::endl; // size is 4

	std::cout<< ch << std::endl; // abc☺
	std::cout<< c << std::endl; // abc

	return 0; 
} 
