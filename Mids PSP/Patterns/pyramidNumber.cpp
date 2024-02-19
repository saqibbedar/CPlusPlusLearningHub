#include <iostream>
using namespace std;

/*
	 1
    121
   12321
  1234321
 123454321
  1234321
   12321
    121
     1
*/

int main()
{
	int rows = 5;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (int l = i-1; l >= 1; l--)
		{
			cout<<l;
		}
		cout << endl;
	}

	for (int i = 5-1; i >= 1; i--)
	{
		for (int j = rows; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (int l = i-1; l >= 1; l--)
		{
			cout<<l;
		}
		cout << endl;
	}
}