// Lab453.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	int index = 0;
	std::string from;
	std::string to;
	std::string sentence;

	std::cout << "Enter from: ";
	std::getline(std::cin, from);

	std::cout << "Enter to: ";
	std::getline(std::cin, to);

	std::cout << "Enter sentence: ";
	std::getline(std::cin, sentence);

	index -= to.length();

	while ((index = sentence.find(from, index + to.length())) != -1)
		sentence.replace(index, from.length(), to);

	std::cout << sentence << "\n";
}

