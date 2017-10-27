// Lab214.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;
int main()
{
	int yearNumber, monthNumber, dayNumber;

	do {
		cout << "Please, enter year: " << endl;
		cin >> yearNumber;
	} while (yearNumber < 1900 || yearNumber > 2017);

	do {
		cout << "Please enter month: " << endl;
		cin >> monthNumber;
	} while (monthNumber < 1 || monthNumber>12);

	if ((monthNumber % 2 != 0 && monthNumber <= 7) || (monthNumber % 2 == 0 && monthNumber >= 8)) {
		do {
			cout << "Please enter day: " << endl;
			cin >> dayNumber;
		} while (dayNumber < 1 || dayNumber > 31);
	}
	else if ((monthNumber % 2 == 0 && monthNumber >= 4 && monthNumber <= 6) || (monthNumber % 2 != 0 && monthNumber >= 9)) {
		do {
			cout << "Please enter your day: " << endl;
			cin >> dayNumber;
		} while (dayNumber < 1 || dayNumber > 30);
	}
	else if (monthNumber == 2 && yearNumber % 4 == 0) {
		do {
			cout << "Please enter your day: " << endl;
			cin >> dayNumber;
		} while (dayNumber < 1 || dayNumber > 29);
	}
	else if (monthNumber == 2 && yearNumber % 4 != 0) {
		do {
			cout << "Please enter your day: " << endl;
			cin >> dayNumber;
		} while (dayNumber < 1 || dayNumber > 28);
	}

	monthNumber -= 2;
	if (monthNumber < 0) {
		monthNumber += 12;
		yearNumber -= 1;
	}
	monthNumber *= 83;
	monthNumber /= 32;
	monthNumber += dayNumber;
	monthNumber += yearNumber;
	monthNumber += yearNumber / 4;
	monthNumber -= yearNumber / 100;
	monthNumber += yearNumber / 400;
	monthNumber %= 7;


	if (monthNumber == 1) {
		cout << "it's Monday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 2) {
		cout << "it's Tuesday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 3) {
		cout << "it's Wednesday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 4) {
		cout << "it's Thursday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 5) {
		cout << "it's Friday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 6) {
		cout << "it's Saturday, " << monthNumber << " day of the week!" << endl;
	}
	else if (monthNumber == 0) {
		cout << "it's Sunday, " << monthNumber << " day of the week!" << endl;
	}
}

