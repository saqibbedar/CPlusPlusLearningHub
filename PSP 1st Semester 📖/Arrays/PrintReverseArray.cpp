#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 4, 6, 7};
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }

    // Reverse the array
    // for (int i = 0, j = 4; i < j; i++, j--)
    for(int i = 0; i<5; i++)
    {
        a[i] = a[4-i];
        // Swap elements at positions i and j
        // int swap = a[i];
        // a[i] = a[j];
        // a[j] = swap;
    }
    

    // Print the reversed array
    cout << "Reversed Array: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] <<" ";
    }
    
    return 0;
}