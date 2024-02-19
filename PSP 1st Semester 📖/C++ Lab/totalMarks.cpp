#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, e;
    cout<<"Enter your five subjects Marks one by one..."<<endl;
    cin>> a>> b>> c>> d>> e;

    double obMarks = a+b+c+d+e; // obtained Marks
    cout<<obMarks<<endl;

    if (obMarks > 50){
        cout<<" Your are Pass";
    }
    else{
        cout<<"You are Fail";    }

    double totalPercentage = obMarks/500*(100); // Percentage
    cout<<totalPercentage<<endl;

    if (totalPercentage >= 80){
        cout<<"A grade"<<endl;
    }
    else if (totalPercentage >= 70)
    {
        cout<<"B grade"<<endl;
    }
    else if (totalPercentage >= 60)
    {
        cout<<"C grade"<<endl;
    }
    else if (totalPercentage >= 50)
    {
        cout<<"D grade"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    
    double totalAvg = obMarks/5; // Average
    cout<<totalAvg<<endl; 
    
}