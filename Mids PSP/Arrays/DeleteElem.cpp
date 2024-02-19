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

    // Read index where you want to remove element
    int index;
    cout << "Enter index where you want to remove an Elem\n";
    cin >> index;
    while (true) {
        if (index >= S || index < 0) {
            cout << "Index Error: Please enter a valid index within the current array size:\n";
            cin >> index;
        } else {
            break;
        }
    }

    // Remove element by shifting elements
    for (int i = index; i < S - 1; i++) {
        a[i] = a[i + 1];
    }
    S--;

    cout << "Array after removal:\n";
    for (int i = 0; i < S; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}
