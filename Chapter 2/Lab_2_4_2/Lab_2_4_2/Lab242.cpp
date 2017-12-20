// Lab242.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	unsigned short val;
	bool ispalindrome = false;
	cout << "value = ";
	cin >> val;



	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;
	return 0;
}

