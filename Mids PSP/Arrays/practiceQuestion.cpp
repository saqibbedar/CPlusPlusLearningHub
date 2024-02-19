#include <iostream>
using namespace std;

int main(){
    int a[2][3];
    for(int i= 0; i<2; i++){
        for (int j = 0; j < 3; j++)
        {   
            cin>>a[i][j];
            if(a[i][j] == 0){
            cout<<"you entered 0";
            exit(0);
            }
        }
    }

    // Result 
    cout<<"\nArray Result is\n";

    for(int i= 0; i<2; i++){
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][1]) 
            {
                cout<<"Hello"<<" ";
            }
            else{
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}