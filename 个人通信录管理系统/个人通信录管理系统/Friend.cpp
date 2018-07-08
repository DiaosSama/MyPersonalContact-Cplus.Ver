#include "stdafx.h"
#include "Friend.h"
#include<fstream>
#include<iostream>


Friend::Friend(char *p, int a, int b, int c, char *d, char *q, char *r) :
	Person(p, a, b, c, d, q)
{
	int i = 0;
	for (i = 0;i < strlen(r);i++)
	{
		place[i] = r[i];
	}
	place[i] = '\0';
}

Friend::Friend()
{
}

Friend::~Friend()
{
}

void Friend::Write()
{
	fstream stuf;
	stuf.open("AddressBook3.txt", ios::out | ios::app);
	stuf << name << ' ' << place << ' ' << birthyear << ' ' << birthmonth << ' ' << birthday << ' ' << call << ' ' << email << '\n';
	stuf.close();
}

void Friend::Print()
{
	cout << "Name: " << name << endl;
	cout << "Meeting Place: " << place << endl;
	cout << "Birthday: " << birthyear << "/" << birthmonth << "/" << birthday << endl;
	cout << "PhoneNumber: " << call << endl;
	cout << "Email: " << email << endl;
}