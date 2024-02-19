/*
    Named Structures
    By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

    To create a named structure, put the name of the structure right after the struct keyword:
*/

#include "iostream";
using namespace std;

    struct car {
    string brand;
    string model;
    int year;
    };

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}