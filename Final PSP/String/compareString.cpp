// C++ Program to compare two strings using Pointers 
#include <iostream> 
using namespace std; 

// Method to compare two string 
// using pointer 
bool compare(char *str1, char *str2) 
{ 
	while (*str1 == *str2) 
	{ 
		if (*str1 == '\0' && *str2 == '\0') 
			return true;
		str1++; 
		str2++; 
	}	 
	return false; 
} 

int main() 
{ 
	// Declare and Initialize two strings 
	char str1[] = "geeks"; 
	char str2[] = "geeks"; 

	if (compare(str1, str2) == 1) 
		cout << str1 << " " << str2 << " are Equal"; 
	else
		cout << str1 << " " << str2 << " are not Equal"; 
} 
