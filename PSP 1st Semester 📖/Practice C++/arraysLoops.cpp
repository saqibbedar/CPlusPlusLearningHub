// What are arrays: A piece of functionality that allows you to store and rearrange sequenced collections of items. this is called array.

// How arrays are declared in c++? 
// The syntax for arrays is dataType variableName[Size] = {value};

// let say we have a kitchen 1 in which there are 3 boxes and each one is stored with something:

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // string kitchen1[] = {"Salt", "Sugar", "Butter"};

    // cout<<kitchen1[0] <<endl; // the value will be salt as it is at index 0;

    // // let change the value of array by assigning it a new value 
    // kitchen1[0] = {"Milk"};
    // cout<<kitchen1[0] <<endl; // new value will be Milk

    // // Print all values in kitchen[] array

    // cout<< kitchen1[0, 1, 2] << endl;

    // let's try some other examples to understand array more briefly: 

    int marks[] = {34, 35, 36, 90};

    
    string user[] =  {"username","Password"};

    cout<<"Enter your username: "<<endl;
    cin>>user[0];

    cout<<"Enter Password: "<<endl;
    cin>>user[1];

    string userData1 = user[0];
    string userData2 = user[1];

    cout<<"Enter your username: "<<endl;
    cin>> user[0];
    cout<<"Enter your Password: "<<endl;
    cin>>user[1];

    if (userData1 == user[0] && userData2 == user[1])
    {
        cout<<"Valid username and Password";
    }
    else{
        cout<<"Invalid information";
    }
    

    // By using for loop which iterates on each time to satisfy the condition
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The values of Marks at index " << i << " are " << marks[i] <<endl;
    // }

    // // Using while loop for same question:

    // cout<<"While loop: "<< endl;
    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<"The values of Marks at index " << i << " are " << marks[i] <<endl;
    //     i++;
    // }

    // // Using do-while loop for the same question:
    // cout<<"do-while loop: "<< endl;
    // do
    // {
    //     cout<<"The values of Marks at index " << i << " are " << marks[i] <<endl;
    //     i++;
    // } while (i < 4);

    string allSubjects[] = {"Eng", "PSP", "ICT", "PS", "Math"};
    
}