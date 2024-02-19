// #include <iostream>
// using namespace std;

// int main()
// {
//     int base, power, sum = 1;
//     cin>>base>>power;

//     int count = 1;

//     while (count<= power)
//     {
//         sum = sum * base;
//         count ++;
//     }
//     cout<<sum;
// }

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string name = "saqib";
    
    // Create a reversed string
    string rev(name.rbegin(), name.rend());

    cout << rev << endl;
    cout << name << endl;

    return 0;
}
