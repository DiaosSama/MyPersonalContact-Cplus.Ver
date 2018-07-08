#pragma once
#include "Person.h"
class Relative :
	public Person
{
	char generation[30];
public:
	Relative(char *p, int a, int b, int c, char *d, char *q, char *r);
	Relative();
	~Relative();
	void Write();
	void Print();
	friend void PrintIt(int i);
	friend bool SearchName(char *p);
	friend void Delete(char *p);
	friend void Edit(char *p);
	friend void PrintName(int i);
	friend void Birthmonth();
	friend void HappyBirth();
};

