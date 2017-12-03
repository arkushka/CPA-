// Lab534.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

class Subscription
{
public:
	Subscription()
	{
		this->id = 0;
		this->ownerName = "Unknown";
		this->validityInMonths = 0;
	}
	Subscription(int id, int validityInMonths, std::string ownerName)
	{
		if (id < 0)
			id = 0;

		this->id = id;

		if (validityInMonths < 0)
			validityInMonths = 0;

		this->validityInMonths = validityInMonths;

		if (ownerName.length() == 0)
			ownerName = "Unknown";

		this->ownerName = ownerName;
	}

private:
	int id;
	int validityInMonths;
	std::string ownerName;

public:
	int GetId()
	{
		return this->id;
	}
	bool Extend(int numOfMonths)
	{
		if (numOfMonths <= 0)
			return false;

		validityInMonths += numOfMonths;
		return true;
	}
	bool Cancel()
	{
		if (validityInMonths == 0)
			return false;

		validityInMonths = 0;
		return true;
	}
	std::string GetInfo()
	{
		return "Subscription ID: " + std::to_string(this->id) + ". Valid for "
			+ std::to_string(this->validityInMonths) + " months. Owner is "
			+ this->ownerName + ".";
	}
};

void ShowAllSubscriptions(Subscription*subscriptions, int count)
{
	bool subscriptionsNotFound = true;

	for (int i = 0; i < count; i++)
	{
		if (subscriptions[i].GetId() != 0)
		{
			subscriptionsNotFound = false;
			std::cout << subscriptions[i].GetInfo() << std::endl;
		}
	}

	if (subscriptionsNotFound)
	{
		std::cout << "There are no subscriptions in the system!" << std::endl;
	}
}

std::string Trim(std::string str)
{
	while (str[0] == ' ')
		str.erase(0, 1);

	while (str[str.length() - 1] == ' ')
		str.erase(str.length() - 1, 1);

	return str;
}

std::string RemoveExtraSpaces(std::string str)
{
	int index = 0;

	while ((index = str.find("  "), index) != -1)
		str = str.replace(index, 2, " ");

	return str;
}

std::string* SplitBySpace(std::string str, int &wordsCount)
{
	int begin = 0, end, index = -1;
	std::string* words;

	wordsCount = 0;

	str = Trim(str);

	str = RemoveExtraSpaces(str);

	while ((index = str.find(' ', index + 1)) != -1)
		wordsCount++;

	wordsCount++;
	words = new std::string[wordsCount];

	index = 0;

	while ((end = str.find(' ', begin)) != -1)
	{
		words[index] = str.substr(begin, end - begin);
		index++;

		begin = end + 1;
	}

	words[index] = str.substr(begin);

	return words;
}

int SearchById(Subscription*subscriptions, int id)
{
	for (int i = 0; i < 10; i++)
	{
		if (subscriptions[i].GetId() == id)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	Subscription subscriptions[10];
	Subscription nonExisting;
	std::string command;
	std::string* splitedCommand;
	int wordsCount = 0;
	int idInArray;

	while (command != "quit")
	{
		ShowAllSubscriptions(subscriptions, 10);

		std::cout << "Enter command: ";
		std::getline(std::cin, command);

		splitedCommand = SplitBySpace(command, wordsCount);

		if (splitedCommand[0] == "extend")
		{
			if (wordsCount < 3)
			{
				std::cout << "Invalid paramters!" << std::endl;
				continue;
			}

			idInArray = SearchById(subscriptions, std::stoi(splitedCommand[1]));

			if (idInArray != -1)
			{
				if (!subscriptions[idInArray].Extend(std::stoi(splitedCommand[2])))
				{
					std::cout << "Invalid month count parameter!" << std::endl;
				}
			}
			else
			{
				std::cout << "Subscription with ID " << splitedCommand[1]
					<< " was not found!" << std::endl;
			}
		}
		else if (splitedCommand[0] == "cancel")
		{
			if (wordsCount < 2)
			{
				std::cout << "Invalid paramters!" << std::endl;
				continue;
			}

			idInArray = SearchById(subscriptions, std::stoi(splitedCommand[1]));

			if (idInArray != -1)
			{
				if (!subscriptions[idInArray].Cancel())
				{
					std::cout << "Validity month count was 0 before operation!" << std::endl;
				}
			}
			else
			{
				std::cout << "Subscription with ID " << splitedCommand[1]
					<< " was not found!" << std::endl;
			}
		}
		else if (splitedCommand[0] == "delete")
		{
			if (wordsCount < 2)
			{
				std::cout << "Invalid paramters!" << std::endl;
				continue;
			}

			idInArray = SearchById(subscriptions, std::stoi(splitedCommand[1]));

			if (idInArray != -1)
			{
				subscriptions[idInArray] = nonExisting;
			}
			else
			{
				std::cout << "Subscription with ID " << splitedCommand[1]
					<< " was not found!" << std::endl;
			}
		}
		else if (splitedCommand[0] == "create")
		{
			if (wordsCount < 4)
			{
				std::cout << "Invalid paramters!" << std::endl;
				continue;
			}

			idInArray = SearchById(subscriptions, std::stoi(splitedCommand[1]));

			if (idInArray != -1)
			{
				std::cout << "Subscription with ID " << splitedCommand[1]
					<< " already exists!" << std::endl;
			}
			else
			{
				idInArray = SearchById(subscriptions, 0);

				if (idInArray == -1)
				{
					std::cout << "Unfortunately, all subscriptions are used!" << std::endl;
				}
				else
				{
					subscriptions[idInArray] = Subscription
					(
						std::stoi(splitedCommand[1]),
						0,
						splitedCommand[2] + " " + splitedCommand[3]
					);
				}
			}
		}
	}

	return 0;
}

