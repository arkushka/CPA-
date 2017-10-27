// Lab213.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main(void) {
	int sys;
	float m, ft, in;

	do {
		cout << "What system do you use? (0 - metric, 1 - imperial): ";
		cin >> sys;
	} while (sys != 0 && sys != 1);

	if (sys == 1) {
		cout << "Enter value of 'foot': ";
		cin >> ft;

		cout << "Enter value of 'inch': ";
		cin >> in;

		m = ft*0.3048 + 0.0254*in;
		cout << "Your meters: " << m << "m" << endl;

	}
	else if(sys == 0) {
		cout << "Enter a value of meters: ";
		cin >> m;
		ft = (int) (m/ 0.3048);
		in = m / 0.0254 - ft*12;
		cout << "Your 'foot' and 'inch': " << ft << "'" << in << "''";;
	}




	return 0;
}