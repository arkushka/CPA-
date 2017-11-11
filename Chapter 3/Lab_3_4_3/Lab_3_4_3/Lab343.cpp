// Lab343.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};
bool isLeap(int year) {
	if (year % 4 != 0) {
		return false;
	}
	else if (year % 100 != 0) {
		return true;
	}
	else if (year % 400 != 0) {
		return false;
	}
	else return true;
}
int monthLength(int year, int month) {
	int monthLnth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (isLeap(year) == true) {
		monthLnth[1] = 29;
	}
	return monthLnth[month - 1];
}
int dayOfYear(Date date) {
	int days = date.day;
	for (int i = 1; i < date.month; i++) {
		days += monthLength(date.year, i);
	}
	return days;
}
int main(void) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}

