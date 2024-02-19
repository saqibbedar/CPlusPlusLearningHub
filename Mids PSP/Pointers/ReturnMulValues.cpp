// return mul values

#include <iostream>
using namespace std;

void grtAddMul(int a, int b, int* p1, int* p2){
    *p1 = a * b;
    *p2 = a + b;
}

int main(){
    int x = 10, y = 20, a, m;

    grtAddMul(x, y, &a, &m); // addition and  multiplication
    cout<<a<<"\t"<<m<<"\n"; // 200     30
    
    return 0;
}