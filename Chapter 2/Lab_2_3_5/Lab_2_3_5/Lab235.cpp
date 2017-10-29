// Lab235.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	unsigned n;
	do {
		cout << "Enter a positive integer value greater than 1: ";
		cin >> n;
	} while (n < 1 || n >= 100);


	cout << '+';
	for (int i = 0; i < n; i++) {
		cout << '-';
	}

	cout << '+' << endl;
	for (int i = 0; i < n; i++) {
		cout << '|';
		for (int j = 0; j < n; j++) {
			cout << ' ';
		}

		cout << '|' << endl;
	}

	cout << '+';
	for (int i = 0; i < n; i++) {
		cout << '-';
	}

	cout << '+' << endl;
	return 0;
}

