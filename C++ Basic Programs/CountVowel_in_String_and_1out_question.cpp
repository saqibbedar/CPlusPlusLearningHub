// #include <iostream>
// using namespace std;

// int main()
// {
//     int m = 7;
//     cout<<m-- <<endl;
//     cout<< --m <<endl;

//     string arr1[] = {"a", "e", "e", "o", "u"};
//     for (int i = 1; i <= 5; i++)
//     {
//         cout<<arr1[i];
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowelCount = 0;

    // Loop through each character in the string
    for (char ch : inputString) {
        // Check if the character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
