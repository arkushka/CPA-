// Lab241.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned long n, mask = 1;
	short bits = 0;
	do {
		cout << "Enter integer, pls: ";
		cin >> n;
	} while (n <= 0);

	for (short i = 1; i < 30; i++) {
		if (mask & n) {
			bits += 1;
			mask *= 2;
		}
	}


	cout << bits << endl;

	return 0;
}

