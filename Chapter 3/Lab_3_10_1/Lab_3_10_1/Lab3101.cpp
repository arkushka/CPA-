#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool IsPresent(int balls[], int value, int ballsCount) {

	for (int i = 0; i < ballsCount; i++) {

		if (balls[i] == value) return true;
	}

	return false;
}

int main(void) {
	int max = 10;
	int ballsNum;
	int *ballsMachine;
	int rnd = 1;

	cout << "Max ball number? ";
	cin >> max;
	cout << "How many balls? ";
	cin >> ballsNum;

	srand(time(NULL));

	ballsMachine = new int[ballsNum];

	for (int i = 0; i < ballsNum; i++) {
		rnd = rand() % max + 1;

		if (IsPresent(ballsMachine, rnd, ballsNum)) {
			i--;
			continue;
		}

		ballsMachine[i] = rnd;
	}

	for (int i = 0; i < ballsNum; i++)
		cout << ballsMachine[i] << ' ';
	cout << endl;

	delete[] ballsMachine;

	return 0;
}

