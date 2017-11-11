// Lab344.cpp : Defines the entry point for the console application.
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

int daysBetween(Date d1, Date d2) {
	int diffDays = 0;

	if (d2.year < d1.year) {
		return -1;
	}

	for (int i = d1.year; i < d2.year; i++) {
		if (isLeap(i)) {
			diffDays += 366;
		}
		else diffDays += 365;
	}

	diffDays += dayOfYear(d2) - dayOfYear(d1);
	
	if (diffDays >= 0) {
		return diffDays;
	}

	return -1;
}

int main(void) {
	Date since, till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since, till) << endl;
	return 0;
}

