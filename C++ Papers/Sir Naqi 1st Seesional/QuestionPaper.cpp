#include <iostream>
using namespace std;

int main()
{
    // Q1. (a) Take 3 inputs and check if three are then print ______, then check if two are equal then print _____, and finally if all are different then print _______.

    int l1, l2, l3;
    cin>>l1>>l2>>l3;
    if(l1==l2 && l1 == l3){
        cout<<"Three are equal";
    }
    else if (l1 == l2 && l1 != l3 || l1 != l2 && l1 == l3){
        cout<<"two are equal";
    }
    else{
        cout<<"three are different";
    }

    // (b): write it's pseudo code

    /*
       Start
       read l1, l2, l3
       if (l1==l2 && l1 == l3)
                  print ______
       else if (l1 == l2 && l1 != l3 || l1 != l2 && l1 == l3)
                  print ______
       else
                  print ______
       Stop
    */

    // Q2. (a) Difference between = and == operators

    // Q2. (b) Convert to switch statement:

    int age;
    cin>>age;

    // Not an optimized way but program fuctions correctly.

    switch(age){
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
        cout<<"Child";
        break;
        case 14: case 15: case 16: case 17: case 18:
        cout<<"Teenager";
        break;
        default: 
        cout<<"Adult";
        break;
    }


}