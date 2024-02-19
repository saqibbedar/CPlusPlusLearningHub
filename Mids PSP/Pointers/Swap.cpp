#include <iostream>
using namespace std;

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap2(int *a, int *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main(){
    int a = 10, b = 20;

    cout<<"\nValues before Swap\n";
    cout<<"a = "<<a <<"\t"<< "b = "<<b<<"\n"; 

    swap2(&a, &b); // calling function by passing addresses to pointers

    cout<<"\nValues After Swap\n";
    cout<<"a = "<<a <<"\t"<< "b = "<<b<<"\n\n"; 
}