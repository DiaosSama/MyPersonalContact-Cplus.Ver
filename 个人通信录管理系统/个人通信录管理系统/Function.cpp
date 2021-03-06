#include"stdafx.h"
#include"Function.h"
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

//判断输入是否合法
bool Judge(string x)
{
	if (x.size() > 30) { cout << "The length of string is overflow!(looger than 30)" << endl; return false; }
	else return true;
}

//提供多次输入选项
bool ReInput()
{
	char a;
	cout << "Do you want to input again?(Y or N)"; cin >> a;
	if (a == 'Y') return true;
	else return false;
}

//将string类转化为字符指针
char* Copy(char *p, string a)
{
	int i;
	p = new char[a.size()];
	for (i = 0;i < a.size();i++)
	{
		p[i] = a[i];
	}
	p[i] = '\0';
	return p;
}

//Write() First version
/*void WriteCm(Classmate x)
{
	fstream stuf;
	stuf.open("AddressBook1.txt", ios::out | ios::app);
	stuf.seekp(ios::end);
	stuf.write((char*)&(x), sizeof(x));
	stuf.close();
}

void WriteTm(Teammate x)
{
	fstream stuf;
	stuf.open("AddressBook2.txt", ios::out | ios::app);
	stuf.seekp(ios::end);
	stuf.write((char*)&(x), sizeof(x));
	stuf.close();
}

void WriteFd(Friend x)
{
	fstream stuf;
	stuf.open("AddressBook3.txt", ios::out | ios::app);
	stuf.seekp(ios::end);
	stuf.write((char*)&(x), sizeof(x));
	stuf.close();
}

void WriteRl(Relative x)
{
	fstream stuf;
	stuf.open("AddressBook4.txt", ios::out | ios::app);
	stuf.seekp(ios::end);
	stuf.write((char*)&(x), sizeof(x));
	stuf.close();
}*/

