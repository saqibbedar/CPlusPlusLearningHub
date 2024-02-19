/*
print this pattern

123454321
 1234321
  12321
   121
    1
    1
   121
  12321
 1234321
123454321


*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
      for (int j = 1; j <= 5-i; j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <= i; k++)
      {
        cout<<k;
      }
      for (int l = i-1; l > 0; l--)
      {
        cout<<l;
      }
      cout<<endl;
    }
    
    for (int i = 1; i <= 5; i++)
    {
      for (int j = 1; j <= 5-i; j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <= i; k++)
      {
        cout<<k;
      }
      for (int l = i-1; l > 0; l--)
      {
        cout<<l;
      }
      cout<<endl;
    }
}