// Lab5317.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node(int val);
	int value;
	Node* next;
};

Node::Node(int val) : value(val), next(nullptr) {}

class List
{
public:
	List();
	~List();
	void push_front(int value);
	bool pop_front(int& value);
	void push_back(int value);
	bool pop_back(int& value);
	int size();
private:
	Node* head;
	Node* tail;
};

List::List() : head(nullptr), tail(nullptr) {}

List::~List()
{
	Node* new_head;

	while (this->head != nullptr)
	{
		new_head = head->next;
		delete head;
		this->head = new_head;
	}
}

void List::push_front(int value)
{
	Node* new_head = new Node(value);
	new_head->next = head;

	if (this->head == nullptr)
		this->tail = new_head;

	head = new_head;
}

bool List::pop_front(int& value)
{
	if (head == nullptr)
		return false;

	Node* new_head = head->next;
	value = head->value;
	delete head;
	head = new_head;

	return true;
}

void List::push_back(int value)
{
	Node* new_tail = new Node(value);

	// if pushed element is first
	// (list is clear)
	if (head == nullptr)
	{
		head = new_tail;
		tail = new_tail;
	}
	else
	{
		tail->next = new_tail;
		tail = new_tail;
	}
}

bool List::pop_back(int& value)
{
	Node* currentElement = head;

	// if list is clear
	if (currentElement == nullptr)
		return false;

	// if this is the last element in list
	if (currentElement == tail)
	{
		value = head->value;
		delete head;
		tail = nullptr;
		head = nullptr;
	}
	else
	{
		// getting last element
		while (currentElement->next != tail)
			currentElement = currentElement->next;

		// saving value and removing element
		value = currentElement->next->value;
		delete currentElement->next;
		// mark next element as null
		currentElement->next = nullptr;
		// change current tail
		tail = currentElement;
	}

	return true;
}

int List::size()
{
	Node* firstElement = head;
	int size = 0;

	while (head != nullptr)
	{
		size++;
		head = head->next;
	}

	head = firstElement;

	return size;
}

int main()
{
	List list;
	int value = 0;

	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);

	while (list.pop_back(value))
		cout << value << endl;
	cout << endl;

	return 0;
}

