#pragma once

#include "Element.h"

class myVector
{
private:
	int lenght = 0;
	Element root = Element();

public:
	myVector();
	~myVector();
	Element getRoot();
	Element getElement(string str);
	void addElement(string str);
	void print();
};

