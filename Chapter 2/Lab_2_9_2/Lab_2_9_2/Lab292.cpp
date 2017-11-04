// Lab292.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int amountOfMoney, numberOfBanknotes, banknotes[5][2];

	banknotes[0][0] = 50;
	banknotes[1][0] = 20;
	banknotes[2][0] = 10;
	banknotes[3][0] = 5;
	banknotes[4][0] = 1;

	do {
		cout << "Enter your amount plussar: ";
		cin >> amountOfMoney;
	} while (amountOfMoney <= 0);

	for (int i = 0; i < 5; i++) {
		if (amountOfMoney >= banknotes[i][0]) {
			banknotes[i][1] = amountOfMoney / banknotes[i][0];
			amountOfMoney -= banknotes[i][1]*banknotes[i][0];
		}		

		for (int n = 0; n < banknotes[i][1]; n++) {
			cout << banknotes[i][0] << " ";
		}
	}
	cout << endl;
	return 0;
}

