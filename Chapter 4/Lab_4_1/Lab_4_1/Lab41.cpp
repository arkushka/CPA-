// Lab41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

float CountFinal(int *grades) {
	double finall = 0;
	int gradesCount = 0;

	for (int i = 0; ; i++) {

		if (grades[i] == -1)
			break;

		gradesCount++;
		finall += grades[i];
	}

	return finall / gradesCount;
}

void DisFinal(int **grades, int coursesCount) {

	double finall, coursesFinallSum = 0;

	for (int i = 0; i < coursesCount; i++) {

		finall = CountFinal(grades[i]);
		coursesFinallSum += finall;

		cout.precision(2);
		cout << fixed << "Course " << i + 1 << ": final " << finall << ", grades: ";

		for (int j = 0; ; j++) {
			if (grades[i][j] == -1)
				break;
			cout << grades[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "Overall final: " << coursesFinallSum / coursesCount << endl;
}

int main()
 {
	int numOfCourses = 0, gradesInCourse;
	int **grades = new int *[numOfCourses];;

	do {
		cout << "Number of courses taken by the student: ";
		cin >> numOfCourses;
	} while (numOfCourses <= 0);

	for (int r = 0; r < numOfCourses; r++) {
		do {
			cout << "Enter number of grades: ";
			cin >> gradesInCourse;
		} while (gradesInCourse > 5 || gradesInCourse < 1);
		grades[r] = new int[gradesInCourse + 1];

		for (int c = 0; c < gradesInCourse; c++) {
			do {
				cin >> grades[r][c];
			} while (grades[r][c] <= 0 || grades[r][c] >= 6);

			grades[r][gradesInCourse] = -1;
		}
	}

	DisFinal(grades, numOfCourses);

	return 0;
}

