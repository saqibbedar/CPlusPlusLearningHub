#include <iostream>
using namespace std;

int rev(int n){
    int revNum = 0;
    while (n!= 0)
    {
        int r = n%10;
        revNum = revNum * 10 + r;
        n/=10;
    }
    return revNum;
}

int main(){
    int n;
    cin>>n;
    int originalNValue = n; // store n value

    cout<<(originalNValue == rev(n)? "Palindrome": "n"); // using ternary operator
    
    // if (originalNValue == rev(n))
    // {
    //     cout<<"palindrome";
    // }
    // else{
    //     cout<<"not palindrome";
    // }
    
    return 0;
}