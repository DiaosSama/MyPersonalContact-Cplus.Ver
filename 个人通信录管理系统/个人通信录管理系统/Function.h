#pragma once
#include"Person.h"
#include"Classmate.h"
#include"Teammate.h"
#include"Friend.h"
#include"Relative.h"
#include<string>

void Input(int i);
void Edit(int i);
bool Judge(string x);
bool ReInput();
char* Copy(char*p , string a);
void PrintIt(int i);
void PrintName(int i);
bool SearchName(char *p);
void Delete(char *p);
void Birthmonth();
void HappyBirth();
bool IsLeapYear(int y);
int DaysOfMonth(int y, int m);
int DaysOfDate(int y, int m, int d);
bool JudgeFiveDay(int m, int d);
void CaculateWeekDay(int y, int m, int d);