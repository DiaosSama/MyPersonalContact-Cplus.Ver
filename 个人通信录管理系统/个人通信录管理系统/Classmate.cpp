#include "stdafx.h"
#include "Classmate.h"
#include<cstring>
#include<fstream>
#include<iostream>


Classmate::Classmate(char *p, int a, int b, int c, char *d, char *q, char *r):
	Person(p,a,b,c,d,q)
{
	int i = 0;
	for (i = 0;i < strlen(r);i++)
	{
		schoolname[i] = r[i];
	}
	schoolname[i] = '\0';
}

Classmate::Classmate() {}

Classmate::~Classmate()
{
}

void Classmate::Write()
{
	fstream stuf;
	stuf.open("AddressBook1.txt", ios::out | ios::app);
	stuf << name << ' ' << schoolname << ' ' << birthyear << ' ' << birthmonth << ' ' << birthday << ' ' << call << ' ' << email << '\n';
	stuf.close();
}

void Classmate::Print()
{
	cout << "Name: " << name << endl;
	cout << "School: " << schoolname << endl;
	cout << "Birthday: " << birthyear << "/" << birthmonth << "/" << birthday << endl;
	cout << "PhoneNumber: " << call << endl;
	cout << "Email: " << email << endl;
}