#include "stdafx.h"
#include "Teammate.h"
#include<fstream>
#include<iostream>


Teammate::Teammate(char *p, int a, int b, int c, char *d, char *q,char *r):
	Person(p,a,b,c,d,q)
{
	int i = 0;
	for (i = 0;i < strlen(r);i++)
	{
		company[i] = r[i];
	}
	company[i] = '\0';
}

Teammate::Teammate()
{
}

Teammate::~Teammate()
{
}

void Teammate::Write()
{
	fstream stuf;
	stuf.open("AddressBook2.txt", ios::out | ios::app);
	stuf << name << ' ' << company << ' ' << birthyear << ' ' << birthmonth << ' ' << birthday << ' ' << call << ' ' << email << '\n';
	stuf.close();
}

void Teammate::Print()
{
	cout << "Name: " << name << endl;
	cout << "Company: " << company << endl;
	cout << "Birthday: " << birthyear << "/" << birthmonth << "/" << birthday << endl;
	cout << "PhoneNumber: " << call << endl;
	cout << "Email: " << email << endl;
}