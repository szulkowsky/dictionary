#include <string>
#pragma once
using std::string;

class Element {

private:
	string str;
	Element *next;
	Element *prev;

public:
	Element();
	Element(string str);
	Element(string _str, Element *_prev, Element *_next);

	~Element();
};

