#pragma once
#include<iostream>
#include<string>
#define VT 1;
#define CT 2;

using namespace std;

class Person
{
protected:
	char name[20];
	int age;
public:
	Person(void);
	virtual ~Person(void);
	virtual void display() = 0;
};
