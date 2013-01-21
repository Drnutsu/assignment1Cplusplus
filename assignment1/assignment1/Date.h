#ifndef _Date_h
#define _Date_h

#include<string>

class Date(){
	const int day = 1;
	const int years = 2000;
	const string month = "January";
	Date();
	Date(int, int, string);
	
	const int getDay() const;
	const int getYear() const;
	const string getMonth() const;

	string toString();
	int daysInMonth(string, int);
	bool isLeapYear(int);
	enum Month{};
	string monthToString(Month);
	//test add comment before sync to github
	//test2
};


#endif