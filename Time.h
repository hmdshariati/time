//header file for Time calss

//writed by Hamid Shariati

//version: 0.1

//date:10 nov 2017

//edited in vim



#include <iostream>

using namespace std;

class Time

{

public:

	Time(int h, int m);

	Time(int h);

	Time();

	void ChangeTime(int h, int m);

	void ChangeTime(int h);

	int getHour();

	int getMinute();

	string DiffTimes(Time &T1,Time &T2);
private:

	int hour;

	int minute;

};

