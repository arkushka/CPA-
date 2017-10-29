// Lab238.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	double value=1;

	do {
		cout << "Enter n (n >= 0): ";
		cin >> n;
	} while (n < 0);

	for (double i=1; i < n+1; i++) {
		value *= i;
	}

	cout << "Value of n!: " << value << endl;
	return 0;
}

