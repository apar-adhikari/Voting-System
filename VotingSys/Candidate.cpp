#include "Candidate.h"
#include<iomanip>
#include<conio.h>

Candidate::Candidate(void)
{
}


Candidate::~Candidate(void)
{
}

void Candidate::operator ++(int)
{
	vote_recieved++;
}

void Candidate::display()
{
	int a;
}

void Candidate::getdata(void)
{
	cout << "Enter Name: ";
	cin >> name;
	cout << "Party: ";
	cin >> party;
	cout << "Age: ";
	cin >> age;
}

void Candidate::list(int i)
{
	cout << i+1 << "  |  ";
	cout.setf(ios::left,ios::adjustfield);
	cout.width(20);
	cout << name << " |  ";
	cout.width(5);
	cout << age << "|  ";
	cout.flush();
	cout << party << endl;
}