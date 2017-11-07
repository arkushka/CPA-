// Lab2112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct TIME {
	int hours, minutes;
};

int main()
{
	TIME start, end;
	int resultHours, resultMinutes;

	do {
		cout << "Enter start time (hours minutes): ";
		cin >> start.hours;
		cin >> start.minutes;
	} while (start.hours < 0 || start.hours > 24 || start.minutes < 0 || start.minutes > 60);

	do {
		cout << "Enter end time (hours minutes): ";
		cin >> end.hours;
		cin >> end.minutes;
	} while (end.hours < 0 || end.hours > 24 || end.minutes < 0 || end.minutes > 60);

	resultHours = end.hours - start.hours;
	resultMinutes = end.minutes - start.minutes;

	while (resultHours > 24) {
		resultHours -= 24;
	}
	while (resultMinutes < 0) {
		resultHours--;
		resultMinutes += 60;
	}

	while (resultMinutes > 60) {
		resultMinutes -= 60;
		resultHours++;
	}


	cout << resultHours << ":" << resultMinutes << endl;

    return 0;
}

