#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    while (true)
    {
    
    cout<<endl; // for While loop
    
    // declare variable for five subjects marks
    double a, b, c, d, e, totalMarks = 500.0, obMarks, totalPercentage, totalAvg;

    // Prompt the user to enter the data for five subjects marks:
    cout<<"Enter your English Marks: ";
    cin>>a;

    cout<<"Enter your Math Marks: ";
    cin>>b;

    cout<<"Enter your PSP Marks: ";
    cin>>c;

    cout<<"Enter your ICT Marks: ";
    cin>>d;

    cout<<"Enter your Pak-Study Marks: ";
    cin>>e;
    cout<<endl;

    // Compute the given data
    obMarks = a + b + c + d + e;


    // Print the result to user for obtained Marks
    cout<< "Your Obtained marks are: " << obMarks<<endl;
    


    // Find the total Percentage
    totalPercentage = obMarks/totalMarks * (100);
    cout<<"Your Total Percentage is: "<< totalPercentage<<endl;


    // Find the total Average
    totalAvg = obMarks/5;
    cout<<"Your Total Average is: "<<totalAvg<<endl;
    }
    

}