// character arrays
// 28 feb 2024

#include <iostream>


// cpp consider char array as a single variable, char terminated with \0

int main()
{
    // initialization of character
    // char name[20] = {'a', 'h', 'm', 'e', 'd'}; 
    // char anotherName[20] = {"ahmed"};
    // char str[30] = "\0";
    // char anotherStr[30] = "\0";
    // char n[] = {'a', 'h', 'm', 'e', 'd'}; // size is = 5; \0 will not be counted in this case, so we have to use \0 at the end of string explicitly
    // std::cout<<sizeof(n)<<std::endl;

    // char n2[] = {'a', 'h', 'm', 'e', 'd', '\0'}; // size = 6
    // std::cout<<sizeof(n2)<<std::endl; // 6

    // char n3[] = {"Ahmed"};
    // std::cout<<"address of n3 is "<<&n3<<std::endl;
    // std::cout<<sizeof(n3)<<std::endl; // 6

    char newName[30];
    std::cout<<"Enter new Name: ";
    std::cin.get(newName, 30); // we can use terminator sign here
    std::cout<<"Your name is: "<<newName<<std::endl;

    char text[500];
    std::cout<<"Enter a sentence: ";
    std::cin.getline(text, 500, '$'); // $ is a terminator here
    std::cin.ignore();
    std::cout<<text;
    
    return 0;
}