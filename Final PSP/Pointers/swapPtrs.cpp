#include <iostream>
using namespace std;

void swap(int *p1,int *p2){
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int x = 10;
    int y = 20;
    swap(x, y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}