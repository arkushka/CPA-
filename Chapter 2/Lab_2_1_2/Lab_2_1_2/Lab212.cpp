// Lab212.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	do {
		cout << "Enter a gross price: "; // валова ціна
		cin >> grossprice;
	} while (grossprice < 0);
	do {
		cout << "Enter a tax rate: "; // ставка податку
		cin >> taxrate;
	} while (taxrate < 0 || taxrate > 100);

	//taxvalue = grossprice - netprice;
	//taxvalue = netprice*taxrate / 100;
	netprice = 100*grossprice / (taxrate + 100);
	taxvalue = grossprice - netprice;

	cout << "Net price: " << netprice << endl; // фактична ціна 
	cout << "Tax value: " << taxvalue << endl; // вартість податку
	return 0;
}
