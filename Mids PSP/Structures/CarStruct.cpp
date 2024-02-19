#include <iostream>
using namespace std;

struct Car {string model; int price;};

int main(){
    struct Car c1, c2;
    int size = sizeof(Car);
    cout<<"\nEnter name of Car: ";
    cin>>c1.model;
    cout<<"Enter name of Car: ";
    cin>>c1.price;

    cout<<"Model of Car is "<<c1.model<< " and Price is "<<c1.price<<"$";
}