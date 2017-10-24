// Lab211.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;

	if (year % 4 != 0) {
		cout << "Our congratulation! It`s a common year!" << endl;
	}
	else if (year % 100 != 0) {
		cout << "Our congratulation! It`s a leap year!" << endl;
	}
	else if (year % 400 != 0) {
		cout << "Our congratulation! It`s a common year!" << endl;
	}
	else {
		cout << "Our congratulation! It`s a leap year!" << endl;
	}

	return 0;
}

