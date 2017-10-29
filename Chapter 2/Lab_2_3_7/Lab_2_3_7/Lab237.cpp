// Lab237.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double sequence = 1, element1 = 1, element2 = 1;
	int n;

	do {
		cout << "Enter a number (>0): ";
		cin >> n;
	} while (n <= 0);

	for (unsigned long i = 1; i < n - 1; i++) {
		sequence = element1 + element2;
		element1 = element2;
		element2 = sequence;
	}

	cout.precision(20);
	cout << sequence << endl;
	return 0;
}

