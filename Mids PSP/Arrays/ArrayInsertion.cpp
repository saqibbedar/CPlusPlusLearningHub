#include <iostream>
using namespace std;

int main() {
    const int Array_Size = 100;
    int a[Array_Size], S;

    // Handling array Size
    cout << "Enter size for array\n";
    cin >> S;
    while (true) {
        if (S > Array_Size) {
            cout << "Size Error: Please give size between 1 to 100 for array:\n";
            cin >> S;
        } else {
            break;
        }
    }

    // Read array
    cout << "Enter Array values\n";
    for (int i = 0; i < S; i++) {
        cin >> a[i];
    }

    // Read index where you want to add element
    int index, num;
    cout << "Enter index where you want to insert an Elem\n";
    cin >> index;
    while (true) {
        if (index > S || index < 0) {
            cout << "Index Error: Please enter a valid index within the current array size:\n";
            cin >> index;
        } else {
            break;
        }
    }
    cout << "Enter the number that you want to insert\n";
    cin >> num;

    // Shift elements to make room for the new element
    for (int i = S; i > index; i--) {
        a[i] = a[i - 1];
    }
    a[index] = num;

    cout << "Array after insertion:\n";
    for (int i = 0; i < S + 1; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}