//输入信息
void Input(int i)
{
	//输入Classmate
	if (i == 1)
	{
		char *p = NULL, *q = NULL, *r = NULL, *d = NULL;
		string x, y, z, w;
		int a, b, c;
A:		cout << "Please input your classmate's name: "; cin >> x;
		if (!Judge(x))
		{
			if (ReInput()) goto A;
			else return;
		}
		p = Copy(p, x);
B:		cout<< "Please input your classmate's email: "; cin >> y;
		if (!Judge(y))
		{
			if (ReInput()) goto B;
			else return;
		}
		q = Copy(q, y);
C:		cout << "Please input your classmate's school: "; cin >> z;
		if (!Judge(z))
		{
			if (ReInput()) goto C;
			else return;
		}
		r = Copy(r, z);
		cout << "Please input your classmate's birthyear: "; cin >> a;
		cout << "Please input your classmate's birthmonth: "; cin >> b;
		cout << "Please input your classmate's birthday: "; cin >> c;
M:		cout << "Please input your classmate's phone number: "; cin >> w;
		if (!Judge(w))
		{
			if (ReInput()) goto M;
			else return;
		}
		d = Copy(d, w);
		Classmate a1(p, a, b, c, d, q, r);
		a1.Write();
	}
	//输入Teammate
	if (i == 2)
	{
		char *p = NULL, *q = NULL, *r = NULL, *d = NULL;
		string x, y, z, w;
		int a, b, c;
D:		cout << "Please input your teammate's name: "; cin >> x;
		if (!Judge(x))
		{
			if (ReInput()) goto D;
			else return;
		}
		p = Copy(p, x);
E:		cout << "Please input your teammate's email: "; cin >> y;
		if (!Judge(y))
		{
			if (ReInput()) goto E;
			else return;
		}
		q = Copy(q, y);
F:		cout << "Please input your teammate's company: "; cin >> z;
		if (!Judge(z))
		{
			if (ReInput()) goto F;
			else return;
		}
		r = Copy(r, z);
		cout << "Please input your teammate's birthyear: "; cin >> a;
		cout << "Please input your teammate's birthmonth: "; cin >> b;
		cout << "Please input your teammate's birthday: "; cin >> c;
N:		cout << "Please input your teammate's phone number: "; cin >> w;
		if (!Judge(w))
		{
			if (ReInput()) goto N;
			else return;
		}
		d = Copy(d, w);
		Teammate a1(p, a, b, c, d, q, r);
		a1.Write();
	}
	//输入Friend
	if (i == 3)
	{
		char *p = NULL, *q = NULL, *r = NULL, *d = NULL;
		string x, y, z, w;
		int a, b, c;
	G:		cout << "Please input your friend's name: "; cin >> x;
		if (!Judge(x))
		{
			if (ReInput()) goto G;
			else return;
		}
		p = Copy(p, x);
	H:		cout << "Please input your friend's email: "; cin >> y;
		if (!Judge(y))
		{
			if (ReInput()) goto H;
			else return;
		}
		q = Copy(q, y);
	I:		cout << "Please input your friend's meeting place: "; cin >> z;
		if (!Judge(z))
		{
			if (ReInput()) goto I;
			else return;
		}
		r = Copy(r, z);
		cout << "Please input your friend's birthyear: "; cin >> a;
		cout << "Please input your friend's birthmonth: "; cin >> b;
		cout << "Please input your friend's birthday: "; cin >> c;
O:		cout << "Please input your friend's phone number: "; cin >> w;
		if (!Judge(w))
		{
			if (ReInput()) goto O;
			else return;
		}
		d = Copy(d, w);
		Friend a1(p, a, b, c, d, q, r);
		a1.Write();
	}
	//输入Relative
	if (i == 4)
	{
		char *p = NULL, *q = NULL, *r = NULL, *d = NULL;
		string x, y, z, w;
		int a, b, c;
	J:		cout << "Please input your relative's name: "; cin >> x;
		if (!Judge(x))
		{
			if (ReInput()) goto J;
			else return;
		}
		p = Copy(p, x);
	K:		cout << "Please input your relative's email: "; cin >> y;
		if (!Judge(y))
		{
			if (ReInput()) goto K;
			else return;
		}
		q = Copy(q, y);
	L:		cout << "Please input your relative's generation: "; cin >> z;
		if (!Judge(z))
		{
			if (ReInput()) goto L;
			else return;
		}
		r = Copy(r, z);
		cout << "Please input your relative's birthyear: "; cin >> a;
		cout << "Please input your relative's birthmonth: "; cin >> b;
		cout << "Please input your relative's birthday: "; cin >> c;
P:		cout << "Please input your relative's phone number: "; cin >> w;
		if (!Judge(w))
		{
			if (ReInput()) goto P;
			else return;
		}
		d = Copy(d, w);
		Relative a1(p, a, b, c, d, q, r);
		a1.Write();
	}
	//返回上级菜单
	if (i == 0) { return; }
}

