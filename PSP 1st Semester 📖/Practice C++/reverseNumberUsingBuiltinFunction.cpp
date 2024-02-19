#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any three different Numbers: ";
    cin>>n;

    string revNum = to_string(n);
    reverse(revNum.begin(), revNum.end());
    int updatedNum = stoi(revNum);
    cout<<"Reverse of "<< n << " is "<< updatedNum<<endl;

    int sum1 = n - updatedNum;
    cout<<"Sum is: "<<sum1<<endl;
    
    string revNum2 = to_string(sum1);
    reverse(revNum2.begin(), revNum2.end());
    int upd_Num_2 = stoi(revNum2);
    cout<<"Reverse of "<< sum1 << " is "<< upd_Num_2<<endl;

    int sum2 = sum1 + upd_Num_2;
    cout<<"Sum is: "<<sum2<<endl;
}