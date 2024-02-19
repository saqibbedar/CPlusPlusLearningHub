// Arithmetic Functions
#include <iostream>

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
double division(double a, double b){
    return a / b;
}

int main()
{
    int a, b;
    std::cin>>a>>b;
    double result = division(a,b);
    std::cout<<result;
}