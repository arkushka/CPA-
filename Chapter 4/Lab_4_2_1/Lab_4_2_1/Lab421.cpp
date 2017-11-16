// Lab421.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	double sum = 0;

	do {
		cout << "Enter N (1 - 100,000): ";
		cin >> n;
	} while (n < 1 || n> 100000);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	cout.precision(0);
	cout << fixed << sum << endl;

    return 0;
}

