// Lab321.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

	int *pntr = vector;
	int min = 0;

	for (int i = 0; i < n; i++) {
		if (*pntr < min) {
			min = *pntr;
		}
		*pntr++;
	}
	cout << "Min is: " << min << endl;

	return 0;
}

