// first class by : Hamid Shariati
// version: 0.1
// date: 9 nov 2017
// created in vim
#include <iostream>
#include "Time.h"
using namespace std;
Time::Time()
{
	hour=0;
	minute=0;
};
Time::Time(int h, int m)
{
	ChangeTime(h,m);
};
Time::Time(int h)
{
	ChangeTime( h );
};
void Time::ChangeTime(int h, int m)
{
	if ( h >= 0 && h < 25 )
	{
		hour = h;
	}
	if (m >= 0 && m < 61)
	{
		minute = m;
	}
};
void Time::ChangeTime(int h)
{
	if ( h >= 0 && h < 25 )
	{
		hour = h;
	}
};
int Time::getHour()
{
	return hour;
};
int Time::getMinute()
{
	return  minute;
};
int main()
{
	Time newTime;
	cout << "the Time is : " << newTime.getHour() << ":" << newTime.getMinute() << " now." << endl;
	cout << "write the minute : " << endl;
	int m;
	cin >> m;
	cout << "write the hour : " << endl;
	int h;
	cin >> h;
	newTime.ChangeTime(h,m);
	cout << "the Time changed to : " << newTime.getHour() << ":" << newTime.getMinute() << " now." << endl;
	return 0;
   
};
