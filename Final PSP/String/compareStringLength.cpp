#include <iostream>
#include <string>

bool compare(std::string *st1, std::string *st2){
    int len1 = st1->length();
    int len2 = st2->length();
    bool flag = false;

    if (len1 == len2)
    {
        return flag = true;
    }else{
        return flag = false;
    }
}

int main()
{
    std::string u1; // user1
    std::cout<<"Enter Name: ";
    getline(std::cin, u1);
    std::cout<<"Enter Name: ";
    std::string u2; // user2
    getline(std::cin, u2);

    if (compare(&u1, &u2))
        std::cout<<"Equal";
    else 
        std::cout<<"Not equal";
        
    return 0;
}