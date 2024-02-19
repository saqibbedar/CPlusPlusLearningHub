/*Here, C++ program constructor in struct*/ 
#include <iostream>
using namespace std;

struct hello
    {
    public:     //by default also it is public
        hello();    
        ~hello();
    };

hello::hello()
    {
    cout<<"calling constructor...!"<<endl;
    }

hello::~hello()
    {
    cout<<"calling destructor...!"<<endl;
    }

int main()
{
hello obj;      //creating a hello obj, calling hello constructor and destructor 

return 0;
}