// Lab172.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

void main(void)
{
	int first, second;
	bool answer;
	float eps= 0.000000001f;
	cout << "Input first integer number:";
	cin >> first;
	cout << "Input second integer number:";
	cin >> second;

	answer = fabs((1.0 / ((float)first) - 1.0 / ((float)second))) < eps;
	cout << "Results are " << (answer ? "" : "not ") << "equal (by " << eps << "epsilon)" << endl;
}

