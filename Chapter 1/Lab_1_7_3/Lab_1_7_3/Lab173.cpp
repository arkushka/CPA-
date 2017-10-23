// Lab173.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

void main(void)
{
	int first, second, third, fourth;

	do {
		cout << "Enter first number:";
		cin >> first;
	} while (first < 1 || first > 255);

	do {
		cout << "Enter second number: ";
		cin >> second;
	} while (second < 1 || second > 255);

	do {
		cout << "Enter third number: ";
		cin >> third;
	} while (third < 1 || third > 255);

	do {
		cout << "Enter fourth number: ";
		cin >> fourth;
	} while (fourth < 1 || fourth > 255);

	cout << "Your Ip is: " << first << "." << second << "." << third << "." << fourth << endl;
}