//编辑信息
void Edit(char *p)
{
	fstream instuf, outstuf;
	bool work = false;
	string x, y, z;
	char *x1 = NULL, *y1 = NULL, *z1 = NULL;
	Classmate a; Teammate b; Friend c; Relative d;
	instuf.open("AddressBook1.txt", ios::in);
	outstuf.open("Temp.txt", ios::out);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		if (strcmp(a.name, p) != 0)
		{
			outstuf << a.name << ' ' << a.schoolname << ' ' << a.birthyear << ' ' << a.birthmonth << ' ' << a.birthday << ' ' << a.call << ' ' << a.email << '\n';
		}
		else
		{ 
A:			cout << "Please input the new school name : ";
			cin >> x;
			if (!Judge(x))
			{
				if (ReInput()) goto A;
				else return;
			}
			x1 = Copy(x1, x);
B:			cout << "Please input the new phone number : "; 
			cin >> y;
			if (!Judge(y))
			{
				if (ReInput()) goto B;
				else return;
			}
			y1 = Copy(y1, y);
C:			cout << "Please input the new emaill : "; 
			cin >> z;
			if (!Judge(z))
			{
				if (ReInput()) goto C;
				else return;
			}
			z1 = Copy(z1, z);
			strcpy_s(a.schoolname, x1);
			strcpy_s(a.call, y1);
			strcpy_s(a.email, z1);
			outstuf << a.name << ' ' << a.schoolname << ' ' << a.birthyear << ' ' << a.birthmonth << ' ' << a.birthday << ' ' << a.call << ' ' << a.email << '\n';
			work = true;
		}
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook1.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		instuf << a.name << ' ' << a.schoolname << ' ' << a.birthyear << ' ' << a.birthmonth << ' ' << a.birthday << ' ' << a.call << ' ' << a.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already changed." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook2.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		if (strcmp(b.name, p) != 0)
		{
			outstuf << b.name << ' ' << b.company << ' ' << b.birthyear << ' ' << b.birthmonth << ' ' << b.birthday << ' ' << b.call << ' ' << b.email << '\n';
		}
		else 
		{
D:			cout << "Please input the new company : "; 
			cin >> x; 
			if (!Judge(x))
			{
				if (ReInput()) goto D;
				else return;
			}
			x1 = Copy(x1, x);
E:			cout << "Please input the new phone number : "; 
			cin >> y; 
			if (!Judge(y))
			{
				if (ReInput()) goto E;
				else return;
			}
			y1 = Copy(y1, y);
F:			cout << "Please input the new emaill : "; 
			cin >> z; 
			if (!Judge(z))
			{
				if (ReInput()) goto F;
				else return;
			}
			z1 = Copy(z1, z);
			strcpy_s(b.company, x1);
			strcpy_s(b.call, y1);
			strcpy_s(b.email, z1);
			outstuf << b.name << ' ' << b.company << ' ' << b.birthyear << ' ' << b.birthmonth << ' ' << b.birthday << ' ' << b.call << ' ' << b.email << '\n';
			work = true;
		}
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook2.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		instuf << b.name << ' ' << b.company << ' ' << b.birthyear << ' ' << b.birthmonth << ' ' << b.birthday << ' ' << b.call << ' ' << b.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already changed." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook3.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		if (strcmp(c.name, p) != 0)
		{
			outstuf << c.name << ' ' << c.place << ' ' << c.birthyear << ' ' << c.birthmonth << ' ' << c.birthday << ' ' << c.call << ' ' << c.email << '\n';
		}
		else
		{
G:			cout << "Please input the new place : "; 
			cin >> x; 
			if (!Judge(x))
			{
				if (ReInput()) goto G;
				else return;
			}
			x1 = Copy(x1, x);
H:			cout << "Please input the new phone number : "; 
			cin >> y; 
			if (!Judge(y))
			{
				if (ReInput()) goto H;
				else return;
			}
			y1 = Copy(y1, y);
I:			cout << "Please input the new emaill : "; 
			cin >> z;
			if (!Judge(z))
			{
				if (ReInput()) goto I;
				else return;
			}
			z1 = Copy(z1, z);
			strcpy_s(c.place, x1);
			strcpy_s(c.call, y1);
			strcpy_s(c.email, z1);
			outstuf << c.name << ' ' << c.place << ' ' << c.birthyear << ' ' << c.birthmonth << ' ' << c.birthday << ' ' << c.call << ' ' << c.email << '\n';
			work = true;
		}
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook3.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		instuf << c.name << ' ' << c.place << ' ' << c.birthyear << ' ' << c.birthmonth << ' ' << c.birthday << ' ' << c.call << ' ' << c.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already changed." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook4.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		if (strcmp(d.name, p) != 0)
		{
			outstuf << d.name << ' ' << d.generation << ' ' << d.birthyear << ' ' << d.birthmonth << ' ' << d.birthday << ' ' << d.call << ' ' << d.email << '\n';
		}
		else
		{
			cout << "Please input the new generation : "; 
J:			cin >> x; 
			if (!Judge(x))
			{
				if (ReInput()) goto J;
				else return;
			}
			x1 = Copy(x1, x);
			cout << "Please input the new phone number : "; 
K:			cin >> y; 
			if (!Judge(y))
			{
				if (ReInput()) goto K;
				else return;
			}
			y1 = Copy(y1, y);
			cout << "Please input the new emaill : "; 
L:			cin >> z; 
			if (!Judge(z))
			{
				if (ReInput()) goto L;
				else return;
			}
			z1 = Copy(z1, z);
			strcpy_s(d.generation, x1);
			strcpy_s(d.call, y1);
			strcpy_s(d.email, z1);
			outstuf << d.name << ' ' << d.generation << ' ' << d.birthyear << ' ' << d.birthmonth << ' ' << d.birthday << ' ' << d.call << ' ' << d.email << '\n';
			work = true;
		}
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook4.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		instuf << d.name << ' ' << d.generation << ' ' << d.birthyear << ' ' << d.birthmonth << ' ' << d.birthday << ' ' << d.call << ' ' << d.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already changed." << endl; return; }
}

