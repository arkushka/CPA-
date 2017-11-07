// Lab2111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	struct TIME {
		int hours, minutes, durationMinutes;
	} timer;

	do {
		cout << "Enter hours: ";
		cin >> timer.hours;
	} while (timer.hours < 0 || timer.hours > 24);

	do {
		cout << "Enter minutes: ";
		cin >> timer.minutes;
	} while (timer.minutes < 0 || timer.minutes > 60);

	do {
		cout << "Enter duration of some event(in minutes): ";
		cin >> timer.durationMinutes;
	} while (timer.durationMinutes < 0);

	timer.hours += timer.durationMinutes / 60;

	if (timer.durationMinutes > 60) {
		timer.minutes += timer.durationMinutes % 60 ;
	}
	else {
		timer.minutes += timer.durationMinutes;
	}

	while (timer.minutes > 59) {
		timer.minutes -= 60;
		timer.hours++;
	}
	while (timer.hours > 24) {
		timer.hours -= 24;
	}

	cout << timer.hours << ":" << timer.minutes << endl;

	return 0;
}

