// Lab231.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main(void)
{
	unsigned c0;
	int count = 0;

	do {
		cout << "Enter c0: ";
		cin >> c0;
	} while (c0 == 0);

	while (c0 != 1) {
		if (c0 % 2 == 0) {
			c0 /= 2;
			cout << c0 << endl;
		}
		else { 
			c0 = 3 * c0 + 1;
			cout << c0 << endl;
		}
		count++;
	}
	cout << "Steps: " << count << "." << endl;
}

