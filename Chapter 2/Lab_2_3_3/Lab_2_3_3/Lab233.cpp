// Lab233.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short n;
	unsigned long value = 1;
	do {
		cout << "Enter number of 2: ";
		cin >> n;
	} while (n > 63);

	for (unsigned short i = 0; i < n; i++) {
		value *= 2;
	}

	cout << "Pow of 2 is: " << value << endl;
    return 0;
}

