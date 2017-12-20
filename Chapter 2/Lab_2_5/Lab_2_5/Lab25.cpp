// Lab25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int menuChoice;
	float a, b, result;

	do {
		cout << "MENU: " << endl << "0 - exit" << endl << "1 - addition" << endl << "2 - subtraction" << endl << "3 - multiplication" << endl << "4 - division" << endl << "Your choice? ";
		cin >> menuChoice;

		if (menuChoice == 0) { return 0; }

		cout << "Enter first value: ";
		cin >> a;
		cout << "Enter second value: ";
		cin >> b;

		switch (menuChoice) {
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a*b;
			break;
		case 4:
			result = a / b;
			break;
		}
		cout << "Result: " << result << endl;

	} while (menuChoice != 0);


	return 0;
}

