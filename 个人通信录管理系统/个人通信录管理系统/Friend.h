#pragma once
#include "Person.h"
class Friend :
	public Person
{
private:
	char place[30];
public:
	Friend(char *p, int a, int b, int c, char *d, char *q, char *r);
	Friend();
	~Friend();
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

