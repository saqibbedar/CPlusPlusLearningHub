#include <iostream>
using namespace std;

/*
 	1
   222
  33333
 4444444
555555555
 7654321
  54321
   321
    1
*/

int main()
{
	int rows = 5;
	// cout << " input number of rows in odd: ";
	// cin >> rows;
	// cout << endl << " the pattern will be " << "\n\n";
	//upper part of diamond
	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j >i; j--)
		{
			cout << " ";
		}
		for (int k = i * 2 - 1; k >= 1; k--)
		{
			cout << i;
		}
		cout << endl;
	}
	// lower part of diamond
	for (int i = rows - 1; i >= 1; i--)
	{
		for (int j = rows - 1; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = i * 2 - 1; k >= 1; k--)
		{
			cout << k;
		}
		cout<<endl;
	}
}