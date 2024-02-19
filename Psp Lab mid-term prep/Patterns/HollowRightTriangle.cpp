/* Print below patterns
*
**
* *
*  *
*****

    *
   **
  * *
 *  *
*****

* * * * *
*   *   *
* * * * *
*   *   *
* * * * *

*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout<<"\nSecond Shape\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || k == i || i == 5)
            {
                
                    cout<<"*";
                 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"\nHollow Square\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5 || j == 3 || i == 3) {
                cout <<"* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    

    return 0;
}
