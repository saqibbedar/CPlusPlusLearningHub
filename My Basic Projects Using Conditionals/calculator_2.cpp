#include <iostream>
using namespace std;

// int main()
// {
//     double num1, num2, result;
//     char op;

//     cout<<"Enter your 1st number: "<< endl;
//     cin>>num1;

//     cout<<"Chose operator: +, -, *, /"<<endl;
//     cin>>op;

//     cout<<"Enter your 2nd number: "<< endl;
//     cin>>num2;

//     if (op == '+')
//     {
//         result = num1 + num2;
//         cout<<"Your answer is: "<<result;
//     }
//     else if (op == '-')
//     {
//         result = num1 - num2;
//         cout<<"Your answer is: "<< result;
//     }
//     else if (op == '*')
//     {
//         result = num1 * num2;
//         cout<<"Your answer is: "<<result;
//     }
//     else if (op == '/')
//     {
//         if (num2 == 0)
//         {
//             cout<<"Division with 0 is not allowed!";
//         }
//         else{
//             result = num1 / num2;
//             cout<<"Your answer is: "<<result;
//         }  
//     }
//     else{
//         cout<<"Your operation was not successful due to invalid operator";
//     } 
// }


// Create a calculator using switch statement

int main(){
    double num1, num2;
    char op;

    cout<<"Enter your first number: ";
    cin>>num1;

    cout<<"Enter your operator: ";
    cin>>op;

    cout<<"Enter your second number: ";
    cin>>num2;

    switch (op)
    {
    case '+':
    cout<<"Your answer is: "<< num1 + num2;
        break;

    case '-':
    cout<<"Your answer is: "<< num1 - num2;
    break;

    case '*':
    cout<<"Your answer is: "<< num1 * num2;
    break;

    case '/':
    if (num1 == 0)
    {
        cout<< "Division with zero is not allowed!";
    }
    else{
        cout<<"Your answer is: "<< num1 / num2;
    }
    break;

    default:
        cout<<"Division was not possible due to invalid operator";
        break;
    }
}