#include <iostream>

/*

Print the following output but ask the user no. of rows and cols

    1
   12
  123
 1234
12345

*/

int main()
{
    int rows, col;
    std::cin>>rows>>col;
    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= col-i; k++)
        {
            std::cout<<" "; 
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    
    return 0;
}