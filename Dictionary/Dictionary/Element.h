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
	int compare(Element element);
	string getStr();
	Element* getNext();
	Element* getPrev();
	void changePrev(Element *element);
	void changeNext(Element *element);
};

