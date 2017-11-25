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

string Time::DiffTimes(Time &T1,Time &T2)
{
	int DiffHour = T2.getHour() - T1.getHour() ;
	int DiffMin = T2.getMinute() - T1.getMinute() ;
	//cout << T2.getHour() << endl;
	//cout << T2.getMinute() << endl;
	//cout << T1.getHour() << endl;
	//cout << T1.getMinute() << endl;
	cout << "Diff is " << DiffHour << ":" << DiffMin << endl ;
	return "1";
}

