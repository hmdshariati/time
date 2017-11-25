#include <iostream>;
#include "Time.h";
int main()

{

	Time newTime;
	Time newTime1;// to comprise two time
	Time newTime2;// to comprise two time

	//test the class

	//print constructor value
	cout << "the Time is : " << newTime.getHour() << ":" << newTime.getMinute() << " now." << endl;

	//ask from user
	cout << "write the minute : " << endl;
	int m;
	cin >> m;
	cout << "write the hour : " << endl;
	int h;
	cin >> h;
	//change time according to user input
	newTime.ChangeTime(h,m);
	//print chaged time
	cout << "the Time changed to : " << newTime.getHour() << ":" << newTime.getMinute() << " now." << endl;

	//ask from user the new time to comprise - Time 1
	cout << "write the new time to comprise. Time1-minute : " << endl;
	int m1;
	cin >> m1;
	cout << "Time1-hour : " << endl;
	int h1;
	cin >> h1;
	//change time1 according to user input
	newTime1.ChangeTime(h1,m1);

	//print changed time


	//ask from user the new time to comprise - Time 2
	cout << "write the new time to comprise. Time2-minute : " << endl;
	int m2;
	cin >> m2;
	cout << "Time2-hour : " << endl;
	int h2;
	cin >> h2;
	//change time1 according to user input
	newTime2.ChangeTime(h2,m2);

	//comprise Times
	newTime.DiffTimes(newTime1,newTime2);

	//sure to exit
	cout << "are you sure to exit?" << endl;
	system("pause");
	return 0;
};

