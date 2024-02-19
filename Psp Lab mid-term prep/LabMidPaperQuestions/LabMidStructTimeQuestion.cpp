/*
Define a struct Time that includes three integer member: hours, minutes, and seconds. Write a c++ function named addTime that takes two arguments and return the resultant time after adding the given times together. The addTime function should handle cases where the addition of seconds exceeds 60, incrementing the minutes accordingly, and if the addition of minutes exceeds 60, incrementing the hour.
*/

#include<iostream>
using namespace std;

struct Time {
	int mins;
	int seconds;
	int hours;
};

Time addTime(Time t1, Time t2)
{
	Time total = { 0,0,0 };
	total.seconds = t1.seconds + t2.seconds;
	total.mins = t1.mins + t2.mins;
	total.hours = t1.hours + t2.hours;
	if (total.seconds >= 60)
	{
		
		total.mins+=total.seconds/60;
		total.seconds = total.seconds % 60;
	}
	if (total.mins >= 60)
	{
		total.hours += total.mins / 60;
		total.mins = total.mins % 60;
	}
	return total;

}


int main()
{
	Time t1,t2;
	
	
		cout << "input hours of first time: ";
		cin >> t1.hours;
		cout << "input mins of first time: ";
		cin >> t1.mins;
		cout << " input seconds of first time";
		cin >> t1.seconds;
		cout<<endl;
		cout << "input hours of secondntime: ";
		cin >> t2.hours;
		cout << "input mins of second time: ";
		cin >> t2.mins;
		cout << " input seconds of second time";
		cin >> t2.seconds;
		cout << endl;

		Time total= addTime(t1, t2);
		cout << " total time is: ";
		cout << total.hours << " hours"<<endl;
		cout << total.mins << " minutes" << endl;
		cout << total.seconds << " seconds" << endl;
		return 0;
}
