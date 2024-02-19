#include <iostream>
using namespace std;

// calculator using function

int calculator(int a, int b, char op){
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a -b;
        break;
    default:
        cerr<<"error";
        break;
    }
}

int main(){
    int a, b;
    char op;
    cin>> a>> b;
    cin >> op;

    int result = calculator(a, b, op);
    cout<<result;
}


// Algorithm:
/* 
    1. Creating c++ boilerplate (preprocessing command!)
    2. declaring variables to store the values to from the user!
    3. prompting user to enter data
    4. Switch statement to watchdog operators OR if else conditions
    5. conditions to check the values for division
    6. showing final result to user
*/

/*
    1. read num1, num2
    2. if (op == '+')
    3.    result = num1 + num2
    4. else if (op == '-')
    5.    result = num1 - num2
    6. else if (op == '*')
    7.    result = num1 * num2
    8. else if (op == '/')
    9.          if(num1 == 0)
    10.              print(msg)
    11.         else num1 / num2
    12. else 
    13. print (msg)
*/

// document.designMode = 'on'; Design webpage online

// int main()
// {
//         double num1, num2, result;
//         char op;

//         cout<<endl;

//         cout<<"Enter your 1st Number: "<<endl;
//         cin>>num1;

//         cout<<"Choose Operator: +, -, *, /"<<endl;
//         cin>>op;
        
//         cout<<"Enter your 2nd Number: "<<endl;
//         cin>>num2;

//         if (op == '+')
//         {
//             result = num1 + num2;
//             cout<<"Your answer is: "<<result<<endl;
//         }
//         else if (op == '-')
//         {
//             result = num1 - num2;
//             cout<<"Your answer is: "<<result<<endl;
//         }
//         else if (op == '*')
//         {
//             result = num1 * num2;
//             cout<<"Your answer is: "<<result<<endl;
//         }
//         else if (op == '/')
//         {
//             if (num2 == 0)
//             {
//                 cout<<"Division with 0 is not allowed!"<<endl;
//             }
//             else{
//                 result = num1 / num2;
//                 cout<<"Your answer is: "<<result<<endl;
//             }        
//         }
//         else{
//             cout<<"Result was not possible due to Invalid Operator!"<<endl;
//         }
// }

// int main(){  

//         double num1, num2, result;
//         char op;
        
//         cout<<endl; // endline for new calculation

//         cout<<"Enter your 1st number: ";
//         cin>> num1;

//         cout<<"Choose a operator: + - * /" << endl;
//         cin>>op;

//         cout<<"Enter your 2nd number: ";
//         cin>> num2;

//         switch (op)
//         {
//         case '+':
//             return num1 + num2;
//             break;
//         case '-':
//             result = num1 - num2;
//             break;
//         case '*':
//             result = num1 * num2;
//         break;

//         case '/':
//         if (num2 != 0)
//         {
//             result = num1 / num2;
//         }
//         else
//         {
//             cout<<"Error: Division is not possible with 0" <<endl;
//         }
//         break;

//         default:

//         cout<< "Invalid operator"<< endl;
//             return 0;
//         }
        
//         cout<< "Your answer is: "<< result << endl;
// }