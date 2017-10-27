// Lab215.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main()
{
	int yearNumber;

	do {
		cout << "Please, enter year: " << endl;
		cin >> yearNumber;
	} while (yearNumber < 1900 || yearNumber > 2100);

	int a = yearNumber % 19;
	int b = yearNumber % 4;
	int c = yearNumber % 7;
	int d = (a * 19 + 24) % 30;
	int e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if ((d + e) < 10) {
		cout << "Easter will be: March " << d + e + 22 << "." << endl;
	}
	else cout << "Easter will be: April " << d + e - 9  << "." << endl;
}

