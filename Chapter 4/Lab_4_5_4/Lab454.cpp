// Lab454.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

inline std::string RemoveExtraSpaces(std::string str)
{
	int index = -1;

	if (str[0] == ' ')
		str.replace(0, 1, "");

	if (str[str.length() - 1] == ' ')
		str.replace(str.length() - 1, 1, "");

	while ((index = str.find("  ")) != -1)
		str.replace(index, 2, " ");

	return str;
}

inline std::string ToLower(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + ' ';

	return str;
}

inline std::string RemoveStopWord(std::string str, std::string word)
{
	int index = -1;

	while ((index = ToLower(str).find(" " + word + " ", index + 1)) != -1 ||
		(index = ToLower(str).find(" " + word, index + 1)) != -1,
		(index = ToLower(str).find(word + " ", index + 1)) != -1)
		str.replace(index, word.length(), "");

	return RemoveExtraSpaces(str);
}

int main()
{
	std::string stopWords;
	std::string sentence;
	std::string currentStopWord;

	int begin = 0, end;
	int index = -1;

	std::cout << "Enter stop words: ";
	std::getline(std::cin, stopWords);

	std::cout << "Enter sentence: ";
	std::getline(std::cin, sentence);

	while ((end = stopWords.find(',', begin)) != -1) {
		currentStopWord = stopWords.substr(begin, end - begin);
		sentence = RemoveStopWord(sentence, currentStopWord);
		begin = end + 1;
	}

	currentStopWord = stopWords.substr(begin);
	sentence = RemoveStopWord(sentence, currentStopWord);

	std::cout << sentence << "\n";
}

