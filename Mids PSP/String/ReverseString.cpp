#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string user = "Saqib";
    string rev = string(user.rbegin(), user.rend());
    cout<<rev;
}