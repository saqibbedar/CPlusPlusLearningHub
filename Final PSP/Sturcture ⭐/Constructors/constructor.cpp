#include <iostream>
using namespace std;

struct Date
{
    int day;

    Date(int d)
    {
        day = d;
    }

    void printDay()
    {
        cout << "day " << day << endl;
    }
};

Date values(Date day){
    cin>>day.day;
    return day;
}

int main()
{
    Date d;
    values(d);
    d.printDay();
    return 0;
}