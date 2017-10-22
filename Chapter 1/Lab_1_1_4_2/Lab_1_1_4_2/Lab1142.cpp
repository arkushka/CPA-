// Lab1142.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main(void) {
	float pi = 3.14159265359;
	float x, y, firstPart, secondPart;
	float squaredX;
	float squaredPi = pi * pi;
	cout << "Enter value for x: ";
	cin >> x;
	squaredX = x * x;

	firstPart = squaredX / (squaredPi * (squaredX + (1.0 / 2.0)));
	secondPart = 1 + ((squaredX) / ((squaredPi) * (squaredX - (1.0 / 2.0)) * (squaredX - (1.0 / 2.0))));
	y = firstPart * secondPart;

	cout << "y = " << y << endl;
	return 0;
}