//输出信息
void PrintIt(int i)
{
	//打印所有
	if (i == 1)
	{
		fstream stuf;
		Classmate a; Teammate b; Friend c; Relative d;
		stuf.open("AddressBook1.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
		{
			a.Print();
		}
		stuf.close();
		stuf.open("AddressBook2.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
		{
			b.Print();
		}
		stuf.close();
		stuf.open("AddressBook3.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
		{
			c.Print();
		}
		stuf.close();
		stuf.open("AddressBook4.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
		{
			d.Print();
		}
		stuf.close();
	}
	//打印Classmate
	if (i == 2)
	{
		fstream stuf;
		Classmate a;
		stuf.open("AddressBook1.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
		{
			a.Print();
		}
		stuf.close();
	}
	//打印Teammate
	if (i == 3)
	{
		fstream stuf;
		Teammate b;
		stuf.open("AddressBook2.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
		{
			b.Print();
		}
		stuf.close();
	}
	//打印Friend
	if (i == 4)
	{
		fstream stuf;
		Friend c;
		stuf.open("AddressBook3.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
		{
			c.Print();
		}
		stuf.close();
	}
	//打印Relative
	if (i == 5)
	{
		fstream stuf;
		Relative d;
		stuf.open("AddressBook4.txt", ios::in);
		stuf.seekg(ios::beg);
		if (!stuf)
		{
			cerr << "File could not be open!" << endl;
			abort();
		}
		while (stuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
		{
			d.Print();
		}
		stuf.close();
	}
	//返回上级菜单
	if (i == 0) { return; }
}

//按顺序输出
void PrintName(int i)
{
	if (i == 1)
	{
		//确定通讯录项目数
		int size = 0;
		fstream instuf("AddressBook1.txt", ios::in);
		Classmate a; Teammate b; Friend c; Relative d;
		while (instuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email) { size++; }
		instuf.close();
		instuf.open("AddressBook2.txt", ios::in);
		while (instuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email) { size++; }
		instuf.close();
		instuf.open("AddressBook3.txt", ios::in);
		while (instuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email) { size++; }
		instuf.close();
		instuf.open("AddressBook4.txt", ios::in);
		while (instuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email) { size++; }
		instuf.close();
		//按名字排序
		char **p; int now = 0;
		p = new char *[size];
		for (int j = 0;j < size;j++)
		{
			p[j] = new char[30];
		}
		instuf.open("AddressBook1.txt", ios::in);
		while (instuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
		{
			strcpy_s(p[now], strlen(a.name) + 1, a.name);
			now++;
		}
		instuf.close();
		instuf.open("AddressBook2.txt", ios::in);
		while (instuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
		{
			strcpy_s(p[now], strlen(b.name) + 1, b.name);
			now++;
		}
		instuf.close();
		instuf.open("AddressBook3.txt", ios::in);
		while (instuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
		{
			strcpy_s(p[now], strlen(c.name) + 1, c.name);
			now++;
		}
		instuf.close();
		instuf.open("AddressBook4.txt", ios::in);
		while (instuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
		{
			strcpy_s(p[now], strlen(d.name) + 1, d.name);
			now++;
		}
		instuf.close();
		char *temp = new char[30]; int work;
		for (int j = 1;j < size;j++)
		{
			work = 1;
			for (int k = 0;k < size-j;k++)
			{
				if (strcmp(p[k], p[k + 1]) > 0)
				{
					strcpy_s(temp, strlen(p[k]) + 1, p[k]);
					strcpy_s(p[k], strlen(p[k + 1])+1, p[k + 1]);
					strcpy_s(p[k + 1], strlen(temp)+1, temp);
					work = 0;
				}
			}
			if (work) break;
		}
		for (int j = 0;j < size;j++)
		{
			SearchName(p[j]);
		}
	}
}

//按姓名查询
bool SearchName(char *p)
{
	fstream stuf;
	Classmate a; Teammate b; Friend c; Relative d;
	stuf.open("AddressBook1.txt", ios::in);
	stuf.seekg(ios::beg);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		if (strcmp(a.name, p) == 0)
		{
			a.Print();
			return true;
		}	
	}
	stuf.close();
	stuf.open("AddressBook2.txt", ios::in);
	stuf.seekg(ios::beg);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		if (strcmp(b.name, p) == 0)
		{
			b.Print();
			return true;
		}
	}
	stuf.close();
	stuf.open("AddressBook3.txt", ios::in);
	stuf.seekg(ios::beg);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		if (strcmp(c.name, p) == 0)
		{
			c.Print();
			return true;
		}
	}
	stuf.close();
	stuf.open("AddressBook4.txt", ios::in);
	stuf.seekg(ios::beg);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		if (strcmp(d.name, p) == 0)
		{
			d.Print();
			return true;
		}
	}
	stuf.close();
	cout << "Cannot find this person !" << endl;
	return false;
}

//按名字删除
void Delete(char *p)
{
	fstream instuf, outstuf;
	bool work = false;
	Classmate a; Teammate b; Friend c; Relative d;
	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook1.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		if (strcmp(a.name, p) != 0)
		{
			outstuf << a.name << ' ' << a.schoolname << ' ' << a.birthyear << ' ' << a.birthmonth << ' ' << a.birthday << ' ' << a.call << ' ' << a.email << '\n';
		}
		else { work = true; continue; }
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook1.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		instuf << a.name << ' ' << a.schoolname << ' ' << a.birthyear << ' ' << a.birthmonth << ' ' << a.birthday << ' ' << a.call << ' ' << a.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already deleted." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook2.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		if (strcmp(b.name, p) != 0)
		{
			outstuf << b.name << ' ' << b.company << ' ' << b.birthyear << ' ' << b.birthmonth << ' ' << b.birthday << ' ' << b.call << ' ' << b.email << '\n';
		}
		else { work = true; continue; }
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook2.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		instuf << b.name << ' ' << b.company << ' ' << b.birthyear << ' ' << b.birthmonth << ' ' << b.birthday << ' ' << b.call << ' ' << b.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already deleted." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook3.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		if (strcmp(b.name, p) != 0)
		{
			outstuf << c.name << ' ' << c.place << ' ' << c.birthyear << ' ' << c.birthmonth << ' ' << c.birthday << ' ' << c.call << ' ' << c.email << '\n';
		}
		else { work = true; continue; }
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook3.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		instuf << c.name << ' ' << c.place << ' ' << c.birthyear << ' ' << c.birthmonth << ' ' << c.birthday << ' ' << c.call << ' ' << c.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already deleted." << endl; return; }

	outstuf.open("Temp.txt", ios::out);
	instuf.open("AddressBook4.txt", ios::in);
	if (!instuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	if (!outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (instuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		if (strcmp(b.name, p) != 0)
		{
			outstuf << d.name << ' ' << d.generation << ' ' << d.birthyear << ' ' << d.birthmonth << ' ' << d.birthday << ' ' << d.call << ' ' << d.email << '\n';
		}
		else { work = true; continue; }
	}
	instuf.close(); outstuf.close();
	instuf.open("AddressBook4.txt", ios::out);
	outstuf.open("Temp.txt", ios::in);
	if (!instuf || !outstuf)
	{
		cerr << "Sorry. The application crushed!" << endl;
		abort();
	}
	while (outstuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		instuf << d.name << ' ' << d.generation << ' ' << d.birthyear << ' ' << d.birthmonth << ' ' << d.birthday << ' ' << d.call << ' ' << d.email << '\n';
	}
	instuf.close(); outstuf.close();
	if (work) { cout << "The item was already deleted." << endl; return; }
}

//统计各月份人数
void Birthmonth()
{
	int month[13];
	for (int i = 1;i < 13;i++)
	{
		month[i] = 0;
	}
	fstream instuf("AddressBook1.txt", ios::in);
	Classmate a; Teammate b; Friend c; Relative d;
	while (instuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{ 
		month[a.birthmonth]++;
	}
	instuf.close();
	instuf.open("AddressBook2.txt", ios::in);
	while (instuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email) 
	{
		month[b.birthmonth]++;
	}
	instuf.close();
	instuf.open("AddressBook3.txt", ios::in);
	while (instuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		month[c.birthmonth]++;
	}
	instuf.close();
	instuf.open("AddressBook4.txt", ios::in);
	while (instuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		month[d.birthmonth]++;
	}
	instuf.close();
	cout << "各月份出生人数：" << endl;
	for (int i = 1;i < 13;i++)
	{
		cout << i << "月：" << month[i] << "人" << endl;
	}
}

//查找在五天内过生日的人的信息
void HappyBirth()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	Classmate a; Teammate b; Friend c; Relative d;
	fstream stuf; int work = 0;
	stuf.open("AddressBook1.txt", ios::in);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> a.name >> a.schoolname >> a.birthyear >> a.birthmonth >> a.birthday >> a.call >> a.email)
	{
		if (JudgeFiveDay(a.birthmonth, a.birthday)) 
		{
			a.Print(); work = 1;
		}
	}
	stuf.close();
	stuf.open("AddressBook2.txt", ios::in);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> b.name >> b.company >> b.birthyear >> b.birthmonth >> b.birthday >> b.call >> b.email)
	{
		if (JudgeFiveDay(b.birthmonth, b.birthday))
		{
			b.Print(); work = 1;
		}
	}
	stuf.close();
	stuf.open("AddressBook3.txt", ios::in);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> c.name >> c.place >> c.birthyear >> c.birthmonth >> c.birthday >> c.call >> c.email)
	{
		if (JudgeFiveDay(c.birthmonth, c.birthday))
		{
			c.Print(); work = 1;
		}
	}
	stuf.close();
	stuf.open("AddressBook4.txt", ios::in);
	if (!stuf)
	{
		cerr << "File could not be open!" << endl;
		abort();
	}
	while (stuf >> d.name >> d.generation >> d.birthyear >> d.birthmonth >> d.birthday >> d.call >> d.email)
	{
		if (JudgeFiveDay(d.birthmonth, d.birthday))
		{
			d.Print(); work = 1;
		}
	}
	stuf.close();
	if (!work) { cout << "没有人在将来的五天内生日！" << endl; }
}

//判断是否闰年
bool IsLeapYear(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;//真返回为1，假为0
}

//返回某年某月天数
int DaysOfMonth(int y, int m)
{
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (m != 2)
		return day[m - 1];
	else
		return 28 + IsLeapYear(y);
}

//计算一共天数
int DaysOfDate(int y,int m,int d)//计算一共的天数  
{
	int days = d;
	for (int j = 1;j<y;j++)//计算年  
		days += 365 + IsLeapYear(j);
	for (int k = 1;k<m;k++)//计算月  
		days += DaysOfMonth(y, k);  
	return days;
}

//判断五天内是否有人过生日
bool JudgeFiveDay(int m, int d)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int dday, work = 0;
	if (m >= 1 + ltm->tm_mon)
	{
		dday = DaysOfDate(1900 + ltm->tm_year, m, d) - DaysOfDate(1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
		if (dday <= 5 && dday >= 0)
		{
			work = 1; CaculateWeekDay(1900 + ltm->tm_year, m, d);
		}
	}
	else
	{
		dday = DaysOfDate(1901 + ltm->tm_year, m, d) - DaysOfDate(1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
		if (dday <= 5 && dday >= 0)
		{
			work = 1; CaculateWeekDay(1901 + ltm->tm_year, m, d);
		}
	}
	if (work) return true;
	else return false;
}

//判断某个日期为星期几
void CaculateWeekDay(int y, int m, int d)
{
	if (m == 1 || m == 2) {
		m += 12;
		y--;
	}
	int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
	switch (iWeek)
	{
	case 0: cout << "（生日当天为星期一）" << endl; break;
	case 1: cout << "（生日当天为星期二）" << endl; break;
	case 2: cout << "（生日当天为星期三）" << endl; break;
	case 3: cout << "（生日当天为星期四）" << endl; break;
	case 4: cout << "（生日当天为星期五）" << endl; break;
	case 5: cout << "（生日当天为星期六）" << endl; break;
	case 6: cout << "（生日当天为星期日）" << endl; break;
	}
}