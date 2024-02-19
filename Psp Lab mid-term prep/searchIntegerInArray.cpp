// write a c++ program to evaluate integer in an array

#include <iostream>
using namespace std;

int main()
{
    int a[5];
    bool isFound = false;
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter a num: ";
    int n; cin>>n;


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        if (a[i] == n)
        {
            isFound = true;
            if (isFound)
    {
        cout<<"number found is : "<<a[i]<<endl;
    }
    break;
        }
        }

    }
       
}

/*
#include <iostream>
using namespace std;

int main()
{
    int a[5];
    bool isFound = false;
    int n;

    // Input values into the array
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter a num: ";
    cin >> n;

    // Search for the number in the array
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            isFound = true;
            cout << "Number found at index " << i << ": " << a[i] << endl;
            break; // If you want to stop searching after finding the number
        }
    }

    // If the number is not found
    if (!isFound)
    {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}

*/