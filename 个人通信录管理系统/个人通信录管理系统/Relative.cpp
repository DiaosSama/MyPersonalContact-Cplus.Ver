#include "stdafx.h"
#include "Relative.h"
#include<fstream>
#include<iostream>


Relative::Relative(char *p, int a, int b, int c, char *d, char *q, char *r) :
	Person(p, a, b, c, d, q)
{
	int i = 0;
	for (i = 0;i < strlen(r);i++)
	{
		generation[i] = r[i];
	}
	generation[i] = '\0';
}

Relative::Relative()
{
}

Relative::~Relative()
{
}

void Relative::Write()
{
	fstream stuf;
	stuf.open("AddressBook4.txt", ios::out | ios::app);
	stuf << name << ' ' << generation << ' ' << birthyear << ' ' << birthmonth << ' ' << birthday << ' ' << call << ' ' << email << '\n';
	stuf.close();
}

void Relative::Print()
{
	cout << "Name: " << name << endl;
	cout << "Generation: " << generation << endl;
	cout << "Birthday: " << birthyear << "/" << birthmonth << "/" << birthday << endl;
	cout << "PhoneNumber: " << call << endl;
	cout << "Email: " << email << endl;
}