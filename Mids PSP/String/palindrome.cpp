#include <iostream>
// #include <algorithm>
#include <string>
using namespace std;

bool check(string& name)
{
   bool flag = false;
	int size = name.length();
	for (int i = 0; i < size; i++)
	{
        flag = (name[i] == name[size-1-i])? true: false;
		// if ((name[i] == name[size - 1 - i]))
		// 	flag=true;
        //     else
        //     flag=false;
	}
	return flag;
}

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<name.length()<<endl<<"\n";
    string res = (check(name)? "Palindrome": "not Palindrome");
    cout<<res;
    // cout<<(check(name)? "Palindrome":"not Palindrome");
    // if (check(name))
    // cout<<"Palindrome";
    // else
    // cout<<"Not Palindrome";
}