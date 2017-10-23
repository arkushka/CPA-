// Lab171.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <iomanip>;

using namespace std;
int main(void)
{
	float x, y, z, t, r;
	cout << "input first value:";
	cin >> x;
	cout << "input second value:";
	cin >> y;
	cout << "input third value:";
	cin >> z;
	cout << "input fourth value:";
	cin >> t;
	cout << "input fifth value:";
	cin >> r;

	cout << "First value:"<< x << endl;
	cout << "Second value with two decimal after point:" << fixed << setprecision(2) << y << endl;
	cout << "Third value with six decimal after point:" << fixed << setprecision(6) << z << endl;
	cout << "Fourth value with two decimal after point:" << fixed << setprecision(2) << t << endl;
	cout << "Fifth value with no one decimal after point:" << fixed << setprecision(0) << r << endl;
    return 0;	
}

