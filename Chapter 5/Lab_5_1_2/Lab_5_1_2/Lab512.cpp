// Lab512.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Square
{
public:
	Square(double side);

private:
	double side;
	double area;

public:
	void SetSide(double side);
	void print();
};

void Square::SetSide(double side) {
	if (side <= 0)
		return;

	this->side = side;
	this->area = side * side;
}

Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}

void Square::print()
{
	cout << "Square: side=" << this->side << " area=" << this->area << endl;
}

int main()
{
	Square s(4);
	s.print();

	s.SetSide(2.0);
	s.print();

	s.SetSide(-33);
	s.print();

	return 0;
}



