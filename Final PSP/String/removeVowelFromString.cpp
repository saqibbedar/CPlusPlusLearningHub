#include <iostream>
#include <string>

int main()
{
    std::string name;
    getline(std::cin, name);
    int *arr = NULL;
    for(int i = 0; i<name.length(); i++){
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            for (int j = 0; j < name.length(); j++)
            {
                name[i] = name[j+1];
            }
        }
    }
    std::cout<<name;

    return 0;
}