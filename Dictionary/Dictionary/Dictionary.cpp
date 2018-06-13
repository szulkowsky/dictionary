// Dictionary.cpp : Defines the entry point for the console application.

#include <iostream>
#include "myVector.h"

int main()
{
	string tab[] = { "aaaa", "cccc", "eeeeee", "oooooo", "habba", "babba", "kupa", "kaktus", "aaaa", "aaa"};
	myVector myVector;
	for (int i = 0; i < 10; i++) {
		myVector.addElement(tab[i]);
	}
	myVector.print();
    return 0;
}

